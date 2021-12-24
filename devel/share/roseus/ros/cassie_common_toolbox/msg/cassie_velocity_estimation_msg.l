;; Auto-generated. Do not edit!


(when (boundp 'cassie_common_toolbox::cassie_velocity_estimation_msg)
  (if (not (find-package "CASSIE_COMMON_TOOLBOX"))
    (make-package "CASSIE_COMMON_TOOLBOX"))
  (shadow 'cassie_velocity_estimation_msg (find-package "CASSIE_COMMON_TOOLBOX")))
(unless (find-package "CASSIE_COMMON_TOOLBOX::CASSIE_VELOCITY_ESTIMATION_MSG")
  (make-package "CASSIE_COMMON_TOOLBOX::CASSIE_VELOCITY_ESTIMATION_MSG"))

(in-package "ROS")
;;//! \htmlinclude cassie_velocity_estimation_msg.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass cassie_common_toolbox::cassie_velocity_estimation_msg
  :super ros::object
  :slots (_header _linear_velocity ))

(defmethod cassie_common_toolbox::cassie_velocity_estimation_msg
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:linear_velocity __linear_velocity) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _linear_velocity __linear_velocity)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:linear_velocity
   (&rest __linear_velocity)
   (if (keywordp (car __linear_velocity))
       (send* _linear_velocity __linear_velocity)
     (progn
       (if __linear_velocity (setq _linear_velocity (car __linear_velocity)))
       _linear_velocity)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; geometry_msgs/Vector3 _linear_velocity
    (send _linear_velocity :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; geometry_msgs/Vector3 _linear_velocity
       (send _linear_velocity :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; geometry_msgs/Vector3 _linear_velocity
     (send _linear_velocity :deserialize buf ptr-) (incf ptr- (send _linear_velocity :serialization-length))
   ;;
   self)
  )

(setf (get cassie_common_toolbox::cassie_velocity_estimation_msg :md5sum-) "76a38944cc7b4b7cc6e1dde51ece2158")
(setf (get cassie_common_toolbox::cassie_velocity_estimation_msg :datatype-) "cassie_common_toolbox/cassie_velocity_estimation_msg")
(setf (get cassie_common_toolbox::cassie_velocity_estimation_msg :definition-)
      "Header                header
geometry_msgs/Vector3 linear_velocity

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



(provide :cassie_common_toolbox/cassie_velocity_estimation_msg "76a38944cc7b4b7cc6e1dde51ece2158")


