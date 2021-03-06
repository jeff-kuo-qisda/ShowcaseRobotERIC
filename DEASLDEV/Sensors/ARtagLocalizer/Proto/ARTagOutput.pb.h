// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_ARTagOutput_2eproto__INCLUDED
#define PROTOBUF_ARTagOutput_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>

namespace ARTag {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ARTagOutput_2eproto();
void protobuf_AssignDesc_ARTagOutput_2eproto();
void protobuf_ShutdownFile_ARTagOutput_2eproto();

class ARTagMessage;
class ARTagMessage_Pose;

// ===================================================================

class ARTagMessage_Pose : public ::google::protobuf::Message {
 public:
  ARTagMessage_Pose();
  virtual ~ARTagMessage_Pose();
  
  ARTagMessage_Pose(const ARTagMessage_Pose& from);
  
  inline ARTagMessage_Pose& operator=(const ARTagMessage_Pose& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ARTagMessage_Pose& default_instance();
  void Swap(ARTagMessage_Pose* other);
  
  // implements Message ----------------------------------------------
  
  ARTagMessage_Pose* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ARTagMessage_Pose& from);
  void MergeFrom(const ARTagMessage_Pose& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // required double x = 2;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 2;
  inline double x() const;
  inline void set_x(double value);
  
  // required double y = 3;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 3;
  inline double y() const;
  inline void set_y(double value);
  
  // required double z = 4;
  inline bool has_z() const;
  inline void clear_z();
  static const int kZFieldNumber = 4;
  inline double z() const;
  inline void set_z(double value);
  
  // required double yaw = 5;
  inline bool has_yaw() const;
  inline void clear_yaw();
  static const int kYawFieldNumber = 5;
  inline double yaw() const;
  inline void set_yaw(double value);
  
  // required double pitch = 6;
  inline bool has_pitch() const;
  inline void clear_pitch();
  static const int kPitchFieldNumber = 6;
  inline double pitch() const;
  inline void set_pitch(double value);
  
  // required double roll = 7;
  inline bool has_roll() const;
  inline void clear_roll();
  static const int kRollFieldNumber = 7;
  inline double roll() const;
  inline void set_roll(double value);
  
  // required double timestamp = 8;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 8;
  inline double timestamp() const;
  inline void set_timestamp(double value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 id_;
  double x_;
  double y_;
  double z_;
  double yaw_;
  double pitch_;
  double roll_;
  double timestamp_;
  friend void  protobuf_AddDesc_ARTagOutput_2eproto();
  friend void protobuf_AssignDesc_ARTagOutput_2eproto();
  friend void protobuf_ShutdownFile_ARTagOutput_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static ARTagMessage_Pose* default_instance_;
};
// -------------------------------------------------------------------

class ARTagMessage : public ::google::protobuf::Message {
 public:
  ARTagMessage();
  virtual ~ARTagMessage();
  
  ARTagMessage(const ARTagMessage& from);
  
  inline ARTagMessage& operator=(const ARTagMessage& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ARTagMessage& default_instance();
  void Swap(ARTagMessage* other);
  
  // implements Message ----------------------------------------------
  
  ARTagMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ARTagMessage& from);
  void MergeFrom(const ARTagMessage& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef ARTagMessage_Pose Pose;
  
  // accessors -------------------------------------------------------
  
  // repeated .ARTag.ARTagMessage.Pose oois = 1;
  inline int oois_size() const;
  inline void clear_oois();
  static const int kOoisFieldNumber = 1;
  inline const ::google::protobuf::RepeatedPtrField< ::ARTag::ARTagMessage_Pose >& oois() const;
  inline ::google::protobuf::RepeatedPtrField< ::ARTag::ARTagMessage_Pose >* mutable_oois();
  inline const ::ARTag::ARTagMessage_Pose& oois(int index) const;
  inline ::ARTag::ARTagMessage_Pose* mutable_oois(int index);
  inline ::ARTag::ARTagMessage_Pose* add_oois();
  
  // required uint32 camera_id = 2;
  inline bool has_camera_id() const;
  inline void clear_camera_id();
  static const int kCameraIdFieldNumber = 2;
  inline ::google::protobuf::uint32 camera_id() const;
  inline void set_camera_id(::google::protobuf::uint32 value);
  
  // required double timestamp = 3;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  inline double timestamp() const;
  inline void set_timestamp(double value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::ARTag::ARTagMessage_Pose > oois_;
  ::google::protobuf::uint32 camera_id_;
  double timestamp_;
  friend void  protobuf_AddDesc_ARTagOutput_2eproto();
  friend void protobuf_AssignDesc_ARTagOutput_2eproto();
  friend void protobuf_ShutdownFile_ARTagOutput_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static ARTagMessage* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// ARTagMessage_Pose

// required int32 id = 1;
inline bool ARTagMessage_Pose::has_id() const {
  return _has_bit(0);
}
inline void ARTagMessage_Pose::clear_id() {
  id_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 ARTagMessage_Pose::id() const {
  return id_;
}
inline void ARTagMessage_Pose::set_id(::google::protobuf::int32 value) {
  _set_bit(0);
  id_ = value;
}

// required double x = 2;
inline bool ARTagMessage_Pose::has_x() const {
  return _has_bit(1);
}
inline void ARTagMessage_Pose::clear_x() {
  x_ = 0;
  _clear_bit(1);
}
inline double ARTagMessage_Pose::x() const {
  return x_;
}
inline void ARTagMessage_Pose::set_x(double value) {
  _set_bit(1);
  x_ = value;
}

// required double y = 3;
inline bool ARTagMessage_Pose::has_y() const {
  return _has_bit(2);
}
inline void ARTagMessage_Pose::clear_y() {
  y_ = 0;
  _clear_bit(2);
}
inline double ARTagMessage_Pose::y() const {
  return y_;
}
inline void ARTagMessage_Pose::set_y(double value) {
  _set_bit(2);
  y_ = value;
}

// required double z = 4;
inline bool ARTagMessage_Pose::has_z() const {
  return _has_bit(3);
}
inline void ARTagMessage_Pose::clear_z() {
  z_ = 0;
  _clear_bit(3);
}
inline double ARTagMessage_Pose::z() const {
  return z_;
}
inline void ARTagMessage_Pose::set_z(double value) {
  _set_bit(3);
  z_ = value;
}

// required double yaw = 5;
inline bool ARTagMessage_Pose::has_yaw() const {
  return _has_bit(4);
}
inline void ARTagMessage_Pose::clear_yaw() {
  yaw_ = 0;
  _clear_bit(4);
}
inline double ARTagMessage_Pose::yaw() const {
  return yaw_;
}
inline void ARTagMessage_Pose::set_yaw(double value) {
  _set_bit(4);
  yaw_ = value;
}

// required double pitch = 6;
inline bool ARTagMessage_Pose::has_pitch() const {
  return _has_bit(5);
}
inline void ARTagMessage_Pose::clear_pitch() {
  pitch_ = 0;
  _clear_bit(5);
}
inline double ARTagMessage_Pose::pitch() const {
  return pitch_;
}
inline void ARTagMessage_Pose::set_pitch(double value) {
  _set_bit(5);
  pitch_ = value;
}

// required double roll = 7;
inline bool ARTagMessage_Pose::has_roll() const {
  return _has_bit(6);
}
inline void ARTagMessage_Pose::clear_roll() {
  roll_ = 0;
  _clear_bit(6);
}
inline double ARTagMessage_Pose::roll() const {
  return roll_;
}
inline void ARTagMessage_Pose::set_roll(double value) {
  _set_bit(6);
  roll_ = value;
}

// required double timestamp = 8;
inline bool ARTagMessage_Pose::has_timestamp() const {
  return _has_bit(7);
}
inline void ARTagMessage_Pose::clear_timestamp() {
  timestamp_ = 0;
  _clear_bit(7);
}
inline double ARTagMessage_Pose::timestamp() const {
  return timestamp_;
}
inline void ARTagMessage_Pose::set_timestamp(double value) {
  _set_bit(7);
  timestamp_ = value;
}

// -------------------------------------------------------------------

// ARTagMessage

// repeated .ARTag.ARTagMessage.Pose oois = 1;
inline int ARTagMessage::oois_size() const {
  return oois_.size();
}
inline void ARTagMessage::clear_oois() {
  oois_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::ARTag::ARTagMessage_Pose >&
ARTagMessage::oois() const {
  return oois_;
}
inline ::google::protobuf::RepeatedPtrField< ::ARTag::ARTagMessage_Pose >*
ARTagMessage::mutable_oois() {
  return &oois_;
}
inline const ::ARTag::ARTagMessage_Pose& ARTagMessage::oois(int index) const {
  return oois_.Get(index);
}
inline ::ARTag::ARTagMessage_Pose* ARTagMessage::mutable_oois(int index) {
  return oois_.Mutable(index);
}
inline ::ARTag::ARTagMessage_Pose* ARTagMessage::add_oois() {
  return oois_.Add();
}

// required uint32 camera_id = 2;
inline bool ARTagMessage::has_camera_id() const {
  return _has_bit(1);
}
inline void ARTagMessage::clear_camera_id() {
  camera_id_ = 0u;
  _clear_bit(1);
}
inline ::google::protobuf::uint32 ARTagMessage::camera_id() const {
  return camera_id_;
}
inline void ARTagMessage::set_camera_id(::google::protobuf::uint32 value) {
  _set_bit(1);
  camera_id_ = value;
}

// required double timestamp = 3;
inline bool ARTagMessage::has_timestamp() const {
  return _has_bit(2);
}
inline void ARTagMessage::clear_timestamp() {
  timestamp_ = 0;
  _clear_bit(2);
}
inline double ARTagMessage::timestamp() const {
  return timestamp_;
}
inline void ARTagMessage::set_timestamp(double value) {
  _set_bit(2);
  timestamp_ = value;
}


}  // namespace ARTag

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_ARTagOutput_2eproto__INCLUDED
