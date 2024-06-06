// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BaseResponse.proto

#ifndef PROTOBUF_BaseResponse_2eproto__INCLUDED
#define PROTOBUF_BaseResponse_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "SKBuiltinString_t.pb.h"
// @@protoc_insertion_point(includes)
namespace MMPro {
namespace micromsg {
class BaseResponse;
class BaseResponseDefaultTypeInternal;
extern BaseResponseDefaultTypeInternal _BaseResponse_default_instance_;
class SKBuiltinString_t;
class SKBuiltinString_tDefaultTypeInternal;
extern SKBuiltinString_tDefaultTypeInternal _SKBuiltinString_t_default_instance_;
}  // namespace micromsg
}  // namespace MMPro

namespace MMPro {
namespace micromsg {

namespace protobuf_BaseResponse_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_BaseResponse_2eproto

// ===================================================================

class BaseResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MMPro.micromsg.BaseResponse) */ {
 public:
  BaseResponse();
  virtual ~BaseResponse();

  BaseResponse(const BaseResponse& from);

  inline BaseResponse& operator=(const BaseResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BaseResponse& default_instance();

  static inline const BaseResponse* internal_default_instance() {
    return reinterpret_cast<const BaseResponse*>(
               &_BaseResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BaseResponse* other);

  // implements Message ----------------------------------------------

  inline BaseResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  BaseResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BaseResponse& from);
  void MergeFrom(const BaseResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(BaseResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .MMPro.micromsg.SKBuiltinString_t _ErrMsg = 2;
  bool has__errmsg() const;
  void clear__errmsg();
  static const int kErrMsgFieldNumber = 2;
  const ::MMPro::micromsg::SKBuiltinString_t& _errmsg() const;
  ::MMPro::micromsg::SKBuiltinString_t* mutable__errmsg();
  ::MMPro::micromsg::SKBuiltinString_t* release__errmsg();
  void set_allocated__errmsg(::MMPro::micromsg::SKBuiltinString_t* _errmsg);

  // required int32 _Ret = 1;
  bool has__ret() const;
  void clear__ret();
  static const int kRetFieldNumber = 1;
  ::google::protobuf::int32 _ret() const;
  void set__ret(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MMPro.micromsg.BaseResponse)
 private:
  void set_has__ret();
  void clear_has__ret();
  void set_has__errmsg();
  void clear_has__errmsg();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::MMPro::micromsg::SKBuiltinString_t* _errmsg_;
  ::google::protobuf::int32 _ret_;
  friend struct protobuf_BaseResponse_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BaseResponse

// required int32 _Ret = 1;
inline bool BaseResponse::has__ret() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BaseResponse::set_has__ret() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BaseResponse::clear_has__ret() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BaseResponse::clear__ret() {
  _ret_ = 0;
  clear_has__ret();
}
inline ::google::protobuf::int32 BaseResponse::_ret() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.BaseResponse._Ret)
  return _ret_;
}
inline void BaseResponse::set__ret(::google::protobuf::int32 value) {
  set_has__ret();
  _ret_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.BaseResponse._Ret)
}

// required .MMPro.micromsg.SKBuiltinString_t _ErrMsg = 2;
inline bool BaseResponse::has__errmsg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BaseResponse::set_has__errmsg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BaseResponse::clear_has__errmsg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BaseResponse::clear__errmsg() {
  if (_errmsg_ != NULL) _errmsg_->::MMPro::micromsg::SKBuiltinString_t::Clear();
  clear_has__errmsg();
}
inline const ::MMPro::micromsg::SKBuiltinString_t& BaseResponse::_errmsg() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.BaseResponse._ErrMsg)
  return _errmsg_ != NULL ? *_errmsg_
                         : *::MMPro::micromsg::SKBuiltinString_t::internal_default_instance();
}
inline ::MMPro::micromsg::SKBuiltinString_t* BaseResponse::mutable__errmsg() {
  set_has__errmsg();
  if (_errmsg_ == NULL) {
    _errmsg_ = new ::MMPro::micromsg::SKBuiltinString_t;
  }
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.BaseResponse._ErrMsg)
  return _errmsg_;
}
inline ::MMPro::micromsg::SKBuiltinString_t* BaseResponse::release__errmsg() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.BaseResponse._ErrMsg)
  clear_has__errmsg();
  ::MMPro::micromsg::SKBuiltinString_t* temp = _errmsg_;
  _errmsg_ = NULL;
  return temp;
}
inline void BaseResponse::set_allocated__errmsg(::MMPro::micromsg::SKBuiltinString_t* _errmsg) {
  delete _errmsg_;
  _errmsg_ = _errmsg;
  if (_errmsg) {
    set_has__errmsg();
  } else {
    clear_has__errmsg();
  }
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.BaseResponse._ErrMsg)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace micromsg
}  // namespace MMPro

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BaseResponse_2eproto__INCLUDED