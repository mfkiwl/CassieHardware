; Auto-generated. Do not edit!


(cl:in-package cassie_common_toolbox-msg)


;//! \htmlinclude cassie_estimation_msg.msg.html

(cl:defclass <cassie_estimation_msg> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (twist
    :reader twist
    :initarg :twist
    :type geometry_msgs-msg:Twist
    :initform (cl:make-instance 'geometry_msgs-msg:Twist))
   (ba
    :reader ba
    :initarg :ba
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (bw
    :reader bw
    :initarg :bw
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (plf
    :reader plf
    :initarg :plf
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (prf
    :reader prf
    :initarg :prf
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3)))
)

(cl:defclass cassie_estimation_msg (<cassie_estimation_msg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cassie_estimation_msg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cassie_estimation_msg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cassie_common_toolbox-msg:<cassie_estimation_msg> is deprecated: use cassie_common_toolbox-msg:cassie_estimation_msg instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <cassie_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:header-val is deprecated.  Use cassie_common_toolbox-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <cassie_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:pose-val is deprecated.  Use cassie_common_toolbox-msg:pose instead.")
  (pose m))

(cl:ensure-generic-function 'twist-val :lambda-list '(m))
(cl:defmethod twist-val ((m <cassie_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:twist-val is deprecated.  Use cassie_common_toolbox-msg:twist instead.")
  (twist m))

(cl:ensure-generic-function 'ba-val :lambda-list '(m))
(cl:defmethod ba-val ((m <cassie_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:ba-val is deprecated.  Use cassie_common_toolbox-msg:ba instead.")
  (ba m))

(cl:ensure-generic-function 'bw-val :lambda-list '(m))
(cl:defmethod bw-val ((m <cassie_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:bw-val is deprecated.  Use cassie_common_toolbox-msg:bw instead.")
  (bw m))

(cl:ensure-generic-function 'plf-val :lambda-list '(m))
(cl:defmethod plf-val ((m <cassie_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:plf-val is deprecated.  Use cassie_common_toolbox-msg:plf instead.")
  (plf m))

(cl:ensure-generic-function 'prf-val :lambda-list '(m))
(cl:defmethod prf-val ((m <cassie_estimation_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cassie_common_toolbox-msg:prf-val is deprecated.  Use cassie_common_toolbox-msg:prf instead.")
  (prf m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cassie_estimation_msg>) ostream)
  "Serializes a message object of type '<cassie_estimation_msg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'twist) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'ba) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'bw) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'plf) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'prf) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cassie_estimation_msg>) istream)
  "Deserializes a message object of type '<cassie_estimation_msg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'twist) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'ba) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'bw) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'plf) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'prf) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cassie_estimation_msg>)))
  "Returns string type for a message object of type '<cassie_estimation_msg>"
  "cassie_common_toolbox/cassie_estimation_msg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cassie_estimation_msg)))
  "Returns string type for a message object of type 'cassie_estimation_msg"
  "cassie_common_toolbox/cassie_estimation_msg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cassie_estimation_msg>)))
  "Returns md5sum for a message object of type '<cassie_estimation_msg>"
  "2af2fbfc27d752067e9575d7ec7cfd1f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cassie_estimation_msg)))
  "Returns md5sum for a message object of type 'cassie_estimation_msg"
  "2af2fbfc27d752067e9575d7ec7cfd1f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cassie_estimation_msg>)))
  "Returns full string definition for message of type '<cassie_estimation_msg>"
  (cl:format cl:nil "Header                header~%geometry_msgs/Pose    pose~%geometry_msgs/Twist   twist~%geometry_msgs/Vector3 ba~%geometry_msgs/Vector3 bw~%geometry_msgs/Vector3 plf~%geometry_msgs/Vector3 prf~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cassie_estimation_msg)))
  "Returns full string definition for message of type 'cassie_estimation_msg"
  (cl:format cl:nil "Header                header~%geometry_msgs/Pose    pose~%geometry_msgs/Twist   twist~%geometry_msgs/Vector3 ba~%geometry_msgs/Vector3 bw~%geometry_msgs/Vector3 plf~%geometry_msgs/Vector3 prf~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cassie_estimation_msg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'twist))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'ba))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'bw))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'plf))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'prf))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cassie_estimation_msg>))
  "Converts a ROS message object to a list"
  (cl:list 'cassie_estimation_msg
    (cl:cons ':header (header msg))
    (cl:cons ':pose (pose msg))
    (cl:cons ':twist (twist msg))
    (cl:cons ':ba (ba msg))
    (cl:cons ':bw (bw msg))
    (cl:cons ':plf (plf msg))
    (cl:cons ':prf (prf msg))
))
