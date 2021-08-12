;; Auto-generated. Do not edit!


(when (boundp 'cassie_common_toolbox::cassie_estimation_msg)
  (if (not (find-package "CASSIE_COMMON_TOOLBOX"))
    (make-package "CASSIE_COMMON_TOOLBOX"))
  (shadow 'cassie_estimation_msg (find-package "CASSIE_COMMON_TOOLBOX")))
(unless (find-package "CASSIE_COMMON_TOOLBOX::CASSIE_ESTIMATION_MSG")
  (make-package "CASSIE_COMMON_TOOLBOX::CASSIE_ESTIMATION_MSG"))

(in-package "ROS")
;;//! \htmlinclude cassie_estimation_msg.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass cassie_common_toolbox::cassie_estimation_msg
  :super ros::object
  :slots (_header _pose _twist _ba _bw _plf _prf ))

(defmethod cassie_common_toolbox::cassie_estimation_msg
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:pose __pose) (instance geometry_msgs::Pose :init))
    ((:twist __twist) (instance geometry_msgs::Twist :init))
    ((:ba __ba) (instance geometry_msgs::Vector3 :init))
    ((:bw __bw) (instance geometry_msgs::Vector3 :init))
    ((:plf __plf) (instance geometry_msgs::Vector3 :init))
    ((:prf __prf) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _pose __pose)
   (setq _twist __twist)
   (setq _ba __ba)
   (setq _bw __bw)
   (setq _plf __plf)
   (setq _prf __prf)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:twist
   (&rest __twist)
   (if (keywordp (car __twist))
       (send* _twist __twist)
     (progn
       (if __twist (setq _twist (car __twist)))
       _twist)))
  (:ba
   (&rest __ba)
   (if (keywordp (car __ba))
       (send* _ba __ba)
     (progn
       (if __ba (setq _ba (car __ba)))
       _ba)))
  (:bw
   (&rest __bw)
   (if (keywordp (car __bw))
       (send* _bw __bw)
     (progn
       (if __bw (setq _bw (car __bw)))
       _bw)))
  (:plf
   (&rest __plf)
   (if (keywordp (car __plf))
       (send* _plf __plf)
     (progn
       (if __plf (setq _plf (car __plf)))
       _plf)))
  (:prf
   (&rest __prf)
   (if (keywordp (car __prf))
       (send* _prf __prf)
     (progn
       (if __prf (setq _prf (car __prf)))
       _prf)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; geometry_msgs/Pose _pose
    (send _pose :serialization-length)
    ;; geometry_msgs/Twist _twist
    (send _twist :serialization-length)
    ;; geometry_msgs/Vector3 _ba
    (send _ba :serialization-length)
    ;; geometry_msgs/Vector3 _bw
    (send _bw :serialization-length)
    ;; geometry_msgs/Vector3 _plf
    (send _plf :serialization-length)
    ;; geometry_msgs/Vector3 _prf
    (send _prf :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; geometry_msgs/Pose _pose
       (send _pose :serialize s)
     ;; geometry_msgs/Twist _twist
       (send _twist :serialize s)
     ;; geometry_msgs/Vector3 _ba
       (send _ba :serialize s)
     ;; geometry_msgs/Vector3 _bw
       (send _bw :serialize s)
     ;; geometry_msgs/Vector3 _plf
       (send _plf :serialize s)
     ;; geometry_msgs/Vector3 _prf
       (send _prf :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; geometry_msgs/Pose _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;; geometry_msgs/Twist _twist
     (send _twist :deserialize buf ptr-) (incf ptr- (send _twist :serialization-length))
   ;; geometry_msgs/Vector3 _ba
     (send _ba :deserialize buf ptr-) (incf ptr- (send _ba :serialization-length))
   ;; geometry_msgs/Vector3 _bw
     (send _bw :deserialize buf ptr-) (incf ptr- (send _bw :serialization-length))
   ;; geometry_msgs/Vector3 _plf
     (send _plf :deserialize buf ptr-) (incf ptr- (send _plf :serialization-length))
   ;; geometry_msgs/Vector3 _prf
     (send _prf :deserialize buf ptr-) (incf ptr- (send _prf :serialization-length))
   ;;
   self)
  )

(setf (get cassie_common_toolbox::cassie_estimation_msg :md5sum-) "2af2fbfc27d752067e9575d7ec7cfd1f")
(setf (get cassie_common_toolbox::cassie_estimation_msg :datatype-) "cassie_common_toolbox/cassie_estimation_msg")
(setf (get cassie_common_toolbox::cassie_estimation_msg :definition-)
      "Header                header
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
")



(provide :cassie_common_toolbox/cassie_estimation_msg "2af2fbfc27d752067e9575d7ec7cfd1f")


