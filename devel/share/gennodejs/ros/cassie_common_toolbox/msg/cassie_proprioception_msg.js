// Auto-generated. Do not edit!

// (in-package cassie_common_toolbox.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class cassie_proprioception_msg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.radio = null;
      this.motor_torque = null;
      this.encoder_position = null;
      this.encoder_velocity = null;
      this.orientation = null;
      this.angular_velocity = null;
      this.linear_velocity = null;
      this.linear_acceleration = null;
      this.q_achilles = null;
      this.dq_achilles = null;
      this.contact = null;
      this.isCalibrated = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('radio')) {
        this.radio = initObj.radio
      }
      else {
        this.radio = new Array(16).fill(0);
      }
      if (initObj.hasOwnProperty('motor_torque')) {
        this.motor_torque = initObj.motor_torque
      }
      else {
        this.motor_torque = new Array(10).fill(0);
      }
      if (initObj.hasOwnProperty('encoder_position')) {
        this.encoder_position = initObj.encoder_position
      }
      else {
        this.encoder_position = new Array(14).fill(0);
      }
      if (initObj.hasOwnProperty('encoder_velocity')) {
        this.encoder_velocity = initObj.encoder_velocity
      }
      else {
        this.encoder_velocity = new Array(14).fill(0);
      }
      if (initObj.hasOwnProperty('orientation')) {
        this.orientation = initObj.orientation
      }
      else {
        this.orientation = new geometry_msgs.msg.Quaternion();
      }
      if (initObj.hasOwnProperty('angular_velocity')) {
        this.angular_velocity = initObj.angular_velocity
      }
      else {
        this.angular_velocity = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('linear_velocity')) {
        this.linear_velocity = initObj.linear_velocity
      }
      else {
        this.linear_velocity = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('linear_acceleration')) {
        this.linear_acceleration = initObj.linear_acceleration
      }
      else {
        this.linear_acceleration = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('q_achilles')) {
        this.q_achilles = initObj.q_achilles
      }
      else {
        this.q_achilles = new Array(2).fill(0);
      }
      if (initObj.hasOwnProperty('dq_achilles')) {
        this.dq_achilles = initObj.dq_achilles
      }
      else {
        this.dq_achilles = new Array(2).fill(0);
      }
      if (initObj.hasOwnProperty('contact')) {
        this.contact = initObj.contact
      }
      else {
        this.contact = new Array(2).fill(0);
      }
      if (initObj.hasOwnProperty('isCalibrated')) {
        this.isCalibrated = initObj.isCalibrated
      }
      else {
        this.isCalibrated = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cassie_proprioception_msg
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Check that the constant length array field [radio] has the right length
    if (obj.radio.length !== 16) {
      throw new Error('Unable to serialize array field radio - length must be 16')
    }
    // Serialize message field [radio]
    bufferOffset = _arraySerializer.float64(obj.radio, buffer, bufferOffset, 16);
    // Check that the constant length array field [motor_torque] has the right length
    if (obj.motor_torque.length !== 10) {
      throw new Error('Unable to serialize array field motor_torque - length must be 10')
    }
    // Serialize message field [motor_torque]
    bufferOffset = _arraySerializer.float64(obj.motor_torque, buffer, bufferOffset, 10);
    // Check that the constant length array field [encoder_position] has the right length
    if (obj.encoder_position.length !== 14) {
      throw new Error('Unable to serialize array field encoder_position - length must be 14')
    }
    // Serialize message field [encoder_position]
    bufferOffset = _arraySerializer.float64(obj.encoder_position, buffer, bufferOffset, 14);
    // Check that the constant length array field [encoder_velocity] has the right length
    if (obj.encoder_velocity.length !== 14) {
      throw new Error('Unable to serialize array field encoder_velocity - length must be 14')
    }
    // Serialize message field [encoder_velocity]
    bufferOffset = _arraySerializer.float64(obj.encoder_velocity, buffer, bufferOffset, 14);
    // Serialize message field [orientation]
    bufferOffset = geometry_msgs.msg.Quaternion.serialize(obj.orientation, buffer, bufferOffset);
    // Serialize message field [angular_velocity]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.angular_velocity, buffer, bufferOffset);
    // Serialize message field [linear_velocity]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.linear_velocity, buffer, bufferOffset);
    // Serialize message field [linear_acceleration]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.linear_acceleration, buffer, bufferOffset);
    // Check that the constant length array field [q_achilles] has the right length
    if (obj.q_achilles.length !== 2) {
      throw new Error('Unable to serialize array field q_achilles - length must be 2')
    }
    // Serialize message field [q_achilles]
    bufferOffset = _arraySerializer.float64(obj.q_achilles, buffer, bufferOffset, 2);
    // Check that the constant length array field [dq_achilles] has the right length
    if (obj.dq_achilles.length !== 2) {
      throw new Error('Unable to serialize array field dq_achilles - length must be 2')
    }
    // Serialize message field [dq_achilles]
    bufferOffset = _arraySerializer.float64(obj.dq_achilles, buffer, bufferOffset, 2);
    // Check that the constant length array field [contact] has the right length
    if (obj.contact.length !== 2) {
      throw new Error('Unable to serialize array field contact - length must be 2')
    }
    // Serialize message field [contact]
    bufferOffset = _arraySerializer.float64(obj.contact, buffer, bufferOffset, 2);
    // Serialize message field [isCalibrated]
    bufferOffset = _serializer.bool(obj.isCalibrated, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cassie_proprioception_msg
    let len;
    let data = new cassie_proprioception_msg(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [radio]
    data.radio = _arrayDeserializer.float64(buffer, bufferOffset, 16)
    // Deserialize message field [motor_torque]
    data.motor_torque = _arrayDeserializer.float64(buffer, bufferOffset, 10)
    // Deserialize message field [encoder_position]
    data.encoder_position = _arrayDeserializer.float64(buffer, bufferOffset, 14)
    // Deserialize message field [encoder_velocity]
    data.encoder_velocity = _arrayDeserializer.float64(buffer, bufferOffset, 14)
    // Deserialize message field [orientation]
    data.orientation = geometry_msgs.msg.Quaternion.deserialize(buffer, bufferOffset);
    // Deserialize message field [angular_velocity]
    data.angular_velocity = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [linear_velocity]
    data.linear_velocity = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [linear_acceleration]
    data.linear_acceleration = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [q_achilles]
    data.q_achilles = _arrayDeserializer.float64(buffer, bufferOffset, 2)
    // Deserialize message field [dq_achilles]
    data.dq_achilles = _arrayDeserializer.float64(buffer, bufferOffset, 2)
    // Deserialize message field [contact]
    data.contact = _arrayDeserializer.float64(buffer, bufferOffset, 2)
    // Deserialize message field [isCalibrated]
    data.isCalibrated = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 585;
  }

  static datatype() {
    // Returns string type for a message object
    return 'cassie_common_toolbox/cassie_proprioception_msg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3be1623c7974da649675ad63828eb904';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header                   header
    float64[16]              radio
    float64[10]              motor_torque
    float64[14]              encoder_position
    float64[14]              encoder_velocity
    geometry_msgs/Quaternion orientation
    geometry_msgs/Vector3    angular_velocity
    geometry_msgs/Vector3    linear_velocity
    geometry_msgs/Vector3    linear_acceleration
    float64[2]               q_achilles
    float64[2]               dq_achilles
    float64[2]               contact
    bool                     isCalibrated
    
    
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
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new cassie_proprioception_msg(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.radio !== undefined) {
      resolved.radio = msg.radio;
    }
    else {
      resolved.radio = new Array(16).fill(0)
    }

    if (msg.motor_torque !== undefined) {
      resolved.motor_torque = msg.motor_torque;
    }
    else {
      resolved.motor_torque = new Array(10).fill(0)
    }

    if (msg.encoder_position !== undefined) {
      resolved.encoder_position = msg.encoder_position;
    }
    else {
      resolved.encoder_position = new Array(14).fill(0)
    }

    if (msg.encoder_velocity !== undefined) {
      resolved.encoder_velocity = msg.encoder_velocity;
    }
    else {
      resolved.encoder_velocity = new Array(14).fill(0)
    }

    if (msg.orientation !== undefined) {
      resolved.orientation = geometry_msgs.msg.Quaternion.Resolve(msg.orientation)
    }
    else {
      resolved.orientation = new geometry_msgs.msg.Quaternion()
    }

    if (msg.angular_velocity !== undefined) {
      resolved.angular_velocity = geometry_msgs.msg.Vector3.Resolve(msg.angular_velocity)
    }
    else {
      resolved.angular_velocity = new geometry_msgs.msg.Vector3()
    }

    if (msg.linear_velocity !== undefined) {
      resolved.linear_velocity = geometry_msgs.msg.Vector3.Resolve(msg.linear_velocity)
    }
    else {
      resolved.linear_velocity = new geometry_msgs.msg.Vector3()
    }

    if (msg.linear_acceleration !== undefined) {
      resolved.linear_acceleration = geometry_msgs.msg.Vector3.Resolve(msg.linear_acceleration)
    }
    else {
      resolved.linear_acceleration = new geometry_msgs.msg.Vector3()
    }

    if (msg.q_achilles !== undefined) {
      resolved.q_achilles = msg.q_achilles;
    }
    else {
      resolved.q_achilles = new Array(2).fill(0)
    }

    if (msg.dq_achilles !== undefined) {
      resolved.dq_achilles = msg.dq_achilles;
    }
    else {
      resolved.dq_achilles = new Array(2).fill(0)
    }

    if (msg.contact !== undefined) {
      resolved.contact = msg.contact;
    }
    else {
      resolved.contact = new Array(2).fill(0)
    }

    if (msg.isCalibrated !== undefined) {
      resolved.isCalibrated = msg.isCalibrated;
    }
    else {
      resolved.isCalibrated = false
    }

    return resolved;
    }
};

module.exports = cassie_proprioception_msg;
