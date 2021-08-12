# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cassie_common_toolbox/cassie_control_msg.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class cassie_control_msg(genpy.Message):
  _md5sum = "ab803f134e745ccc231d6d4c855e2890"
  _type = "cassie_common_toolbox/cassie_control_msg"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header    header
float64[10] motor_torque
float64[10] ya
float64[10] dya
float64[10] yd
float64[10] dyd

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','motor_torque','ya','dya','yd','dyd']
  _slot_types = ['std_msgs/Header','float64[10]','float64[10]','float64[10]','float64[10]','float64[10]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,motor_torque,ya,dya,yd,dyd

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(cassie_control_msg, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.motor_torque is None:
        self.motor_torque = [0.] * 10
      if self.ya is None:
        self.ya = [0.] * 10
      if self.dya is None:
        self.dya = [0.] * 10
      if self.yd is None:
        self.yd = [0.] * 10
      if self.dyd is None:
        self.dyd = [0.] * 10
    else:
      self.header = std_msgs.msg.Header()
      self.motor_torque = [0.] * 10
      self.ya = [0.] * 10
      self.dya = [0.] * 10
      self.yd = [0.] * 10
      self.dyd = [0.] * 10

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      buff.write(_get_struct_10d().pack(*self.motor_torque))
      buff.write(_get_struct_10d().pack(*self.ya))
      buff.write(_get_struct_10d().pack(*self.dya))
      buff.write(_get_struct_10d().pack(*self.yd))
      buff.write(_get_struct_10d().pack(*self.dyd))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 80
      self.motor_torque = _get_struct_10d().unpack(str[start:end])
      start = end
      end += 80
      self.ya = _get_struct_10d().unpack(str[start:end])
      start = end
      end += 80
      self.dya = _get_struct_10d().unpack(str[start:end])
      start = end
      end += 80
      self.yd = _get_struct_10d().unpack(str[start:end])
      start = end
      end += 80
      self.dyd = _get_struct_10d().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      buff.write(self.motor_torque.tostring())
      buff.write(self.ya.tostring())
      buff.write(self.dya.tostring())
      buff.write(self.yd.tostring())
      buff.write(self.dyd.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 80
      self.motor_torque = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=10)
      start = end
      end += 80
      self.ya = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=10)
      start = end
      end += 80
      self.dya = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=10)
      start = end
      end += 80
      self.yd = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=10)
      start = end
      end += 80
      self.dyd = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=10)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_10d = None
def _get_struct_10d():
    global _struct_10d
    if _struct_10d is None:
        _struct_10d = struct.Struct("<10d")
    return _struct_10d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
