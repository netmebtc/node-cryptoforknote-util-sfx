// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_outs.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_get_5fouts_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_get_5fouts_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_get_5fouts_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_get_5fouts_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_get_5fouts_2eproto;
namespace safex {
class Out_entry;
class Out_entryDefaultTypeInternal;
extern Out_entryDefaultTypeInternal _Out_entry_default_instance_;
class Outs;
class OutsDefaultTypeInternal;
extern OutsDefaultTypeInternal _Outs_default_instance_;
}  // namespace safex
PROTOBUF_NAMESPACE_OPEN
template<> ::safex::Out_entry* Arena::CreateMaybeMessage<::safex::Out_entry>(Arena*);
template<> ::safex::Outs* Arena::CreateMaybeMessage<::safex::Outs>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace safex {

// ===================================================================

class Out_entry :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:safex.Out_entry) */ {
 public:
  Out_entry();
  virtual ~Out_entry();

  Out_entry(const Out_entry& from);
  Out_entry(Out_entry&& from) noexcept
    : Out_entry() {
    *this = ::std::move(from);
  }

  inline Out_entry& operator=(const Out_entry& from) {
    CopyFrom(from);
    return *this;
  }
  inline Out_entry& operator=(Out_entry&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Out_entry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Out_entry* internal_default_instance() {
    return reinterpret_cast<const Out_entry*>(
               &_Out_entry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Out_entry& a, Out_entry& b) {
    a.Swap(&b);
  }
  inline void Swap(Out_entry* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Out_entry* New() const final {
    return CreateMaybeMessage<Out_entry>(nullptr);
  }

  Out_entry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Out_entry>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Out_entry& from);
  void MergeFrom(const Out_entry& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Out_entry* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "safex.Out_entry";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_get_5fouts_2eproto);
    return ::descriptor_table_get_5fouts_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
    kTxidFieldNumber = 4,
    kHeightFieldNumber = 3,
    kUnlockedFieldNumber = 2,
  };
  // bytes key = 1;
  void clear_key();
  const std::string& key() const;
  void set_key(const std::string& value);
  void set_key(std::string&& value);
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  std::string* mutable_key();
  std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // bytes txid = 4;
  void clear_txid();
  const std::string& txid() const;
  void set_txid(const std::string& value);
  void set_txid(std::string&& value);
  void set_txid(const char* value);
  void set_txid(const void* value, size_t size);
  std::string* mutable_txid();
  std::string* release_txid();
  void set_allocated_txid(std::string* txid);
  private:
  const std::string& _internal_txid() const;
  void _internal_set_txid(const std::string& value);
  std::string* _internal_mutable_txid();
  public:

  // uint64 height = 3;
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::uint64 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // bool unlocked = 2;
  void clear_unlocked();
  bool unlocked() const;
  void set_unlocked(bool value);
  private:
  bool _internal_unlocked() const;
  void _internal_set_unlocked(bool value);
  public:

  // @@protoc_insertion_point(class_scope:safex.Out_entry)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr txid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 height_;
  bool unlocked_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_get_5fouts_2eproto;
};
// -------------------------------------------------------------------

class Outs :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:safex.Outs) */ {
 public:
  Outs();
  virtual ~Outs();

  Outs(const Outs& from);
  Outs(Outs&& from) noexcept
    : Outs() {
    *this = ::std::move(from);
  }

  inline Outs& operator=(const Outs& from) {
    CopyFrom(from);
    return *this;
  }
  inline Outs& operator=(Outs&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Outs& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Outs* internal_default_instance() {
    return reinterpret_cast<const Outs*>(
               &_Outs_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Outs& a, Outs& b) {
    a.Swap(&b);
  }
  inline void Swap(Outs* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Outs* New() const final {
    return CreateMaybeMessage<Outs>(nullptr);
  }

  Outs* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Outs>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Outs& from);
  void MergeFrom(const Outs& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Outs* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "safex.Outs";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_get_5fouts_2eproto);
    return ::descriptor_table_get_5fouts_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOutsFieldNumber = 1,
    kStatusFieldNumber = 2,
  };
  // repeated .safex.Out_entry outs = 1;
  int outs_size() const;
  private:
  int _internal_outs_size() const;
  public:
  void clear_outs();
  ::safex::Out_entry* mutable_outs(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safex::Out_entry >*
      mutable_outs();
  private:
  const ::safex::Out_entry& _internal_outs(int index) const;
  ::safex::Out_entry* _internal_add_outs();
  public:
  const ::safex::Out_entry& outs(int index) const;
  ::safex::Out_entry* add_outs();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safex::Out_entry >&
      outs() const;

  // string status = 2;
  void clear_status();
  const std::string& status() const;
  void set_status(const std::string& value);
  void set_status(std::string&& value);
  void set_status(const char* value);
  void set_status(const char* value, size_t size);
  std::string* mutable_status();
  std::string* release_status();
  void set_allocated_status(std::string* status);
  private:
  const std::string& _internal_status() const;
  void _internal_set_status(const std::string& value);
  std::string* _internal_mutable_status();
  public:

  // @@protoc_insertion_point(class_scope:safex.Outs)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safex::Out_entry > outs_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_get_5fouts_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Out_entry

// bytes key = 1;
inline void Out_entry::clear_key() {
  key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Out_entry::key() const {
  // @@protoc_insertion_point(field_get:safex.Out_entry.key)
  return _internal_key();
}
inline void Out_entry::set_key(const std::string& value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:safex.Out_entry.key)
}
inline std::string* Out_entry::mutable_key() {
  // @@protoc_insertion_point(field_mutable:safex.Out_entry.key)
  return _internal_mutable_key();
}
inline const std::string& Out_entry::_internal_key() const {
  return key_.GetNoArena();
}
inline void Out_entry::_internal_set_key(const std::string& value) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Out_entry::set_key(std::string&& value) {
  
  key_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:safex.Out_entry.key)
}
inline void Out_entry::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:safex.Out_entry.key)
}
inline void Out_entry::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:safex.Out_entry.key)
}
inline std::string* Out_entry::_internal_mutable_key() {
  
  return key_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Out_entry::release_key() {
  // @@protoc_insertion_point(field_release:safex.Out_entry.key)
  
  return key_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Out_entry::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:safex.Out_entry.key)
}

// bool unlocked = 2;
inline void Out_entry::clear_unlocked() {
  unlocked_ = false;
}
inline bool Out_entry::_internal_unlocked() const {
  return unlocked_;
}
inline bool Out_entry::unlocked() const {
  // @@protoc_insertion_point(field_get:safex.Out_entry.unlocked)
  return _internal_unlocked();
}
inline void Out_entry::_internal_set_unlocked(bool value) {
  
  unlocked_ = value;
}
inline void Out_entry::set_unlocked(bool value) {
  _internal_set_unlocked(value);
  // @@protoc_insertion_point(field_set:safex.Out_entry.unlocked)
}

// uint64 height = 3;
inline void Out_entry::clear_height() {
  height_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Out_entry::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Out_entry::height() const {
  // @@protoc_insertion_point(field_get:safex.Out_entry.height)
  return _internal_height();
}
inline void Out_entry::_internal_set_height(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  height_ = value;
}
inline void Out_entry::set_height(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:safex.Out_entry.height)
}

// bytes txid = 4;
inline void Out_entry::clear_txid() {
  txid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Out_entry::txid() const {
  // @@protoc_insertion_point(field_get:safex.Out_entry.txid)
  return _internal_txid();
}
inline void Out_entry::set_txid(const std::string& value) {
  _internal_set_txid(value);
  // @@protoc_insertion_point(field_set:safex.Out_entry.txid)
}
inline std::string* Out_entry::mutable_txid() {
  // @@protoc_insertion_point(field_mutable:safex.Out_entry.txid)
  return _internal_mutable_txid();
}
inline const std::string& Out_entry::_internal_txid() const {
  return txid_.GetNoArena();
}
inline void Out_entry::_internal_set_txid(const std::string& value) {
  
  txid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Out_entry::set_txid(std::string&& value) {
  
  txid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:safex.Out_entry.txid)
}
inline void Out_entry::set_txid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  txid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:safex.Out_entry.txid)
}
inline void Out_entry::set_txid(const void* value, size_t size) {
  
  txid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:safex.Out_entry.txid)
}
inline std::string* Out_entry::_internal_mutable_txid() {
  
  return txid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Out_entry::release_txid() {
  // @@protoc_insertion_point(field_release:safex.Out_entry.txid)
  
  return txid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Out_entry::set_allocated_txid(std::string* txid) {
  if (txid != nullptr) {
    
  } else {
    
  }
  txid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), txid);
  // @@protoc_insertion_point(field_set_allocated:safex.Out_entry.txid)
}

// -------------------------------------------------------------------

// Outs

// repeated .safex.Out_entry outs = 1;
inline int Outs::_internal_outs_size() const {
  return outs_.size();
}
inline int Outs::outs_size() const {
  return _internal_outs_size();
}
inline void Outs::clear_outs() {
  outs_.Clear();
}
inline ::safex::Out_entry* Outs::mutable_outs(int index) {
  // @@protoc_insertion_point(field_mutable:safex.Outs.outs)
  return outs_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safex::Out_entry >*
Outs::mutable_outs() {
  // @@protoc_insertion_point(field_mutable_list:safex.Outs.outs)
  return &outs_;
}
inline const ::safex::Out_entry& Outs::_internal_outs(int index) const {
  return outs_.Get(index);
}
inline const ::safex::Out_entry& Outs::outs(int index) const {
  // @@protoc_insertion_point(field_get:safex.Outs.outs)
  return _internal_outs(index);
}
inline ::safex::Out_entry* Outs::_internal_add_outs() {
  return outs_.Add();
}
inline ::safex::Out_entry* Outs::add_outs() {
  // @@protoc_insertion_point(field_add:safex.Outs.outs)
  return _internal_add_outs();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::safex::Out_entry >&
Outs::outs() const {
  // @@protoc_insertion_point(field_list:safex.Outs.outs)
  return outs_;
}

// string status = 2;
inline void Outs::clear_status() {
  status_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Outs::status() const {
  // @@protoc_insertion_point(field_get:safex.Outs.status)
  return _internal_status();
}
inline void Outs::set_status(const std::string& value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:safex.Outs.status)
}
inline std::string* Outs::mutable_status() {
  // @@protoc_insertion_point(field_mutable:safex.Outs.status)
  return _internal_mutable_status();
}
inline const std::string& Outs::_internal_status() const {
  return status_.GetNoArena();
}
inline void Outs::_internal_set_status(const std::string& value) {
  
  status_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Outs::set_status(std::string&& value) {
  
  status_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:safex.Outs.status)
}
inline void Outs::set_status(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  status_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:safex.Outs.status)
}
inline void Outs::set_status(const char* value, size_t size) {
  
  status_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:safex.Outs.status)
}
inline std::string* Outs::_internal_mutable_status() {
  
  return status_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Outs::release_status() {
  // @@protoc_insertion_point(field_release:safex.Outs.status)
  
  return status_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Outs::set_allocated_status(std::string* status) {
  if (status != nullptr) {
    
  } else {
    
  }
  status_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), status);
  // @@protoc_insertion_point(field_set_allocated:safex.Outs.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace safex

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_get_5fouts_2eproto
