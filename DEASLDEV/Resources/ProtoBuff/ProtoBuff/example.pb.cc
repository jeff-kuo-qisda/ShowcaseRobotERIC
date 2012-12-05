// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "example.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>

namespace Magic {
namespace Proto {

namespace {

const ::google::protobuf::Descriptor* Person_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Person_reflection_ = NULL;
const ::google::protobuf::Descriptor* Person_PhoneNumber_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Person_PhoneNumber_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_example_2eproto() {
  protobuf_AddDesc_example_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "example.proto");
  GOOGLE_CHECK(file != NULL);
  Person_descriptor_ = file->message_type(0);
  static const int Person_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, email_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, phone_),
  };
  Person_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Person_descriptor_,
      Person::default_instance_,
      Person_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Person));
  Person_PhoneNumber_descriptor_ = Person_descriptor_->nested_type(0);
  static const int Person_PhoneNumber_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person_PhoneNumber, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person_PhoneNumber, type_),
  };
  Person_PhoneNumber_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Person_PhoneNumber_descriptor_,
      Person_PhoneNumber::default_instance_,
      Person_PhoneNumber_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person_PhoneNumber, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person_PhoneNumber, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Person_PhoneNumber));
  Person_PhoneType_descriptor_ = Person_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_example_2eproto);
}

void protobuf_RegisterTypes() {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Person_descriptor_, &Person::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Person_PhoneNumber_descriptor_, &Person_PhoneNumber::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_example_2eproto() {
  delete Person::default_instance_;
  delete Person_reflection_;
  delete Person_PhoneNumber::default_instance_;
  delete Person_PhoneNumber_reflection_;
}

void protobuf_AddDesc_example_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rexample.proto\022\013Magic.Proto\"\340\001\n\006Person\022"
    "\014\n\004name\030\001 \002(\t\022\n\n\002id\030\002 \002(\005\022\r\n\005email\030\003 \001(\t"
    "\022.\n\005phone\030\004 \003(\0132\037.Magic.Proto.Person.Pho"
    "neNumber\032P\n\013PhoneNumber\022\016\n\006number\030\001 \002(\t\022"
    "1\n\004type\030\002 \001(\0162\035.Magic.Proto.Person.Phone"
    "Type:\004HOME\"+\n\tPhoneType\022\n\n\006MOBILE\020\000\022\010\n\004H"
    "OME\020\001\022\010\n\004WORK\020\002", 255);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "example.proto", &protobuf_RegisterTypes);
  Person::default_instance_ = new Person();
  Person_PhoneNumber::default_instance_ = new Person_PhoneNumber();
  Person::default_instance_->InitAsDefaultInstance();
  Person_PhoneNumber::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_example_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_example_2eproto {
  StaticDescriptorInitializer_example_2eproto() {
    protobuf_AddDesc_example_2eproto();
  }
} static_descriptor_initializer_example_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Person_PhoneType_descriptor_;
}
bool Person_PhoneType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Person_PhoneType Person::MOBILE;
const Person_PhoneType Person::HOME;
const Person_PhoneType Person::WORK;
const Person_PhoneType Person::PhoneType_MIN;
const Person_PhoneType Person::PhoneType_MAX;
#endif  // _MSC_VER
const ::std::string Person_PhoneNumber::_default_number_;
#ifndef _MSC_VER
const int Person_PhoneNumber::kNumberFieldNumber;
const int Person_PhoneNumber::kTypeFieldNumber;
#endif  // !_MSC_VER

Person_PhoneNumber::Person_PhoneNumber()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Person_PhoneNumber::InitAsDefaultInstance() {}

Person_PhoneNumber::Person_PhoneNumber(const Person_PhoneNumber& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Person_PhoneNumber::SharedCtor() {
  _cached_size_ = 0;
  number_ = const_cast< ::std::string*>(&_default_number_);
  type_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Person_PhoneNumber::~Person_PhoneNumber() {
  SharedDtor();
}

void Person_PhoneNumber::SharedDtor() {
  if (number_ != &_default_number_) {
    delete number_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* Person_PhoneNumber::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Person_PhoneNumber_descriptor_;
}

const Person_PhoneNumber& Person_PhoneNumber::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_example_2eproto();  return *default_instance_;
}

Person_PhoneNumber* Person_PhoneNumber::default_instance_ = NULL;

Person_PhoneNumber* Person_PhoneNumber::New() const {
  return new Person_PhoneNumber;
}

void Person_PhoneNumber::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (number_ != &_default_number_) {
        number_->clear();
      }
    }
    type_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Person_PhoneNumber::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // required string number = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadString(input, mutable_number()));
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }
      
      // optional .Magic.Proto.Person.PhoneType type = 2 [default = HOME];
      case 2: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_type:
        int value;
        DO_(::google::protobuf::internal::WireFormat::ReadEnum(input, &value));
        if (::Magic::Proto::Person_PhoneType_IsValid(value)) {
          set_type(static_cast< ::Magic::Proto::Person_PhoneType >(value));
        } else {
          mutable_unknown_fields()->AddVarint(2, value);
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Person_PhoneNumber::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    Person_PhoneNumber::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // required string number = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteString(1, this->number(), output);
  }
  
  // optional .Magic.Proto.Person.PhoneType type = 2 [default = HOME];
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::WriteEnum(2, this->type(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Person_PhoneNumber::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string number = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(1, this->number(), target);
  }
  
  // optional .Magic.Proto.Person.PhoneType type = 2 [default = HOME];
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormat::WriteEnumToArray(2, this->type(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Person_PhoneNumber::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string number = 1;
    if (has_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::StringSize(this->number());
    }
    
    // optional .Magic.Proto.Person.PhoneType type = 2 [default = HOME];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::EnumSize(this->type());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void Person_PhoneNumber::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Person_PhoneNumber* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Person_PhoneNumber*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Person_PhoneNumber::MergeFrom(const Person_PhoneNumber& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_number(from.number());
    }
    if (from._has_bit(1)) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Person_PhoneNumber::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person_PhoneNumber::CopyFrom(const Person_PhoneNumber& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person_PhoneNumber::Swap(Person_PhoneNumber* other) {
  if (other != this) {
    std::swap(number_, other->number_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool Person_PhoneNumber::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

const ::google::protobuf::Descriptor* Person_PhoneNumber::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* Person_PhoneNumber::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return Person_PhoneNumber_reflection_;
}

// -------------------------------------------------------------------

const ::std::string Person::_default_name_;
const ::std::string Person::_default_email_;
#ifndef _MSC_VER
const int Person::kNameFieldNumber;
const int Person::kIdFieldNumber;
const int Person::kEmailFieldNumber;
const int Person::kPhoneFieldNumber;
#endif  // !_MSC_VER

Person::Person()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Person::InitAsDefaultInstance() {}

Person::Person(const Person& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Person::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&_default_name_);
  id_ = 0;
  email_ = const_cast< ::std::string*>(&_default_email_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Person::~Person() {
  SharedDtor();
}

void Person::SharedDtor() {
  if (name_ != &_default_name_) {
    delete name_;
  }
  if (email_ != &_default_email_) {
    delete email_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* Person::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Person_descriptor_;
}

const Person& Person::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_example_2eproto();  return *default_instance_;
}

Person* Person::default_instance_ = NULL;

Person* Person::New() const {
  return new Person;
}

void Person::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (name_ != &_default_name_) {
        name_->clear();
      }
    }
    id_ = 0;
    if (_has_bit(2)) {
      if (email_ != &_default_email_) {
        email_->clear();
      }
    }
  }
  phone_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Person::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadString(input, mutable_name()));
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }
      
      // required int32 id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_id:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &id_));
        _set_bit(1);
        if (input->ExpectTag(26)) goto parse_email;
        break;
      }
      
      // optional string email = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_email:
        DO_(::google::protobuf::internal::WireFormat::ReadString(input, mutable_email()));
        if (input->ExpectTag(34)) goto parse_phone;
        break;
      }
      
      // repeated .Magic.Proto.Person.PhoneNumber phone = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_phone:
        DO_(::google::protobuf::internal::WireFormat::ReadMessageNoVirtual(
             input, add_phone()));
        if (input->ExpectTag(34)) goto parse_phone;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Person::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    Person::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // required string name = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteString(1, this->name(), output);
  }
  
  // required int32 id = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(2, this->id(), output);
  }
  
  // optional string email = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::WriteString(3, this->email(), output);
  }
  
  // repeated .Magic.Proto.Person.PhoneNumber phone = 4;
  for (int i = 0; i < this->phone_size(); i++) {
    ::google::protobuf::internal::WireFormat::WriteMessageNoVirtual(4, this->phone(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Person::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(1, this->name(), target);
  }
  
  // required int32 id = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(2, this->id(), target);
  }
  
  // optional string email = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(3, this->email(), target);
  }
  
  // repeated .Magic.Proto.Person.PhoneNumber phone = 4;
  for (int i = 0; i < this->phone_size(); i++) {
    target = ::google::protobuf::internal::WireFormat::WriteMessageNoVirtualToArray(4, this->phone(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Person::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::StringSize(this->name());
    }
    
    // required int32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->id());
    }
    
    // optional string email = 3;
    if (has_email()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::StringSize(this->email());
    }
    
  }
  // repeated .Magic.Proto.Person.PhoneNumber phone = 4;
  total_size += 1 * this->phone_size();
  for (int i = 0; i < this->phone_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormat::MessageSizeNoVirtual(
        this->phone(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void Person::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Person* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Person*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Person::MergeFrom(const Person& from) {
  GOOGLE_CHECK_NE(&from, this);
  phone_.MergeFrom(from.phone_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_name(from.name());
    }
    if (from._has_bit(1)) {
      set_id(from.id());
    }
    if (from._has_bit(2)) {
      set_email(from.email());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Person::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person::CopyFrom(const Person& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person::Swap(Person* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(id_, other->id_);
    std::swap(email_, other->email_);
    phone_.Swap(&other->phone_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool Person::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  for (int i = 0; i < phone_size(); i++) {
    if (!this->phone(i).IsInitialized()) return false;
  }
  return true;
}

const ::google::protobuf::Descriptor* Person::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* Person::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return Person_reflection_;
}

}  // namespace Proto
}  // namespace Magic