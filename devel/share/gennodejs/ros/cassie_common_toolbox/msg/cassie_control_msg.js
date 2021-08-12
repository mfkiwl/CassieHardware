// Auto-generated. Do not edit!

// (in-package cassie_common_toolbox.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class cassie_control_msg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.motor_torque = null;
      this.ya = null;
      this.dya = null;
      this.yd = null;
      this.dyd = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('motor_torque')) {
        this.motor_torque = initObj.motor_torque
      }
      else {
        this.motor_torque = new Array(10).fill(0);
      }
      if (initObj.hasOwnProperty('ya')) {
        this.ya = initObj.ya
      }
      else {
        this.ya = new Array(10).fill(0);
      }
      if (initObj.hasOwnProperty('dya')) {
        this.dya = initObj.dya
      }
      else {
        this.dya = new Array(10).fill(0);
      }
      if (initObj.hasOwnProperty('yd')) {
        this.yd = initObj.yd
      }
      else {
        this.yd = new Array(10).fill(0);
      }
      if (initObj.hasOwnProperty('dyd')) {
        this.dyd = initObj.dyd
      }
      else {
        this.dyd = new Array(10).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cassie_control_msg
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Check that the constant length array field [motor_torque] has the right length
    if (obj.motor_torque.length !== 10) {
      throw new Error('Unable to serialize array field motor_torque - length must be 10')
    }
    // Serialize message field [motor_torque]
    bufferOffset = _arraySerializer.float64(obj.motor_torque, buffer, bufferOffset, 10);
    // Check that the constant length array field [ya] has the right length
    if (obj.ya.length !== 10) {
      throw new Error('Unable to serialize array field ya - length must be 10')
    }
    // Serialize message field [ya]
    bufferOffset = _arraySerializer.float64(obj.ya, buffer, bufferOffset, 10);
    // Check that the constant length array field [dya] has the right length
    if (obj.dya.length !== 10) {
      throw new Error('Unable to serialize array field dya - length must be 10')
    }
    // Serialize message field [dya]
    bufferOffset = _arraySerializer.float64(obj.dya, buffer, bufferOffset, 10);
    // Check that the constant length array field [yd] has the right length
    if (obj.yd.length !== 10) {
      throw new Error('Unable to serialize array field yd - length must be 10')
    }
    // Serialize message field [yd]
    bufferOffset = _arraySerializer.float64(obj.yd, buffer, bufferOffset, 10);
    // Check that the constant length array field [dyd] has the right length
    if (obj.dyd.length !== 10) {
      throw new Error('Unable to serialize array field dyd - length must be 10')
    }
    // Serialize message field [dyd]
    bufferOffset = _arraySerializer.float64(obj.dyd, buffer, bufferOffset, 10);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cassie_control_msg
    let len;
    let data = new cassie_control_msg(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [motor_torque]
    data.motor_torque = _arrayDeserializer.float64(buffer, bufferOffset, 10)
    // Deserialize message field [ya]
    data.ya = _arrayDeserializer.float64(buffer, bufferOffset, 10)
    // Deserialize message field [dya]
    data.dya = _arrayDeserializer.float64(buffer, bufferOffset, 10)
    // Deserialize message field [yd]
    data.yd = _arrayDeserializer.float64(buffer, bufferOffset, 10)
    // Deserialize message field [dyd]
    data.dyd = _arrayDeserializer.float64(buffer, bufferOffset, 10)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 400;
  }

  static datatype() {
    // Returns string type for a message object
    return 'cassie_common_toolbox/cassie_control_msg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ab803f134e745ccc231d6d4c855e2890';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header    header
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new cassie_control_msg(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.motor_torque !== undefined) {
      resolved.motor_torque = msg.motor_torque;
    }
    else {
      resolved.motor_torque = new Array(10).fill(0)
    }

    if (msg.ya !== undefined) {
      resolved.ya = msg.ya;
    }
    else {
      resolved.ya = new Array(10).fill(0)
    }

    if (msg.dya !== undefined) {
      resolved.dya = msg.dya;
    }
    else {
      resolved.dya = new Array(10).fill(0)
    }

    if (msg.yd !== undefined) {
      resolved.yd = msg.yd;
    }
    else {
      resolved.yd = new Array(10).fill(0)
    }

    if (msg.dyd !== undefined) {
      resolved.dyd = msg.dyd;
    }
    else {
      resolved.dyd = new Array(10).fill(0)
    }

    return resolved;
    }
};

module.exports = cassie_control_msg;
