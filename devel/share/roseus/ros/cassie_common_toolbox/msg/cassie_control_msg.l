;; Auto-generated. Do not edit!


(when (boundp 'cassie_common_toolbox::cassie_control_msg)
  (if (not (find-package "CASSIE_COMMON_TOOLBOX"))
    (make-package "CASSIE_COMMON_TOOLBOX"))
  (shadow 'cassie_control_msg (find-package "CASSIE_COMMON_TOOLBOX")))
(unless (find-package "CASSIE_COMMON_TOOLBOX::CASSIE_CONTROL_MSG")
  (make-package "CASSIE_COMMON_TOOLBOX::CASSIE_CONTROL_MSG"))

(in-package "ROS")
;;//! \htmlinclude cassie_control_msg.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass cassie_common_toolbox::cassie_control_msg
  :super ros::object
  :slots (_header _motor_torque _ya _dya _yd _dyd ))

(defmethod cassie_common_toolbox::cassie_control_msg
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:motor_torque __motor_torque) (make-array 10 :initial-element 0.0 :element-type :float))
    ((:ya __ya) (make-array 10 :initial-element 0.0 :element-type :float))
    ((:dya __dya) (make-array 10 :initial-element 0.0 :element-type :float))
    ((:yd __yd) (make-array 10 :initial-element 0.0 :element-type :float))
    ((:dyd __dyd) (make-array 10 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _header __header)
   (setq _motor_torque __motor_torque)
   (setq _ya __ya)
   (setq _dya __dya)
   (setq _yd __yd)
   (setq _dyd __dyd)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:motor_torque
   (&optional __motor_torque)
   (if __motor_torque (setq _motor_torque __motor_torque)) _motor_torque)
  (:ya
   (&optional __ya)
   (if __ya (setq _ya __ya)) _ya)
  (:dya
   (&optional __dya)
   (if __dya (setq _dya __dya)) _dya)
  (:yd
   (&optional __yd)
   (if __yd (setq _yd __yd)) _yd)
  (:dyd
   (&optional __dyd)
   (if __dyd (setq _dyd __dyd)) _dyd)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64[10] _motor_torque
    (* 8    10)
    ;; float64[10] _ya
    (* 8    10)
    ;; float64[10] _dya
    (* 8    10)
    ;; float64[10] _yd
    (* 8    10)
    ;; float64[10] _dyd
    (* 8    10)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64[10] _motor_torque
     (dotimes (i 10)
       (sys::poke (elt _motor_torque i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[10] _ya
     (dotimes (i 10)
       (sys::poke (elt _ya i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[10] _dya
     (dotimes (i 10)
       (sys::poke (elt _dya i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[10] _yd
     (dotimes (i 10)
       (sys::poke (elt _yd i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[10] _dyd
     (dotimes (i 10)
       (sys::poke (elt _dyd i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64[10] _motor_torque
   (dotimes (i (length _motor_torque))
     (setf (elt _motor_torque i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[10] _ya
   (dotimes (i (length _ya))
     (setf (elt _ya i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[10] _dya
   (dotimes (i (length _dya))
     (setf (elt _dya i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[10] _yd
   (dotimes (i (length _yd))
     (setf (elt _yd i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[10] _dyd
   (dotimes (i (length _dyd))
     (setf (elt _dyd i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;;
   self)
  )

(setf (get cassie_common_toolbox::cassie_control_msg :md5sum-) "ab803f134e745ccc231d6d4c855e2890")
(setf (get cassie_common_toolbox::cassie_control_msg :datatype-) "cassie_common_toolbox/cassie_control_msg")
(setf (get cassie_common_toolbox::cassie_control_msg :definition-)
      "Header    header
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

")



(provide :cassie_common_toolbox/cassie_control_msg "ab803f134e745ccc231d6d4c855e2890")


