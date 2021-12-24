; Auto-generated. Do not edit!


(cl:in-package cassie_common_toolbox-msg)


;//! \htmlinclude cassie_velocity_estimation_msg.msg.html

(cl:defclass <cassie_velocity_estimation_msg> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (linear_velocity
    :reader linear_velocity
    :initarg :linear_velocity
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3)))
)

(cl:defclass cassie_velocity_estimation_msg (<cassie_velocity_estimation_msg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cassie_velocity_estimation_msg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cassie_velocity_estimation_msg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cassie_common_toolbox-msg:<cassie_velocity_estimation_msg> is deprecated: use cassie_common_toolbox-msg:cassie_velocity_estimation_msg instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <cassie_velocity_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:header-val is deprecated.  Use cassie_common_toolbox-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'linear_velocity-val :lambda-list '(m))
(cl:defmethod linear_velocity-val ((m <cassie_velocity_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:linear_velocity-val is deprecated.  Use cassie_common_toolbox-msg:linear_velocity instead.")
  (linear_velocity m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cassie_velocity_estimation_msg>) ostream)
  "Serializes a message object of type '<cassie_velocity_estimation_msg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'linear_velocity) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cassie_velocity_estimation_msg>) istream)
  "Deserializes a message object of type '<cassie_velocity_estimation_msg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'linear_velocity) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cassie_velocity_estimation_msg>)))
  "Returns string type for a message object of type '<cassie_velocity_estimation_msg>"
  "cassie_common_toolbox/cassie_velocity_estimation_msg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cassie_velocity_estimation_msg)))
  "Returns string type for a message object of type 'cassie_velocity_estimation_msg"
  "cassie_common_toolbox/cassie_velocity_estimation_msg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cassie_velocity_estimation_msg>)))
  "Returns md5sum for a message object of type '<cassie_velocity_estimation_msg>"
  "76a38944cc7b4b7cc6e1dde51ece2158")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cassie_velocity_estimation_msg)))
  "Returns md5sum for a message object of type 'cassie_velocity_estimation_msg"
  "76a38944cc7b4b7cc6e1dde51ece2158")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cassie_velocity_estimation_msg>)))
  "Returns full string definition for message of type '<cassie_velocity_estimation_msg>"
  (cl:format cl:nil "Header                header~%geometry_msgs/Vector3 linear_velocity~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cassie_velocity_estimation_msg)))
  "Returns full string definition for message of type 'cassie_velocity_estimation_msg"
  (cl:format cl:nil "Header                header~%geometry_msgs/Vector3 linear_velocity~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cassie_velocity_estimation_msg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'linear_velocity))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cassie_velocity_estimation_msg>))
  "Converts a ROS message object to a list"
  (cl:list 'cassie_velocity_estimation_msg
    (cl:cons ':header (header msg))
    (cl:cons ':linear_velocity (linear_velocity msg))
))
