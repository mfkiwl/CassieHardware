;; Auto-generated. Do not edit!


(when (boundp 'cassie_common_toolbox::cassie_proprioception_msg)
  (if (not (find-package "CASSIE_COMMON_TOOLBOX"))
    (make-package "CASSIE_COMMON_TOOLBOX"))
  (shadow 'cassie_proprioception_msg (find-package "CASSIE_COMMON_TOOLBOX")))
(unless (find-package "CASSIE_COMMON_TOOLBOX::CASSIE_PROPRIOCEPTION_MSG")
  (make-package "CASSIE_COMMON_TOOLBOX::CASSIE_PROPRIOCEPTION_MSG"))

(in-package "ROS")
;;//! \htmlinclude cassie_proprioception_msg.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass cassie_common_toolbox::cassie_proprioception_msg
  :super ros::object
  :slots (_header _radio _motor_torque _encoder_position _encoder_velocity _orientation _angular_velocity _linear_velocity _linear_acceleration _q_achilles _dq_achilles _contact _isCalibrated ))

(defmethod cassie_common_toolbox::cassie_proprioception_msg
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:radio __radio) (make-array 16 :initial-element 0.0 :element-type :float))
    ((:motor_torque __motor_torque) (make-array 10 :initial-element 0.0 :element-type :float))
    ((:encoder_position __encoder_position) (make-array 14 :initial-element 0.0 :element-type :float))
    ((:encoder_velocity __encoder_velocity) (make-array 14 :initial-element 0.0 :element-type :float))
    ((:orientation __orientation) (instance geometry_msgs::Quaternion :init))
    ((:angular_velocity __angular_velocity) (instance geometry_msgs::Vector3 :init))
    ((:linear_velocity __linear_velocity) (instance geometry_msgs::Vector3 :init))
    ((:linear_acceleration __linear_acceleration) (instance geometry_msgs::Vector3 :init))
    ((:q_achilles __q_achilles) (make-array 2 :initial-element 0.0 :element-type :float))
    ((:dq_achilles __dq_achilles) (make-array 2 :initial-element 0.0 :element-type :float))
    ((:contact __contact) (make-array 2 :initial-element 0.0 :element-type :float))
    ((:isCalibrated __isCalibrated) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _radio __radio)
   (setq _motor_torque __motor_torque)
   (setq _encoder_position __encoder_position)
   (setq _encoder_velocity __encoder_velocity)
   (setq _orientation __orientation)
   (setq _angular_velocity __angular_velocity)
   (setq _linear_velocity __linear_velocity)
   (setq _linear_acceleration __linear_acceleration)
   (setq _q_achilles __q_achilles)
   (setq _dq_achilles __dq_achilles)
   (setq _contact __contact)
   (setq _isCalibrated __isCalibrated)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:radio
   (&optional __radio)
   (if __radio (setq _radio __radio)) _radio)
  (:motor_torque
   (&optional __motor_torque)
   (if __motor_torque (setq _motor_torque __motor_torque)) _motor_torque)
  (:encoder_position
   (&optional __encoder_position)
   (if __encoder_position (setq _encoder_position __encoder_position)) _encoder_position)
  (:encoder_velocity
   (&optional __encoder_velocity)
   (if __encoder_velocity (setq _encoder_velocity __encoder_velocity)) _encoder_velocity)
  (:orientation
   (&rest __orientation)
   (if (keywordp (car __orientation))
       (send* _orientation __orientation)
     (progn
       (if __orientation (setq _orientation (car __orientation)))
       _orientation)))
  (:angular_velocity
   (&rest __angular_velocity)
   (if (keywordp (car __angular_velocity))
       (send* _angular_velocity __angular_velocity)
     (progn
       (if __angular_velocity (setq _angular_velocity (car __angular_velocity)))
       _angular_velocity)))
  (:linear_velocity
   (&rest __linear_velocity)
   (if (keywordp (car __linear_velocity))
       (send* _linear_velocity __linear_velocity)
     (progn
       (if __linear_velocity (setq _linear_velocity (car __linear_velocity)))
       _linear_velocity)))
  (:linear_acceleration
   (&rest __linear_acceleration)
   (if (keywordp (car __linear_acceleration))
       (send* _linear_acceleration __linear_acceleration)
     (progn
       (if __linear_acceleration (setq _linear_acceleration (car __linear_acceleration)))
       _linear_acceleration)))
  (:q_achilles
   (&optional __q_achilles)
   (if __q_achilles (setq _q_achilles __q_achilles)) _q_achilles)
  (:dq_achilles
   (&optional __dq_achilles)
   (if __dq_achilles (setq _dq_achilles __dq_achilles)) _dq_achilles)
  (:contact
   (&optional __contact)
   (if __contact (setq _contact __contact)) _contact)
  (:isCalibrated
   (&optional __isCalibrated)
   (if __isCalibrated (setq _isCalibrated __isCalibrated)) _isCalibrated)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64[16] _radio
    (* 8    16)
    ;; float64[10] _motor_torque
    (* 8    10)
    ;; float64[14] _encoder_position
    (* 8    14)
    ;; float64[14] _encoder_velocity
    (* 8    14)
    ;; geometry_msgs/Quaternion _orientation
    (send _orientation :serialization-length)
    ;; geometry_msgs/Vector3 _angular_velocity
    (send _angular_velocity :serialization-length)
    ;; geometry_msgs/Vector3 _linear_velocity
    (send _linear_velocity :serialization-length)
    ;; geometry_msgs/Vector3 _linear_acceleration
    (send _linear_acceleration :serialization-length)
    ;; float64[2] _q_achilles
    (* 8    2)
    ;; float64[2] _dq_achilles
    (* 8    2)
    ;; float64[2] _contact
    (* 8    2)
    ;; bool _isCalibrated
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64[16] _radio
     (dotimes (i 16)
       (sys::poke (elt _radio i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[10] _motor_torque
     (dotimes (i 10)
       (sys::poke (elt _motor_torque i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[14] _encoder_position
     (dotimes (i 14)
       (sys::poke (elt _encoder_position i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[14] _encoder_velocity
     (dotimes (i 14)
       (sys::poke (elt _encoder_velocity i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; geometry_msgs/Quaternion _orientation
       (send _orientation :serialize s)
     ;; geometry_msgs/Vector3 _angular_velocity
       (send _angular_velocity :serialize s)
     ;; geometry_msgs/Vector3 _linear_velocity
       (send _linear_velocity :serialize s)
     ;; geometry_msgs/Vector3 _linear_acceleration
       (send _linear_acceleration :serialize s)
     ;; float64[2] _q_achilles
     (dotimes (i 2)
       (sys::poke (elt _q_achilles i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[2] _dq_achilles
     (dotimes (i 2)
       (sys::poke (elt _dq_achilles i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[2] _contact
     (dotimes (i 2)
       (sys::poke (elt _contact i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; bool _isCalibrated
       (if _isCalibrated (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64[16] _radio
   (dotimes (i (length _radio))
     (setf (elt _radio i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[10] _motor_torque
   (dotimes (i (length _motor_torque))
     (setf (elt _motor_torque i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[14] _encoder_position
   (dotimes (i (length _encoder_position))
     (setf (elt _encoder_position i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[14] _encoder_velocity
   (dotimes (i (length _encoder_velocity))
     (setf (elt _encoder_velocity i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; geometry_msgs/Quaternion _orientation
     (send _orientation :deserialize buf ptr-) (incf ptr- (send _orientation :serialization-length))
   ;; geometry_msgs/Vector3 _angular_velocity
     (send _angular_velocity :deserialize buf ptr-) (incf ptr- (send _angular_velocity :serialization-length))
   ;; geometry_msgs/Vector3 _linear_velocity
     (send _linear_velocity :deserialize buf ptr-) (incf ptr- (send _linear_velocity :serialization-length))
   ;; geometry_msgs/Vector3 _linear_acceleration
     (send _linear_acceleration :deserialize buf ptr-) (incf ptr- (send _linear_acceleration :serialization-length))
   ;; float64[2] _q_achilles
   (dotimes (i (length _q_achilles))
     (setf (elt _q_achilles i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[2] _dq_achilles
   (dotimes (i (length _dq_achilles))
     (setf (elt _dq_achilles i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[2] _contact
   (dotimes (i (length _contact))
     (setf (elt _contact i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; bool _isCalibrated
     (setq _isCalibrated (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get cassie_common_toolbox::cassie_proprioception_msg :md5sum-) "3be1623c7974da649675ad63828eb904")
(setf (get cassie_common_toolbox::cassie_proprioception_msg :datatype-) "cassie_common_toolbox/cassie_proprioception_msg")
(setf (get cassie_common_toolbox::cassie_proprioception_msg :definition-)
      "Header                   header
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
")



(provide :cassie_common_toolbox/cassie_proprioception_msg "3be1623c7974da649675ad63828eb904")


