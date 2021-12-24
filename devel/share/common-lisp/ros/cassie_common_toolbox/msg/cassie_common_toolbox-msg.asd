
(cl:in-package :asdf)

(defsystem "cassie_common_toolbox-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "cassie_control_msg" :depends-on ("_package_cassie_control_msg"))
    (:file "_package_cassie_control_msg" :depends-on ("_package"))
    (:file "cassie_estimation_msg" :depends-on ("_package_cassie_estimation_msg"))
    (:file "_package_cassie_estimation_msg" :depends-on ("_package"))
    (:file "cassie_proprioception_msg" :depends-on ("_package_cassie_proprioception_msg"))
    (:file "_package_cassie_proprioception_msg" :depends-on ("_package"))
    (:file "cassie_velocity_estimation_msg" :depends-on ("_package_cassie_velocity_estimation_msg"))
    (:file "_package_cassie_velocity_estimation_msg" :depends-on ("_package"))
  ))