// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SnsTimeLineResponse.proto

#ifndef PROTOBUF_SnsTimeLineResponse_2eproto__INCLUDED
#define PROTOBUF_SnsTimeLineResponse_2eproto__INCLUDED

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
#include "BaseResponse.pb.h"
#include "SnsObject.pb.h"
#include "SnsServerConfig.pb.h"
#include "AdvertiseObject.pb.h"
#include "SKBuiltinBuffer_t.pb.h"
// @@protoc_insertion_point(includes)
namespace MMPro {
namespace micromsg {
class AdvertiseObject;
class AdvertiseObjectDefaultTypeInternal;
extern AdvertiseObjectDefaultTypeInternal _AdvertiseObject_default_instance_;
class BaseResponse;
class BaseResponseDefaultTypeInternal;
extern BaseResponseDefaultTypeInternal _BaseResponse_default_instance_;
class SKBuiltinBuffer_t;
class SKBuiltinBuffer_tDefaultTypeInternal;
extern SKBuiltinBuffer_tDefaultTypeInternal _SKBuiltinBuffer_t_default_instance_;
class SnsObject;
class SnsObjectDefaultTypeInternal;
extern SnsObjectDefaultTypeInternal _SnsObject_default_instance_;
class SnsServerConfig;
class SnsServerConfigDefaultTypeInternal;
extern SnsServerConfigDefaultTypeInternal _SnsServerConfig_default_instance_;
class SnsTimeLineResponse;
class SnsTimeLineResponseDefaultTypeInternal;
extern SnsTimeLineResponseDefaultTypeInternal _SnsTimeLineResponse_default_instance_;
}  // namespace micromsg
}  // namespace MMPro

namespace MMPro {
namespace micromsg {

namespace protobuf_SnsTimeLineResponse_2eproto {
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
}  // namespace protobuf_SnsTimeLineResponse_2eproto

// ===================================================================

class SnsTimeLineResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MMPro.micromsg.SnsTimeLineResponse) */ {
 public:
  SnsTimeLineResponse();
  virtual ~SnsTimeLineResponse();

  SnsTimeLineResponse(const SnsTimeLineResponse& from);

  inline SnsTimeLineResponse& operator=(const SnsTimeLineResponse& from) {
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
  static const SnsTimeLineResponse& default_instance();

  static inline const SnsTimeLineResponse* internal_default_instance() {
    return reinterpret_cast<const SnsTimeLineResponse*>(
               &_SnsTimeLineResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SnsTimeLineResponse* other);

  // implements Message ----------------------------------------------

  inline SnsTimeLineResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  SnsTimeLineResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SnsTimeLineResponse& from);
  void MergeFrom(const SnsTimeLineResponse& from);
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
  void InternalSwap(SnsTimeLineResponse* other);
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

  // repeated .MMPro.micromsg.SnsObject _ObjectList = 4;
  int _objectlist_size() const;
  void clear__objectlist();
  static const int kObjectListFieldNumber = 4;
  const ::MMPro::micromsg::SnsObject& _objectlist(int index) const;
  ::MMPro::micromsg::SnsObject* mutable__objectlist(int index);
  ::MMPro::micromsg::SnsObject* add__objectlist();
  ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::SnsObject >*
      mutable__objectlist();
  const ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::SnsObject >&
      _objectlist() const;

  // repeated .MMPro.micromsg.AdvertiseObject _AdvertiseList = 10;
  int _advertiselist_size() const;
  void clear__advertiselist();
  static const int kAdvertiseListFieldNumber = 10;
  const ::MMPro::micromsg::AdvertiseObject& _advertiselist(int index) const;
  ::MMPro::micromsg::AdvertiseObject* mutable__advertiselist(int index);
  ::MMPro::micromsg::AdvertiseObject* add__advertiselist();
  ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::AdvertiseObject >*
      mutable__advertiselist();
  const ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::AdvertiseObject >&
      _advertiselist() const;

  // optional string _FirstPageMd5 = 2;
  bool has__firstpagemd5() const;
  void clear__firstpagemd5();
  static const int kFirstPageMd5FieldNumber = 2;
  const ::std::string& _firstpagemd5() const;
  void set__firstpagemd5(const ::std::string& value);
  #if LANG_CXX11
  void set__firstpagemd5(::std::string&& value);
  #endif
  void set__firstpagemd5(const char* value);
  void set__firstpagemd5(const char* value, size_t size);
  ::std::string* mutable__firstpagemd5();
  ::std::string* release__firstpagemd5();
  void set_allocated__firstpagemd5(::std::string* _firstpagemd5);

  // required .MMPro.micromsg.BaseResponse _BaseResponse = 1;
  bool has__baseresponse() const;
  void clear__baseresponse();
  static const int kBaseResponseFieldNumber = 1;
  const ::MMPro::micromsg::BaseResponse& _baseresponse() const;
  ::MMPro::micromsg::BaseResponse* mutable__baseresponse();
  ::MMPro::micromsg::BaseResponse* release__baseresponse();
  void set_allocated__baseresponse(::MMPro::micromsg::BaseResponse* _baseresponse);

  // optional .MMPro.micromsg.SnsServerConfig _ServerConfig = 8;
  bool has__serverconfig() const;
  void clear__serverconfig();
  static const int kServerConfigFieldNumber = 8;
  const ::MMPro::micromsg::SnsServerConfig& _serverconfig() const;
  ::MMPro::micromsg::SnsServerConfig* mutable__serverconfig();
  ::MMPro::micromsg::SnsServerConfig* release__serverconfig();
  void set_allocated__serverconfig(::MMPro::micromsg::SnsServerConfig* _serverconfig);

  // optional .MMPro.micromsg.SKBuiltinBuffer_t _Session = 11;
  bool has__session() const;
  void clear__session();
  static const int kSessionFieldNumber = 11;
  const ::MMPro::micromsg::SKBuiltinBuffer_t& _session() const;
  ::MMPro::micromsg::SKBuiltinBuffer_t* mutable__session();
  ::MMPro::micromsg::SKBuiltinBuffer_t* release__session();
  void set_allocated__session(::MMPro::micromsg::SKBuiltinBuffer_t* _session);

  // required uint32 _ObjectCount = 3;
  bool has__objectcount() const;
  void clear__objectcount();
  static const int kObjectCountFieldNumber = 3;
  ::google::protobuf::uint32 _objectcount() const;
  void set__objectcount(::google::protobuf::uint32 value);

  // optional uint32 _NewRequestTime = 5;
  bool has__newrequesttime() const;
  void clear__newrequesttime();
  static const int kNewRequestTimeFieldNumber = 5;
  ::google::protobuf::uint32 _newrequesttime() const;
  void set__newrequesttime(::google::protobuf::uint32 value);

  // optional uint32 _ObjectCountForSameMd5 = 6;
  bool has__objectcountforsamemd5() const;
  void clear__objectcountforsamemd5();
  static const int kObjectCountForSameMd5FieldNumber = 6;
  ::google::protobuf::uint32 _objectcountforsamemd5() const;
  void set__objectcountforsamemd5(::google::protobuf::uint32 value);

  // optional uint32 _ControlFlag = 7;
  bool has__controlflag() const;
  void clear__controlflag();
  static const int kControlFlagFieldNumber = 7;
  ::google::protobuf::uint32 _controlflag() const;
  void set__controlflag(::google::protobuf::uint32 value);

  // optional uint32 _AdvertiseCount = 9;
  bool has__advertisecount() const;
  void clear__advertisecount();
  static const int kAdvertiseCountFieldNumber = 9;
  ::google::protobuf::uint32 _advertisecount() const;
  void set__advertisecount(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MMPro.micromsg.SnsTimeLineResponse)
 private:
  void set_has__baseresponse();
  void clear_has__baseresponse();
  void set_has__firstpagemd5();
  void clear_has__firstpagemd5();
  void set_has__objectcount();
  void clear_has__objectcount();
  void set_has__newrequesttime();
  void clear_has__newrequesttime();
  void set_has__objectcountforsamemd5();
  void clear_has__objectcountforsamemd5();
  void set_has__controlflag();
  void clear_has__controlflag();
  void set_has__serverconfig();
  void clear_has__serverconfig();
  void set_has__advertisecount();
  void clear_has__advertisecount();
  void set_has__session();
  void clear_has__session();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::SnsObject > _objectlist_;
  ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::AdvertiseObject > _advertiselist_;
  ::google::protobuf::internal::ArenaStringPtr _firstpagemd5_;
  ::MMPro::micromsg::BaseResponse* _baseresponse_;
  ::MMPro::micromsg::SnsServerConfig* _serverconfig_;
  ::MMPro::micromsg::SKBuiltinBuffer_t* _session_;
  ::google::protobuf::uint32 _objectcount_;
  ::google::protobuf::uint32 _newrequesttime_;
  ::google::protobuf::uint32 _objectcountforsamemd5_;
  ::google::protobuf::uint32 _controlflag_;
  ::google::protobuf::uint32 _advertisecount_;
  friend struct protobuf_SnsTimeLineResponse_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SnsTimeLineResponse

// required .MMPro.micromsg.BaseResponse _BaseResponse = 1;
inline bool SnsTimeLineResponse::has__baseresponse() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SnsTimeLineResponse::set_has__baseresponse() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SnsTimeLineResponse::clear_has__baseresponse() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SnsTimeLineResponse::clear__baseresponse() {
  if (_baseresponse_ != NULL) _baseresponse_->::MMPro::micromsg::BaseResponse::Clear();
  clear_has__baseresponse();
}
inline const ::MMPro::micromsg::BaseResponse& SnsTimeLineResponse::_baseresponse() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._BaseResponse)
  return _baseresponse_ != NULL ? *_baseresponse_
                         : *::MMPro::micromsg::BaseResponse::internal_default_instance();
}
inline ::MMPro::micromsg::BaseResponse* SnsTimeLineResponse::mutable__baseresponse() {
  set_has__baseresponse();
  if (_baseresponse_ == NULL) {
    _baseresponse_ = new ::MMPro::micromsg::BaseResponse;
  }
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SnsTimeLineResponse._BaseResponse)
  return _baseresponse_;
}
inline ::MMPro::micromsg::BaseResponse* SnsTimeLineResponse::release__baseresponse() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.SnsTimeLineResponse._BaseResponse)
  clear_has__baseresponse();
  ::MMPro::micromsg::BaseResponse* temp = _baseresponse_;
  _baseresponse_ = NULL;
  return temp;
}
inline void SnsTimeLineResponse::set_allocated__baseresponse(::MMPro::micromsg::BaseResponse* _baseresponse) {
  delete _baseresponse_;
  _baseresponse_ = _baseresponse;
  if (_baseresponse) {
    set_has__baseresponse();
  } else {
    clear_has__baseresponse();
  }
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.SnsTimeLineResponse._BaseResponse)
}

// optional string _FirstPageMd5 = 2;
inline bool SnsTimeLineResponse::has__firstpagemd5() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SnsTimeLineResponse::set_has__firstpagemd5() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SnsTimeLineResponse::clear_has__firstpagemd5() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SnsTimeLineResponse::clear__firstpagemd5() {
  _firstpagemd5_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has__firstpagemd5();
}
inline const ::std::string& SnsTimeLineResponse::_firstpagemd5() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._FirstPageMd5)
  return _firstpagemd5_.GetNoArena();
}
inline void SnsTimeLineResponse::set__firstpagemd5(const ::std::string& value) {
  set_has__firstpagemd5();
  _firstpagemd5_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsTimeLineResponse._FirstPageMd5)
}
#if LANG_CXX11
inline void SnsTimeLineResponse::set__firstpagemd5(::std::string&& value) {
  set_has__firstpagemd5();
  _firstpagemd5_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MMPro.micromsg.SnsTimeLineResponse._FirstPageMd5)
}
#endif
inline void SnsTimeLineResponse::set__firstpagemd5(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has__firstpagemd5();
  _firstpagemd5_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MMPro.micromsg.SnsTimeLineResponse._FirstPageMd5)
}
inline void SnsTimeLineResponse::set__firstpagemd5(const char* value, size_t size) {
  set_has__firstpagemd5();
  _firstpagemd5_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MMPro.micromsg.SnsTimeLineResponse._FirstPageMd5)
}
inline ::std::string* SnsTimeLineResponse::mutable__firstpagemd5() {
  set_has__firstpagemd5();
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SnsTimeLineResponse._FirstPageMd5)
  return _firstpagemd5_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SnsTimeLineResponse::release__firstpagemd5() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.SnsTimeLineResponse._FirstPageMd5)
  clear_has__firstpagemd5();
  return _firstpagemd5_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SnsTimeLineResponse::set_allocated__firstpagemd5(::std::string* _firstpagemd5) {
  if (_firstpagemd5 != NULL) {
    set_has__firstpagemd5();
  } else {
    clear_has__firstpagemd5();
  }
  _firstpagemd5_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _firstpagemd5);
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.SnsTimeLineResponse._FirstPageMd5)
}

// required uint32 _ObjectCount = 3;
inline bool SnsTimeLineResponse::has__objectcount() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SnsTimeLineResponse::set_has__objectcount() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SnsTimeLineResponse::clear_has__objectcount() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SnsTimeLineResponse::clear__objectcount() {
  _objectcount_ = 0u;
  clear_has__objectcount();
}
inline ::google::protobuf::uint32 SnsTimeLineResponse::_objectcount() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._ObjectCount)
  return _objectcount_;
}
inline void SnsTimeLineResponse::set__objectcount(::google::protobuf::uint32 value) {
  set_has__objectcount();
  _objectcount_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsTimeLineResponse._ObjectCount)
}

// repeated .MMPro.micromsg.SnsObject _ObjectList = 4;
inline int SnsTimeLineResponse::_objectlist_size() const {
  return _objectlist_.size();
}
inline void SnsTimeLineResponse::clear__objectlist() {
  _objectlist_.Clear();
}
inline const ::MMPro::micromsg::SnsObject& SnsTimeLineResponse::_objectlist(int index) const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._ObjectList)
  return _objectlist_.Get(index);
}
inline ::MMPro::micromsg::SnsObject* SnsTimeLineResponse::mutable__objectlist(int index) {
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SnsTimeLineResponse._ObjectList)
  return _objectlist_.Mutable(index);
}
inline ::MMPro::micromsg::SnsObject* SnsTimeLineResponse::add__objectlist() {
  // @@protoc_insertion_point(field_add:MMPro.micromsg.SnsTimeLineResponse._ObjectList)
  return _objectlist_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::SnsObject >*
SnsTimeLineResponse::mutable__objectlist() {
  // @@protoc_insertion_point(field_mutable_list:MMPro.micromsg.SnsTimeLineResponse._ObjectList)
  return &_objectlist_;
}
inline const ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::SnsObject >&
SnsTimeLineResponse::_objectlist() const {
  // @@protoc_insertion_point(field_list:MMPro.micromsg.SnsTimeLineResponse._ObjectList)
  return _objectlist_;
}

// optional uint32 _NewRequestTime = 5;
inline bool SnsTimeLineResponse::has__newrequesttime() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SnsTimeLineResponse::set_has__newrequesttime() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SnsTimeLineResponse::clear_has__newrequesttime() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SnsTimeLineResponse::clear__newrequesttime() {
  _newrequesttime_ = 0u;
  clear_has__newrequesttime();
}
inline ::google::protobuf::uint32 SnsTimeLineResponse::_newrequesttime() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._NewRequestTime)
  return _newrequesttime_;
}
inline void SnsTimeLineResponse::set__newrequesttime(::google::protobuf::uint32 value) {
  set_has__newrequesttime();
  _newrequesttime_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsTimeLineResponse._NewRequestTime)
}

// optional uint32 _ObjectCountForSameMd5 = 6;
inline bool SnsTimeLineResponse::has__objectcountforsamemd5() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SnsTimeLineResponse::set_has__objectcountforsamemd5() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SnsTimeLineResponse::clear_has__objectcountforsamemd5() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SnsTimeLineResponse::clear__objectcountforsamemd5() {
  _objectcountforsamemd5_ = 0u;
  clear_has__objectcountforsamemd5();
}
inline ::google::protobuf::uint32 SnsTimeLineResponse::_objectcountforsamemd5() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._ObjectCountForSameMd5)
  return _objectcountforsamemd5_;
}
inline void SnsTimeLineResponse::set__objectcountforsamemd5(::google::protobuf::uint32 value) {
  set_has__objectcountforsamemd5();
  _objectcountforsamemd5_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsTimeLineResponse._ObjectCountForSameMd5)
}

// optional uint32 _ControlFlag = 7;
inline bool SnsTimeLineResponse::has__controlflag() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SnsTimeLineResponse::set_has__controlflag() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SnsTimeLineResponse::clear_has__controlflag() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SnsTimeLineResponse::clear__controlflag() {
  _controlflag_ = 0u;
  clear_has__controlflag();
}
inline ::google::protobuf::uint32 SnsTimeLineResponse::_controlflag() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._ControlFlag)
  return _controlflag_;
}
inline void SnsTimeLineResponse::set__controlflag(::google::protobuf::uint32 value) {
  set_has__controlflag();
  _controlflag_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsTimeLineResponse._ControlFlag)
}

// optional .MMPro.micromsg.SnsServerConfig _ServerConfig = 8;
inline bool SnsTimeLineResponse::has__serverconfig() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SnsTimeLineResponse::set_has__serverconfig() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SnsTimeLineResponse::clear_has__serverconfig() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SnsTimeLineResponse::clear__serverconfig() {
  if (_serverconfig_ != NULL) _serverconfig_->::MMPro::micromsg::SnsServerConfig::Clear();
  clear_has__serverconfig();
}
inline const ::MMPro::micromsg::SnsServerConfig& SnsTimeLineResponse::_serverconfig() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._ServerConfig)
  return _serverconfig_ != NULL ? *_serverconfig_
                         : *::MMPro::micromsg::SnsServerConfig::internal_default_instance();
}
inline ::MMPro::micromsg::SnsServerConfig* SnsTimeLineResponse::mutable__serverconfig() {
  set_has__serverconfig();
  if (_serverconfig_ == NULL) {
    _serverconfig_ = new ::MMPro::micromsg::SnsServerConfig;
  }
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SnsTimeLineResponse._ServerConfig)
  return _serverconfig_;
}
inline ::MMPro::micromsg::SnsServerConfig* SnsTimeLineResponse::release__serverconfig() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.SnsTimeLineResponse._ServerConfig)
  clear_has__serverconfig();
  ::MMPro::micromsg::SnsServerConfig* temp = _serverconfig_;
  _serverconfig_ = NULL;
  return temp;
}
inline void SnsTimeLineResponse::set_allocated__serverconfig(::MMPro::micromsg::SnsServerConfig* _serverconfig) {
  delete _serverconfig_;
  _serverconfig_ = _serverconfig;
  if (_serverconfig) {
    set_has__serverconfig();
  } else {
    clear_has__serverconfig();
  }
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.SnsTimeLineResponse._ServerConfig)
}

// optional uint32 _AdvertiseCount = 9;
inline bool SnsTimeLineResponse::has__advertisecount() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SnsTimeLineResponse::set_has__advertisecount() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SnsTimeLineResponse::clear_has__advertisecount() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SnsTimeLineResponse::clear__advertisecount() {
  _advertisecount_ = 0u;
  clear_has__advertisecount();
}
inline ::google::protobuf::uint32 SnsTimeLineResponse::_advertisecount() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._AdvertiseCount)
  return _advertisecount_;
}
inline void SnsTimeLineResponse::set__advertisecount(::google::protobuf::uint32 value) {
  set_has__advertisecount();
  _advertisecount_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsTimeLineResponse._AdvertiseCount)
}

// repeated .MMPro.micromsg.AdvertiseObject _AdvertiseList = 10;
inline int SnsTimeLineResponse::_advertiselist_size() const {
  return _advertiselist_.size();
}
inline void SnsTimeLineResponse::clear__advertiselist() {
  _advertiselist_.Clear();
}
inline const ::MMPro::micromsg::AdvertiseObject& SnsTimeLineResponse::_advertiselist(int index) const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._AdvertiseList)
  return _advertiselist_.Get(index);
}
inline ::MMPro::micromsg::AdvertiseObject* SnsTimeLineResponse::mutable__advertiselist(int index) {
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SnsTimeLineResponse._AdvertiseList)
  return _advertiselist_.Mutable(index);
}
inline ::MMPro::micromsg::AdvertiseObject* SnsTimeLineResponse::add__advertiselist() {
  // @@protoc_insertion_point(field_add:MMPro.micromsg.SnsTimeLineResponse._AdvertiseList)
  return _advertiselist_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::AdvertiseObject >*
SnsTimeLineResponse::mutable__advertiselist() {
  // @@protoc_insertion_point(field_mutable_list:MMPro.micromsg.SnsTimeLineResponse._AdvertiseList)
  return &_advertiselist_;
}
inline const ::google::protobuf::RepeatedPtrField< ::MMPro::micromsg::AdvertiseObject >&
SnsTimeLineResponse::_advertiselist() const {
  // @@protoc_insertion_point(field_list:MMPro.micromsg.SnsTimeLineResponse._AdvertiseList)
  return _advertiselist_;
}

// optional .MMPro.micromsg.SKBuiltinBuffer_t _Session = 11;
inline bool SnsTimeLineResponse::has__session() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SnsTimeLineResponse::set_has__session() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SnsTimeLineResponse::clear_has__session() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SnsTimeLineResponse::clear__session() {
  if (_session_ != NULL) _session_->::MMPro::micromsg::SKBuiltinBuffer_t::Clear();
  clear_has__session();
}
inline const ::MMPro::micromsg::SKBuiltinBuffer_t& SnsTimeLineResponse::_session() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsTimeLineResponse._Session)
  return _session_ != NULL ? *_session_
                         : *::MMPro::micromsg::SKBuiltinBuffer_t::internal_default_instance();
}
inline ::MMPro::micromsg::SKBuiltinBuffer_t* SnsTimeLineResponse::mutable__session() {
  set_has__session();
  if (_session_ == NULL) {
    _session_ = new ::MMPro::micromsg::SKBuiltinBuffer_t;
  }
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SnsTimeLineResponse._Session)
  return _session_;
}
inline ::MMPro::micromsg::SKBuiltinBuffer_t* SnsTimeLineResponse::release__session() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.SnsTimeLineResponse._Session)
  clear_has__session();
  ::MMPro::micromsg::SKBuiltinBuffer_t* temp = _session_;
  _session_ = NULL;
  return temp;
}
inline void SnsTimeLineResponse::set_allocated__session(::MMPro::micromsg::SKBuiltinBuffer_t* _session) {
  delete _session_;
  _session_ = _session;
  if (_session) {
    set_has__session();
  } else {
    clear_has__session();
  }
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.SnsTimeLineResponse._Session)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace micromsg
}  // namespace MMPro

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SnsTimeLineResponse_2eproto__INCLUDED