# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import service
from google.protobuf import service_reflection
from google.protobuf import descriptor_pb2



_TESTMESSAGESET = descriptor.Descriptor(
  name='TestMessageSet',
  full_name='protobuf_unittest.TestMessageSet',
  filename='google/protobuf/unittest_mset.proto',
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=descriptor._ParseOptions(descriptor_pb2.MessageOptions(), '\010\001'))


_TESTMESSAGESETCONTAINER = descriptor.Descriptor(
  name='TestMessageSetContainer',
  full_name='protobuf_unittest.TestMessageSetContainer',
  filename='google/protobuf/unittest_mset.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='message_set', full_name='protobuf_unittest.TestMessageSetContainer.message_set', index=0,
      number=1, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_TESTMESSAGESETEXTENSION1 = descriptor.Descriptor(
  name='TestMessageSetExtension1',
  full_name='protobuf_unittest.TestMessageSetExtension1',
  filename='google/protobuf/unittest_mset.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='i', full_name='protobuf_unittest.TestMessageSetExtension1.i', index=0,
      number=15, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
    descriptor.FieldDescriptor(
      name='message_set_extension', full_name='protobuf_unittest.TestMessageSetExtension1.message_set_extension', index=0,
      number=1545008, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=True, extension_scope=None,
      options=None),
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_TESTMESSAGESETEXTENSION2 = descriptor.Descriptor(
  name='TestMessageSetExtension2',
  full_name='protobuf_unittest.TestMessageSetExtension2',
  filename='google/protobuf/unittest_mset.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='str', full_name='protobuf_unittest.TestMessageSetExtension2.str', index=0,
      number=25, type=9, cpp_type=9, label=1,
      default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
    descriptor.FieldDescriptor(
      name='message_set_extension', full_name='protobuf_unittest.TestMessageSetExtension2.message_set_extension', index=0,
      number=1547769, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=True, extension_scope=None,
      options=None),
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_RAWMESSAGESET_ITEM = descriptor.Descriptor(
  name='Item',
  full_name='protobuf_unittest.RawMessageSet.Item',
  filename='google/protobuf/unittest_mset.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='type_id', full_name='protobuf_unittest.RawMessageSet.Item.type_id', index=0,
      number=2, type=5, cpp_type=1, label=2,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='message', full_name='protobuf_unittest.RawMessageSet.Item.message', index=1,
      number=3, type=12, cpp_type=9, label=2,
      default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)

_RAWMESSAGESET = descriptor.Descriptor(
  name='RawMessageSet',
  full_name='protobuf_unittest.RawMessageSet',
  filename='google/protobuf/unittest_mset.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='item', full_name='protobuf_unittest.RawMessageSet.item', index=0,
      number=1, type=10, cpp_type=10, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_TESTMESSAGESETCONTAINER.fields_by_name['message_set'].message_type = _TESTMESSAGESET
_RAWMESSAGESET.fields_by_name['item'].message_type = _RAWMESSAGESET_ITEM

class TestMessageSet(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _TESTMESSAGESET

class TestMessageSetContainer(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _TESTMESSAGESETCONTAINER

class TestMessageSetExtension1(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _TESTMESSAGESETEXTENSION1

class TestMessageSetExtension2(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _TESTMESSAGESETEXTENSION2

class RawMessageSet(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  
  class Item(message.Message):
    __metaclass__ = reflection.GeneratedProtocolMessageType
    DESCRIPTOR = _RAWMESSAGESET_ITEM
  DESCRIPTOR = _RAWMESSAGESET

_TESTMESSAGESETEXTENSION1.extensions_by_name['message_set_extension'].message_type = _TESTMESSAGESETEXTENSION1
TestMessageSet.RegisterExtension(_TESTMESSAGESETEXTENSION1.extensions_by_name['message_set_extension'])
_TESTMESSAGESETEXTENSION2.extensions_by_name['message_set_extension'].message_type = _TESTMESSAGESETEXTENSION2
TestMessageSet.RegisterExtension(_TESTMESSAGESETEXTENSION2.extensions_by_name['message_set_extension'])
