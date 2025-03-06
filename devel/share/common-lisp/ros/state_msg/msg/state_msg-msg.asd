
(cl:in-package :asdf)

(defsystem "state_msg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "form" :depends-on ("_package_form"))
    (:file "_package_form" :depends-on ("_package"))
  ))