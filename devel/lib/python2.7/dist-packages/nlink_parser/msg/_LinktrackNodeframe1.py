# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from nlink_parser/LinktrackNodeframe1.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import nlink_parser.msg

class LinktrackNodeframe1(genpy.Message):
  _md5sum = "0a522663cdf935548d202960a37f14ce"
  _type = "nlink_parser/LinktrackNodeframe1"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 role
uint8 id
uint32 local_time
uint32 system_time
float32 voltage
LinktrackNode1[] nodes

================================================================================
MSG: nlink_parser/LinktrackNode1
uint8 role
uint8 id
float32[3] pos_3d
"""
  __slots__ = ['role','id','local_time','system_time','voltage','nodes']
  _slot_types = ['uint8','uint8','uint32','uint32','float32','nlink_parser/LinktrackNode1[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       role,id,local_time,system_time,voltage,nodes

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LinktrackNodeframe1, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.role is None:
        self.role = 0
      if self.id is None:
        self.id = 0
      if self.local_time is None:
        self.local_time = 0
      if self.system_time is None:
        self.system_time = 0
      if self.voltage is None:
        self.voltage = 0.
      if self.nodes is None:
        self.nodes = []
    else:
      self.role = 0
      self.id = 0
      self.local_time = 0
      self.system_time = 0
      self.voltage = 0.
      self.nodes = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2B2If().pack(_x.role, _x.id, _x.local_time, _x.system_time, _x.voltage))
      length = len(self.nodes)
      buff.write(_struct_I.pack(length))
      for val1 in self.nodes:
        _x = val1
        buff.write(_get_struct_2B().pack(_x.role, _x.id))
        buff.write(_get_struct_3f().pack(*val1.pos_3d))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.nodes is None:
        self.nodes = None
      end = 0
      _x = self
      start = end
      end += 14
      (_x.role, _x.id, _x.local_time, _x.system_time, _x.voltage,) = _get_struct_2B2If().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.nodes = []
      for i in range(0, length):
        val1 = nlink_parser.msg.LinktrackNode1()
        _x = val1
        start = end
        end += 2
        (_x.role, _x.id,) = _get_struct_2B().unpack(str[start:end])
        start = end
        end += 12
        val1.pos_3d = _get_struct_3f().unpack(str[start:end])
        self.nodes.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2B2If().pack(_x.role, _x.id, _x.local_time, _x.system_time, _x.voltage))
      length = len(self.nodes)
      buff.write(_struct_I.pack(length))
      for val1 in self.nodes:
        _x = val1
        buff.write(_get_struct_2B().pack(_x.role, _x.id))
        buff.write(val1.pos_3d.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.nodes is None:
        self.nodes = None
      end = 0
      _x = self
      start = end
      end += 14
      (_x.role, _x.id, _x.local_time, _x.system_time, _x.voltage,) = _get_struct_2B2If().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.nodes = []
      for i in range(0, length):
        val1 = nlink_parser.msg.LinktrackNode1()
        _x = val1
        start = end
        end += 2
        (_x.role, _x.id,) = _get_struct_2B().unpack(str[start:end])
        start = end
        end += 12
        val1.pos_3d = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
        self.nodes.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
_struct_2B2If = None
def _get_struct_2B2If():
    global _struct_2B2If
    if _struct_2B2If is None:
        _struct_2B2If = struct.Struct("<2B2If")
    return _struct_2B2If
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
