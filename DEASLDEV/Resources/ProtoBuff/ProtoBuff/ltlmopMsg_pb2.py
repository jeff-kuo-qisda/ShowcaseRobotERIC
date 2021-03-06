# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import service
from google.protobuf import service_reflection
from google.protobuf import descriptor_pb2


_PYTHONREQUESTMSG_SENSORTYPE = descriptor.EnumDescriptor(
  name='SensorType',
  full_name='LTLMoPCsharpInterface.PythonRequestMsg.SensorType',
  filename='SensorType',
  values=[
    descriptor.EnumValueDescriptor(
      name='LIDAR', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='ARTAG', index=1, number=1,
      options=None,
      type=None),
  ],
  options=None,
)

_PYTHONREQUESTMSG_ACTUATORTYPE = descriptor.EnumDescriptor(
  name='ActuatorType',
  full_name='LTLMoPCsharpInterface.PythonRequestMsg.ActuatorType',
  filename='ActuatorType',
  values=[
    descriptor.EnumValueDescriptor(
      name='ARM', index=0, number=0,
      options=None,
      type=None),
  ],
  options=None,
)

_PYTHONREQUESTMSG_ROBOTTYPE = descriptor.EnumDescriptor(
  name='RobotType',
  full_name='LTLMoPCsharpInterface.PythonRequestMsg.RobotType',
  filename='RobotType',
  values=[
    descriptor.EnumValueDescriptor(
      name='PIONEER', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='SEGWAY', index=1, number=1,
      options=None,
      type=None),
  ],
  options=None,
)


_PYTHONREQUESTMSG_VELOCITY = descriptor.Descriptor(
  name='Velocity',
  full_name='LTLMoPCsharpInterface.PythonRequestMsg.Velocity',
  filename='ltlmopMsg.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='v', full_name='LTLMoPCsharpInterface.PythonRequestMsg.Velocity.v', index=0,
      number=1, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='omega', full_name='LTLMoPCsharpInterface.PythonRequestMsg.Velocity.omega', index=1,
      number=2, type=1, cpp_type=5, label=1,
      default_value=0,
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

_PYTHONREQUESTMSG_ACTUATOR = descriptor.Descriptor(
  name='Actuator',
  full_name='LTLMoPCsharpInterface.PythonRequestMsg.Actuator',
  filename='ltlmopMsg.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='status', full_name='LTLMoPCsharpInterface.PythonRequestMsg.Actuator.status', index=0,
      number=1, type=1, cpp_type=5, label=1,
      default_value=0,
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

_PYTHONREQUESTMSG = descriptor.Descriptor(
  name='PythonRequestMsg',
  full_name='LTLMoPCsharpInterface.PythonRequestMsg',
  filename='ltlmopMsg.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='id', full_name='LTLMoPCsharpInterface.PythonRequestMsg.id', index=0,
      number=1, type=5, cpp_type=1, label=2,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='robot', full_name='LTLMoPCsharpInterface.PythonRequestMsg.robot', index=1,
      number=2, type=14, cpp_type=8, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='vel', full_name='LTLMoPCsharpInterface.PythonRequestMsg.vel', index=2,
      number=3, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='actuator', full_name='LTLMoPCsharpInterface.PythonRequestMsg.actuator', index=3,
      number=4, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='sensor', full_name='LTLMoPCsharpInterface.PythonRequestMsg.sensor', index=4,
      number=5, type=14, cpp_type=8, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='actuatorType', full_name='LTLMoPCsharpInterface.PythonRequestMsg.actuatorType', index=5,
      number=6, type=14, cpp_type=8, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
    _PYTHONREQUESTMSG_SENSORTYPE,
    _PYTHONREQUESTMSG_ACTUATORTYPE,
    _PYTHONREQUESTMSG_ROBOTTYPE,
  ],
  options=None)


_PYTHONREQUESTMSG.fields_by_name['robot'].enum_type = _PYTHONREQUESTMSG_ROBOTTYPE
_PYTHONREQUESTMSG.fields_by_name['vel'].message_type = _PYTHONREQUESTMSG_VELOCITY
_PYTHONREQUESTMSG.fields_by_name['actuator'].message_type = _PYTHONREQUESTMSG_ACTUATOR
_PYTHONREQUESTMSG.fields_by_name['sensor'].enum_type = _PYTHONREQUESTMSG_SENSORTYPE
_PYTHONREQUESTMSG.fields_by_name['actuatorType'].enum_type = _PYTHONREQUESTMSG_ACTUATORTYPE

class PythonRequestMsg(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  
  class Velocity(message.Message):
    __metaclass__ = reflection.GeneratedProtocolMessageType
    DESCRIPTOR = _PYTHONREQUESTMSG_VELOCITY
  
  class Actuator(message.Message):
    __metaclass__ = reflection.GeneratedProtocolMessageType
    DESCRIPTOR = _PYTHONREQUESTMSG_ACTUATOR
  DESCRIPTOR = _PYTHONREQUESTMSG

