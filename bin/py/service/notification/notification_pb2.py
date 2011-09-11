# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import service
from google.protobuf import service_reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


DESCRIPTOR = descriptor.FileDescriptor(
  name='service/notification/notification.proto',
  package='bnet.protocol.notification',
  serialized_pb='\n\'service/notification/notification.proto\x12\x1a\x62net.protocol.notification\x1a\x1clib/protocol/attribute.proto\x1a\x19lib/protocol/entity.proto\x1a\x11lib/rpc/rpc.proto\"\xe1\x01\n\x0cNotification\x12*\n\tsender_id\x18\x01 \x01(\x0b\x32\x17.bnet.protocol.EntityId\x12\x34\n\x13sender_game_account\x18\x02 \x01(\x0b\x32\x17.bnet.protocol.EntityId\x12*\n\ttarget_id\x18\x03 \x02(\x0b\x32\x17.bnet.protocol.EntityId\x12\x0c\n\x04type\x18\x04 \x02(\t\x12\x35\n\tattribute\x18\x05 \x03(\x0b\x32\".bnet.protocol.attribute.Attribute\"?\n\x11\x46indClientRequest\x12*\n\tentity_id\x18\x01 \x02(\x0b\x32\x17.bnet.protocol.EntityId\"X\n\x12\x46indClientResponse\x12\r\n\x05label\x18\x01 \x02(\r\x12\x33\n\x11\x63lient_process_id\x18\x02 \x01(\x0b\x32\x18.bnet.protocol.ProcessId\"C\n\x15RegisterClientRequest\x12*\n\tentity_id\x18\x01 \x02(\x0b\x32\x17.bnet.protocol.EntityId\"E\n\x17UnregisterClientRequest\x12*\n\tentity_id\x18\x01 \x02(\x0b\x32\x17.bnet.protocol.EntityId2\x93\x03\n\x13NotificationService\x12S\n\x10SendNotification\x12(.bnet.protocol.notification.Notification\x1a\x15.bnet.protocol.NoData\x12Z\n\x0eRegisterClient\x12\x31.bnet.protocol.notification.RegisterClientRequest\x1a\x15.bnet.protocol.NoData\x12^\n\x10UnregisterClient\x12\x33.bnet.protocol.notification.UnregisterClientRequest\x1a\x15.bnet.protocol.NoData\x12k\n\nFindClient\x12-.bnet.protocol.notification.FindClientRequest\x1a..bnet.protocol.notification.FindClientResponse2v\n\x14NotificationListener\x12^\n\x16OnNotificationReceived\x12(.bnet.protocol.notification.Notification\x1a\x1a.bnet.protocol.NO_RESPONSEB\x12\x42\rNotification2\x80\x01\x01')




_NOTIFICATION = descriptor.Descriptor(
  name='Notification',
  full_name='bnet.protocol.notification.Notification',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='sender_id', full_name='bnet.protocol.notification.Notification.sender_id', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='sender_game_account', full_name='bnet.protocol.notification.Notification.sender_game_account', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='target_id', full_name='bnet.protocol.notification.Notification.target_id', index=2,
      number=3, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='type', full_name='bnet.protocol.notification.Notification.type', index=3,
      number=4, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='attribute', full_name='bnet.protocol.notification.Notification.attribute', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=148,
  serialized_end=373,
)


_FINDCLIENTREQUEST = descriptor.Descriptor(
  name='FindClientRequest',
  full_name='bnet.protocol.notification.FindClientRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='entity_id', full_name='bnet.protocol.notification.FindClientRequest.entity_id', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=375,
  serialized_end=438,
)


_FINDCLIENTRESPONSE = descriptor.Descriptor(
  name='FindClientResponse',
  full_name='bnet.protocol.notification.FindClientResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='label', full_name='bnet.protocol.notification.FindClientResponse.label', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='client_process_id', full_name='bnet.protocol.notification.FindClientResponse.client_process_id', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=440,
  serialized_end=528,
)


_REGISTERCLIENTREQUEST = descriptor.Descriptor(
  name='RegisterClientRequest',
  full_name='bnet.protocol.notification.RegisterClientRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='entity_id', full_name='bnet.protocol.notification.RegisterClientRequest.entity_id', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=530,
  serialized_end=597,
)


_UNREGISTERCLIENTREQUEST = descriptor.Descriptor(
  name='UnregisterClientRequest',
  full_name='bnet.protocol.notification.UnregisterClientRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='entity_id', full_name='bnet.protocol.notification.UnregisterClientRequest.entity_id', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=599,
  serialized_end=668,
)

import lib.protocol.attribute_pb2
import lib.protocol.entity_pb2
import lib.rpc.rpc_pb2

_NOTIFICATION.fields_by_name['sender_id'].message_type = lib.protocol.entity_pb2._ENTITYID
_NOTIFICATION.fields_by_name['sender_game_account'].message_type = lib.protocol.entity_pb2._ENTITYID
_NOTIFICATION.fields_by_name['target_id'].message_type = lib.protocol.entity_pb2._ENTITYID
_NOTIFICATION.fields_by_name['attribute'].message_type = lib.protocol.attribute_pb2._ATTRIBUTE
_FINDCLIENTREQUEST.fields_by_name['entity_id'].message_type = lib.protocol.entity_pb2._ENTITYID
_FINDCLIENTRESPONSE.fields_by_name['client_process_id'].message_type = lib.rpc.rpc_pb2._PROCESSID
_REGISTERCLIENTREQUEST.fields_by_name['entity_id'].message_type = lib.protocol.entity_pb2._ENTITYID
_UNREGISTERCLIENTREQUEST.fields_by_name['entity_id'].message_type = lib.protocol.entity_pb2._ENTITYID

class Notification(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _NOTIFICATION
  
  # @@protoc_insertion_point(class_scope:bnet.protocol.notification.Notification)

class FindClientRequest(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _FINDCLIENTREQUEST
  
  # @@protoc_insertion_point(class_scope:bnet.protocol.notification.FindClientRequest)

class FindClientResponse(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _FINDCLIENTRESPONSE
  
  # @@protoc_insertion_point(class_scope:bnet.protocol.notification.FindClientResponse)

class RegisterClientRequest(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _REGISTERCLIENTREQUEST
  
  # @@protoc_insertion_point(class_scope:bnet.protocol.notification.RegisterClientRequest)

class UnregisterClientRequest(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _UNREGISTERCLIENTREQUEST
  
  # @@protoc_insertion_point(class_scope:bnet.protocol.notification.UnregisterClientRequest)


_NOTIFICATIONSERVICE = descriptor.ServiceDescriptor(
  name='NotificationService',
  full_name='bnet.protocol.notification.NotificationService',
  file=DESCRIPTOR,
  index=0,
  options=None,
  serialized_start=671,
  serialized_end=1074,
  methods=[
  descriptor.MethodDescriptor(
    name='SendNotification',
    full_name='bnet.protocol.notification.NotificationService.SendNotification',
    index=0,
    containing_service=None,
    input_type=_NOTIFICATION,
    output_type=lib.rpc.rpc_pb2._NODATA,
    options=None,
  ),
  descriptor.MethodDescriptor(
    name='RegisterClient',
    full_name='bnet.protocol.notification.NotificationService.RegisterClient',
    index=1,
    containing_service=None,
    input_type=_REGISTERCLIENTREQUEST,
    output_type=lib.rpc.rpc_pb2._NODATA,
    options=None,
  ),
  descriptor.MethodDescriptor(
    name='UnregisterClient',
    full_name='bnet.protocol.notification.NotificationService.UnregisterClient',
    index=2,
    containing_service=None,
    input_type=_UNREGISTERCLIENTREQUEST,
    output_type=lib.rpc.rpc_pb2._NODATA,
    options=None,
  ),
  descriptor.MethodDescriptor(
    name='FindClient',
    full_name='bnet.protocol.notification.NotificationService.FindClient',
    index=3,
    containing_service=None,
    input_type=_FINDCLIENTREQUEST,
    output_type=_FINDCLIENTRESPONSE,
    options=None,
  ),
])

class NotificationService(service.Service):
  __metaclass__ = service_reflection.GeneratedServiceType
  DESCRIPTOR = _NOTIFICATIONSERVICE
class NotificationService_Stub(NotificationService):
  __metaclass__ = service_reflection.GeneratedServiceStubType
  DESCRIPTOR = _NOTIFICATIONSERVICE


_NOTIFICATIONLISTENER = descriptor.ServiceDescriptor(
  name='NotificationListener',
  full_name='bnet.protocol.notification.NotificationListener',
  file=DESCRIPTOR,
  index=1,
  options=None,
  serialized_start=1076,
  serialized_end=1194,
  methods=[
  descriptor.MethodDescriptor(
    name='OnNotificationReceived',
    full_name='bnet.protocol.notification.NotificationListener.OnNotificationReceived',
    index=0,
    containing_service=None,
    input_type=_NOTIFICATION,
    output_type=lib.rpc.rpc_pb2._NO_RESPONSE,
    options=None,
  ),
])

class NotificationListener(service.Service):
  __metaclass__ = service_reflection.GeneratedServiceType
  DESCRIPTOR = _NOTIFICATIONLISTENER
class NotificationListener_Stub(NotificationListener):
  __metaclass__ = service_reflection.GeneratedServiceStubType
  DESCRIPTOR = _NOTIFICATIONLISTENER

# @@protoc_insertion_point(module_scope)