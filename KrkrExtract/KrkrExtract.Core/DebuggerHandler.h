#pragma once

#include <my.h>
#include "KrkrHeaders.h"
#include "XP3Parser.h"
#include <KrkrClientProxyer.h>
#include <KrkrExtract.SharedApi.h>
#include <memory>
#include "ml.h"
#include "argparse.h"

using namespace argparse;

class CommandWcharToUt8
{
public:
	static std::shared_ptr<PSTR> CmdLineToArgvWToA(PCWSTR CommandLine, PLONG_PTR Argc);
	static VOID FreeArgv(void* Argv);
};

class CommandParser : protected CommandWcharToUt8
{
public:
	CommandParser() {};
	virtual ~CommandParser() {};
	
	std::shared_ptr<ArgumentParser> ParseCommandLine(PCWSTR CommandLine, std::wstring& Error);
	std::wstring ShowHelp();

protected:
	virtual ArgumentParser* PrepareParser() = 0;
	virtual void FreeParser(ArgumentParser* Parser) = 0;
};

template<class T>
class CCommandPluginInstance
{
public:
	static CommandPlugin* CreateInstance(KrkrClientProxyer* Proxyer)
	{
		return new(std::nothrow) T(Proxyer);
	}
};

class DumpIndexCommandPlugin : 
	public    CommandPlugin,
	protected CommandParser,
	public    CCommandPluginInstance<DumpIndexCommandPlugin>
{
public:
	DumpIndexCommandPlugin() = delete;
	DumpIndexCommandPlugin(const DumpIndexCommandPlugin&) = delete;

	DumpIndexCommandPlugin(KrkrClientProxyer* Proxyer);
	~DumpIndexCommandPlugin();

	PCWSTR NTAPI GetCommandName();
	BOOL   NTAPI Exec(PWSTR Command);
	BOOL   NTAPI Help(StringView* HelperString);

private:
	ArgumentParser* PrepareParser();
	void FreeParser(ArgumentParser* Parser);
	NTSTATUS SaveIndex(PCWSTR FileName, PBYTE Buffer, ULONG Size);

private:
	KrkrClientProxyer* m_Proxyer = nullptr;
};



class DumpFileCommandPlugin : 
	public    CommandPlugin,
	protected CommandParser,
	public    CCommandPluginInstance<DumpFileCommandPlugin>
{
public:
	enum class Encode 
	{ 
		ANSI = 1, 
		UNICODE_LE, 
		UNICODE_BE, 
		UTF8, 
		UTF8_NOBOM 
	};

	DumpFileCommandPlugin() = delete;
	DumpFileCommandPlugin(const DumpFileCommandPlugin&) = delete;

	DumpFileCommandPlugin(KrkrClientProxyer* Proxyer);
	~DumpFileCommandPlugin();

	PCWSTR NTAPI GetCommandName();
	BOOL   NTAPI Exec(PWSTR Command);
	BOOL   NTAPI Help(StringView* HelperString);

private:
	NTSTATUS DumpWithFileName(PCWSTR FileName);
	NTSTATUS DumpWithFileList(PCWSTR FileListName);
	NTSTATUS DetectEncode(PBYTE Buffer, ULONG Size, Encode& TextEncode);
	NTSTATUS CheckUtf8WithoutBOM(PBYTE Buffer, ULONG Size);
	BOOL     ReadFileList(PCWSTR FileListName, std::vector<std::wstring>& FileList);

	void ReleaseStreamSafe(IStream* Stream);
	
	ArgumentParser* PrepareParser();
	void FreeParser(ArgumentParser* Parser);

private:
	KrkrClientProxyer* m_Proxyer = nullptr;
};


