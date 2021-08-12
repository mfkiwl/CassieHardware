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

class cassie_estimation_msg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.pose = null;
      this.twist = null;
      this.ba = null;
      this.bw = null;
      this.plf = null;
      this.prf = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('pose')) {
        this.pose = initObj.pose
      }
      else {
        this.pose = new geometry_msgs.msg.Pose();
      }
      if (initObj.hasOwnProperty('twist')) {
        this.twist = initObj.twist
      }
      else {
        this.twist = new geometry_msgs.msg.Twist();
      }
      if (initObj.hasOwnProperty('ba')) {
        this.ba = initObj.ba
      }
      else {
        this.ba = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('bw')) {
        this.bw = initObj.bw
      }
      else {
        this.bw = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('plf')) {
        this.plf = initObj.plf
      }
      else {
        this.plf = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('prf')) {
        this.prf = initObj.prf
      }
      else {
        this.prf = new geometry_msgs.msg.Vector3();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cassie_estimation_msg
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [pose]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.pose, buffer, bufferOffset);
    // Serialize message field [twist]
    bufferOffset = geometry_msgs.msg.Twist.serialize(obj.twist, buffer, bufferOffset);
    // Serialize message field [ba]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.ba, buffer, bufferOffset);
    // Serialize message field [bw]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.bw, buffer, bufferOffset);
    // Serialize message field [plf]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.plf, buffer, bufferOffset);
    // Serialize message field [prf]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.prf, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cassie_estimation_msg
    let len;
    let data = new cassie_estimation_msg(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [pose]
    data.pose = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    // Deserialize message field [twist]
    data.twist = geometry_msgs.msg.Twist.deserialize(buffer, bufferOffset);
    // Deserialize message field [ba]
    data.ba = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [bw]
    data.bw = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [plf]
    data.plf = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [prf]
    data.prf = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 200;
  }

  static datatype() {
    // Returns string type for a message object
    return 'cassie_common_toolbox/cassie_estimation_msg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2af2fbfc27d752067e9575d7ec7cfd1f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header                header
    geometry_msgs/Pose    pose
    geometry_msgs/Twist   twist
    geometry_msgs/Vector3 ba
    geometry_msgs/Vector3 bw
    geometry_msgs/Vector3 plf
    geometry_msgs/Vector3 prf
    
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
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    ================================================================================
    MSG: geometry_msgs/Twist
    # This expresses velocity in free space broken into its linear and angular parts.
    Vector3  linear
    Vector3  angular
    
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
    const resolved = new cassie_estimation_msg(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.pose !== undefined) {
      resolved.pose = geometry_msgs.msg.Pose.Resolve(msg.pose)
    }
    else {
      resolved.pose = new geometry_msgs.msg.Pose()
    }

    if (msg.twist !== undefined) {
      resolved.twist = geometry_msgs.msg.Twist.Resolve(msg.twist)
    }
    else {
      resolved.twist = new geometry_msgs.msg.Twist()
    }

    if (msg.ba !== undefined) {
      resolved.ba = geometry_msgs.msg.Vector3.Resolve(msg.ba)
    }
    else {
      resolved.ba = new geometry_msgs.msg.Vector3()
    }

    if (msg.bw !== undefined) {
      resolved.bw = geometry_msgs.msg.Vector3.Resolve(msg.bw)
    }
    else {
      resolved.bw = new geometry_msgs.msg.Vector3()
    }

    if (msg.plf !== undefined) {
      resolved.plf = geometry_msgs.msg.Vector3.Resolve(msg.plf)
    }
    else {
      resolved.plf = new geometry_msgs.msg.Vector3()
    }

    if (msg.prf !== undefined) {
      resolved.prf = geometry_msgs.msg.Vector3.Resolve(msg.prf)
    }
    else {
      resolved.prf = new geometry_msgs.msg.Vector3()
    }

    return resolved;
    }
};

module.exports = cassie_estimation_msg;
