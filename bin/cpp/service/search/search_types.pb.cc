// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "service/search/search_types.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {
namespace search {

namespace {

const ::google::protobuf::Descriptor* Statistic_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Statistic_reflection_ = NULL;
const ::google::protobuf::Descriptor* Filter_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Filter_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Filter_Comparand_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Filter_SortDirection_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Object_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Object_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_service_2fsearch_2fsearch_5ftypes_2eproto() {
  protobuf_AddDesc_service_2fsearch_2fsearch_5ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "service/search/search_types.proto");
  GOOGLE_CHECK(file != NULL);
  Statistic_descriptor_ = file->message_type(0);
  static const int Statistic_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Statistic, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Statistic, value_),
  };
  Statistic_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Statistic_descriptor_,
      Statistic::default_instance_,
      Statistic_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Statistic, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Statistic, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Statistic));
  Filter_descriptor_ = file->message_type(1);
  static const int Filter_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Filter, statistic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Filter, comparand_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Filter, sort_direction_),
  };
  Filter_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Filter_descriptor_,
      Filter::default_instance_,
      Filter_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Filter, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Filter, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Filter));
  Filter_Comparand_descriptor_ = Filter_descriptor_->enum_type(0);
  Filter_SortDirection_descriptor_ = Filter_descriptor_->enum_type(1);
  Object_descriptor_ = file->message_type(2);
  static const int Object_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, statistics_),
  };
  Object_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Object_descriptor_,
      Object::default_instance_,
      Object_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Object));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_service_2fsearch_2fsearch_5ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Statistic_descriptor_, &Statistic::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Filter_descriptor_, &Filter::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Object_descriptor_, &Object::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_service_2fsearch_2fsearch_5ftypes_2eproto() {
  delete Statistic::default_instance_;
  delete Statistic_reflection_;
  delete Filter::default_instance_;
  delete Filter_reflection_;
  delete Object::default_instance_;
  delete Object_reflection_;
}

void protobuf_AddDesc_service_2fsearch_2fsearch_5ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!service/search/search_types.proto\022\024bne"
    "t.protocol.search\")\n\tStatistic\022\r\n\002id\030\001 \001"
    "(\r:\0010\022\r\n\005value\030\002 \002(\005\"\323\002\n\006Filter\0222\n\tstati"
    "stic\030\001 \002(\0132\037.bnet.protocol.search.Statis"
    "tic\0229\n\tcomparand\030\002 \002(\0162&.bnet.protocol.s"
    "earch.Filter.Comparand\022G\n\016sort_direction"
    "\030\003 \001(\0162*.bnet.protocol.search.Filter.Sor"
    "tDirection:\003ASC\"m\n\tComparand\022\n\n\006EQUALS\020\000"
    "\022\r\n\tLESS_THAN\020\001\022\027\n\023LESS_THAN_OR_EQUALS\020\002"
    "\022\020\n\014GREATER_THAN\020\003\022\032\n\026GREATER_THAN_OR_EQ"
    "UALS\020\004\"\"\n\rSortDirection\022\007\n\003ASC\020\000\022\010\n\004DESC"
    "\020\001\"W\n\006Object\022\n\n\002id\030\001 \002(\014\022\014\n\004data\030\002 \001(\014\0223"
    "\n\nstatistics\030\003 \003(\0132\037.bnet.protocol.searc"
    "h.Statistic", 531);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "service/search/search_types.proto", &protobuf_RegisterTypes);
  Statistic::default_instance_ = new Statistic();
  Filter::default_instance_ = new Filter();
  Object::default_instance_ = new Object();
  Statistic::default_instance_->InitAsDefaultInstance();
  Filter::default_instance_->InitAsDefaultInstance();
  Object::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_service_2fsearch_2fsearch_5ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_service_2fsearch_2fsearch_5ftypes_2eproto {
  StaticDescriptorInitializer_service_2fsearch_2fsearch_5ftypes_2eproto() {
    protobuf_AddDesc_service_2fsearch_2fsearch_5ftypes_2eproto();
  }
} static_descriptor_initializer_service_2fsearch_2fsearch_5ftypes_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Statistic::kIdFieldNumber;
const int Statistic::kValueFieldNumber;
#endif  // !_MSC_VER

Statistic::Statistic()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Statistic::InitAsDefaultInstance() {
}

Statistic::Statistic(const Statistic& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Statistic::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Statistic::~Statistic() {
  SharedDtor();
}

void Statistic::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Statistic::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Statistic::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Statistic_descriptor_;
}

const Statistic& Statistic::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_service_2fsearch_2fsearch_5ftypes_2eproto();  return *default_instance_;
}

Statistic* Statistic::default_instance_ = NULL;

Statistic* Statistic::New() const {
  return new Statistic;
}

void Statistic::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    value_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Statistic::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1 [default = 0];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_value;
        break;
      }
      
      // required int32 value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
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

void Statistic::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 id = 1 [default = 0];
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }
  
  // required int32 value = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->value(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Statistic::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 id = 1 [default = 0];
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }
  
  // required int32 value = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->value(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Statistic::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 id = 1 [default = 0];
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }
    
    // required int32 value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->value());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Statistic::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Statistic* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Statistic*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Statistic::MergeFrom(const Statistic& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_id(from.id());
    }
    if (from._has_bit(1)) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Statistic::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Statistic::CopyFrom(const Statistic& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Statistic::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  
  return true;
}

void Statistic::Swap(Statistic* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Statistic::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Statistic_descriptor_;
  metadata.reflection = Statistic_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* Filter_Comparand_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Filter_Comparand_descriptor_;
}
bool Filter_Comparand_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Filter_Comparand Filter::EQUALS;
const Filter_Comparand Filter::LESS_THAN;
const Filter_Comparand Filter::LESS_THAN_OR_EQUALS;
const Filter_Comparand Filter::GREATER_THAN;
const Filter_Comparand Filter::GREATER_THAN_OR_EQUALS;
const Filter_Comparand Filter::Comparand_MIN;
const Filter_Comparand Filter::Comparand_MAX;
const int Filter::Comparand_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Filter_SortDirection_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Filter_SortDirection_descriptor_;
}
bool Filter_SortDirection_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Filter_SortDirection Filter::ASC;
const Filter_SortDirection Filter::DESC;
const Filter_SortDirection Filter::SortDirection_MIN;
const Filter_SortDirection Filter::SortDirection_MAX;
const int Filter::SortDirection_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Filter::kStatisticFieldNumber;
const int Filter::kComparandFieldNumber;
const int Filter::kSortDirectionFieldNumber;
#endif  // !_MSC_VER

Filter::Filter()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Filter::InitAsDefaultInstance() {
  statistic_ = const_cast< ::bnet::protocol::search::Statistic*>(&::bnet::protocol::search::Statistic::default_instance());
}

Filter::Filter(const Filter& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Filter::SharedCtor() {
  _cached_size_ = 0;
  statistic_ = NULL;
  comparand_ = 0;
  sort_direction_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Filter::~Filter() {
  SharedDtor();
}

void Filter::SharedDtor() {
  if (this != default_instance_) {
    delete statistic_;
  }
}

void Filter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Filter::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Filter_descriptor_;
}

const Filter& Filter::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_service_2fsearch_2fsearch_5ftypes_2eproto();  return *default_instance_;
}

Filter* Filter::default_instance_ = NULL;

Filter* Filter::New() const {
  return new Filter;
}

void Filter::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (statistic_ != NULL) statistic_->::bnet::protocol::search::Statistic::Clear();
    }
    comparand_ = 0;
    sort_direction_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Filter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .bnet.protocol.search.Statistic statistic = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_statistic()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_comparand;
        break;
      }
      
      // required .bnet.protocol.search.Filter.Comparand comparand = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_comparand:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::bnet::protocol::search::Filter_Comparand_IsValid(value)) {
            set_comparand(static_cast< ::bnet::protocol::search::Filter_Comparand >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_sort_direction;
        break;
      }
      
      // optional .bnet.protocol.search.Filter.SortDirection sort_direction = 3 [default = ASC];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sort_direction:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::bnet::protocol::search::Filter_SortDirection_IsValid(value)) {
            set_sort_direction(static_cast< ::bnet::protocol::search::Filter_SortDirection >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
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

void Filter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .bnet.protocol.search.Statistic statistic = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->statistic(), output);
  }
  
  // required .bnet.protocol.search.Filter.Comparand comparand = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->comparand(), output);
  }
  
  // optional .bnet.protocol.search.Filter.SortDirection sort_direction = 3 [default = ASC];
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->sort_direction(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Filter::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .bnet.protocol.search.Statistic statistic = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->statistic(), target);
  }
  
  // required .bnet.protocol.search.Filter.Comparand comparand = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->comparand(), target);
  }
  
  // optional .bnet.protocol.search.Filter.SortDirection sort_direction = 3 [default = ASC];
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->sort_direction(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Filter::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .bnet.protocol.search.Statistic statistic = 1;
    if (has_statistic()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->statistic());
    }
    
    // required .bnet.protocol.search.Filter.Comparand comparand = 2;
    if (has_comparand()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->comparand());
    }
    
    // optional .bnet.protocol.search.Filter.SortDirection sort_direction = 3 [default = ASC];
    if (has_sort_direction()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->sort_direction());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Filter::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Filter* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Filter*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Filter::MergeFrom(const Filter& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      mutable_statistic()->::bnet::protocol::search::Statistic::MergeFrom(from.statistic());
    }
    if (from._has_bit(1)) {
      set_comparand(from.comparand());
    }
    if (from._has_bit(2)) {
      set_sort_direction(from.sort_direction());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Filter::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Filter::CopyFrom(const Filter& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Filter::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  if (has_statistic()) {
    if (!this->statistic().IsInitialized()) return false;
  }
  return true;
}

void Filter::Swap(Filter* other) {
  if (other != this) {
    std::swap(statistic_, other->statistic_);
    std::swap(comparand_, other->comparand_);
    std::swap(sort_direction_, other->sort_direction_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Filter::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Filter_descriptor_;
  metadata.reflection = Filter_reflection_;
  return metadata;
}


// ===================================================================

const ::std::string Object::_default_id_;
const ::std::string Object::_default_data_;
#ifndef _MSC_VER
const int Object::kIdFieldNumber;
const int Object::kDataFieldNumber;
const int Object::kStatisticsFieldNumber;
#endif  // !_MSC_VER

Object::Object()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Object::InitAsDefaultInstance() {
}

Object::Object(const Object& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Object::SharedCtor() {
  _cached_size_ = 0;
  id_ = const_cast< ::std::string*>(&_default_id_);
  data_ = const_cast< ::std::string*>(&_default_data_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Object::~Object() {
  SharedDtor();
}

void Object::SharedDtor() {
  if (id_ != &_default_id_) {
    delete id_;
  }
  if (data_ != &_default_data_) {
    delete data_;
  }
  if (this != default_instance_) {
  }
}

void Object::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Object::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Object_descriptor_;
}

const Object& Object::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_service_2fsearch_2fsearch_5ftypes_2eproto();  return *default_instance_;
}

Object* Object::default_instance_ = NULL;

Object* Object::New() const {
  return new Object;
}

void Object::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (id_ != &_default_id_) {
        id_->clear();
      }
    }
    if (_has_bit(1)) {
      if (data_ != &_default_data_) {
        data_->clear();
      }
    }
  }
  statistics_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Object::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_data;
        break;
      }
      
      // optional bytes data = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_statistics;
        break;
      }
      
      // repeated .bnet.protocol.search.Statistic statistics = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_statistics:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_statistics()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_statistics;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
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

void Object::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes id = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->id(), output);
  }
  
  // optional bytes data = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->data(), output);
  }
  
  // repeated .bnet.protocol.search.Statistic statistics = 3;
  for (int i = 0; i < this->statistics_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->statistics(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Object::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bytes id = 1;
  if (_has_bit(0)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->id(), target);
  }
  
  // optional bytes data = 2;
  if (_has_bit(1)) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->data(), target);
  }
  
  // repeated .bnet.protocol.search.Statistic statistics = 3;
  for (int i = 0; i < this->statistics_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->statistics(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Object::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->id());
    }
    
    // optional bytes data = 2;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }
    
  }
  // repeated .bnet.protocol.search.Statistic statistics = 3;
  total_size += 1 * this->statistics_size();
  for (int i = 0; i < this->statistics_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->statistics(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Object::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Object* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Object*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Object::MergeFrom(const Object& from) {
  GOOGLE_CHECK_NE(&from, this);
  statistics_.MergeFrom(from.statistics_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_id(from.id());
    }
    if (from._has_bit(1)) {
      set_data(from.data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Object::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Object::CopyFrom(const Object& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Object::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  for (int i = 0; i < statistics_size(); i++) {
    if (!this->statistics(i).IsInitialized()) return false;
  }
  return true;
}

void Object::Swap(Object* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(data_, other->data_);
    statistics_.Swap(&other->statistics_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Object::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Object_descriptor_;
  metadata.reflection = Object_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace search
}  // namespace protocol
}  // namespace bnet

// @@protoc_insertion_point(global_scope)
