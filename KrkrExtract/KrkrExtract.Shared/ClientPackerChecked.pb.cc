// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClientPackerChecked.proto

#include "ClientPackerChecked.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class ClientPackerCheckedDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ClientPackerChecked> _instance;
} _ClientPackerChecked_default_instance_;
static void InitDefaultsscc_info_ClientPackerChecked_ClientPackerChecked_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ClientPackerChecked_default_instance_;
    new (ptr) ::ClientPackerChecked();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ClientPackerChecked::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ClientPackerChecked_ClientPackerChecked_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ClientPackerChecked_ClientPackerChecked_2eproto}, {}};


// ===================================================================

void ClientPackerChecked::InitAsDefaultInstance() {
}
class ClientPackerChecked::_Internal {
 public:
};

ClientPackerChecked::ClientPackerChecked()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ClientPackerChecked)
}
ClientPackerChecked::ClientPackerChecked(const ClientPackerChecked& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  basedir_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_basedir().empty()) {
    basedir_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.basedir_);
  }
  originalarchivename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_originalarchivename().empty()) {
    originalarchivename_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.originalarchivename_);
  }
  outputarchivename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_outputarchivename().empty()) {
    outputarchivename_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.outputarchivename_);
  }
  sequenceid_ = from.sequenceid_;
  // @@protoc_insertion_point(copy_constructor:ClientPackerChecked)
}

void ClientPackerChecked::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ClientPackerChecked_ClientPackerChecked_2eproto.base);
  basedir_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  originalarchivename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  outputarchivename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sequenceid_ = PROTOBUF_ULONGLONG(0);
}

ClientPackerChecked::~ClientPackerChecked() {
  // @@protoc_insertion_point(destructor:ClientPackerChecked)
  SharedDtor();
}

void ClientPackerChecked::SharedDtor() {
  basedir_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  originalarchivename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  outputarchivename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ClientPackerChecked::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ClientPackerChecked& ClientPackerChecked::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ClientPackerChecked_ClientPackerChecked_2eproto.base);
  return *internal_default_instance();
}


void ClientPackerChecked::Clear() {
// @@protoc_insertion_point(message_clear_start:ClientPackerChecked)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  basedir_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  originalarchivename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  outputarchivename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sequenceid_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear();
}

const char* ClientPackerChecked::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 SequenceId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          sequenceid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string BaseDir = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_basedir();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string OriginalArchiveName = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_originalarchivename();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string OutputArchiveName = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_outputarchivename();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ClientPackerChecked::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ClientPackerChecked)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 SequenceId = 1;
  if (this->sequenceid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_sequenceid(), target);
  }

  // string BaseDir = 2;
  if (this->basedir().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_basedir().data(), static_cast<int>(this->_internal_basedir().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ClientPackerChecked.BaseDir");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_basedir(), target);
  }

  // string OriginalArchiveName = 3;
  if (this->originalarchivename().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_originalarchivename().data(), static_cast<int>(this->_internal_originalarchivename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ClientPackerChecked.OriginalArchiveName");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_originalarchivename(), target);
  }

  // string OutputArchiveName = 4;
  if (this->outputarchivename().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_outputarchivename().data(), static_cast<int>(this->_internal_outputarchivename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ClientPackerChecked.OutputArchiveName");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_outputarchivename(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields().data(),
        static_cast<int>(_internal_metadata_.unknown_fields().size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClientPackerChecked)
  return target;
}

size_t ClientPackerChecked::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ClientPackerChecked)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string BaseDir = 2;
  if (this->basedir().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_basedir());
  }

  // string OriginalArchiveName = 3;
  if (this->originalarchivename().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_originalarchivename());
  }

  // string OutputArchiveName = 4;
  if (this->outputarchivename().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_outputarchivename());
  }

  // uint64 SequenceId = 1;
  if (this->sequenceid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_sequenceid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields().size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ClientPackerChecked::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ClientPackerChecked*>(
      &from));
}

void ClientPackerChecked::MergeFrom(const ClientPackerChecked& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ClientPackerChecked)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.basedir().size() > 0) {

    basedir_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.basedir_);
  }
  if (from.originalarchivename().size() > 0) {

    originalarchivename_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.originalarchivename_);
  }
  if (from.outputarchivename().size() > 0) {

    outputarchivename_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.outputarchivename_);
  }
  if (from.sequenceid() != 0) {
    _internal_set_sequenceid(from._internal_sequenceid());
  }
}

void ClientPackerChecked::CopyFrom(const ClientPackerChecked& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ClientPackerChecked)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientPackerChecked::IsInitialized() const {
  return true;
}

void ClientPackerChecked::InternalSwap(ClientPackerChecked* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  basedir_.Swap(&other->basedir_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  originalarchivename_.Swap(&other->originalarchivename_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  outputarchivename_.Swap(&other->outputarchivename_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(sequenceid_, other->sequenceid_);
}

std::string ClientPackerChecked::GetTypeName() const {
  return "ClientPackerChecked";
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ClientPackerChecked* Arena::CreateMaybeMessage< ::ClientPackerChecked >(Arena* arena) {
  return Arena::CreateInternal< ::ClientPackerChecked >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
