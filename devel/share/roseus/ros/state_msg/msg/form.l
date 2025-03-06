;; Auto-generated. Do not edit!


(when (boundp 'state_msg::form)
  (if (not (find-package "STATE_MSG"))
    (make-package "STATE_MSG"))
  (shadow 'form (find-package "STATE_MSG")))
(unless (find-package "STATE_MSG::FORM")
  (make-package "STATE_MSG::FORM"))

(in-package "ROS")
;;//! \htmlinclude form.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ONE_COLUMN*" (find-package "STATE_MSG::FORM"))
(shadow '*ONE_COLUMN* (find-package "STATE_MSG::FORM"))
(defconstant state_msg::form::*ONE_COLUMN* 0)
(intern "*TRIANGLE*" (find-package "STATE_MSG::FORM"))
(shadow '*TRIANGLE* (find-package "STATE_MSG::FORM"))
(defconstant state_msg::form::*TRIANGLE* 1)
(intern "*SQUARE*" (find-package "STATE_MSG::FORM"))
(shadow '*SQUARE* (find-package "STATE_MSG::FORM"))
(defconstant state_msg::form::*SQUARE* 2)
(defclass state_msg::form
  :super ros::object
  :slots (_header _swarm_shape _swarm_size ))

(defmethod state_msg::form
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:swarm_shape __swarm_shape) 0)
    ((:swarm_size __swarm_size) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _swarm_shape (round __swarm_shape))
   (setq _swarm_size (float __swarm_size))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:swarm_shape
   (&optional __swarm_shape)
   (if __swarm_shape (setq _swarm_shape __swarm_shape)) _swarm_shape)
  (:swarm_size
   (&optional __swarm_size)
   (if __swarm_size (setq _swarm_size __swarm_size)) _swarm_size)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _swarm_shape
    1
    ;; float32 _swarm_size
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _swarm_shape
       (write-byte _swarm_shape s)
     ;; float32 _swarm_size
       (sys::poke _swarm_size (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _swarm_shape
     (setq _swarm_shape (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _swarm_size
     (setq _swarm_size (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get state_msg::form :md5sum-) "8e27eb7bb8b1540aaf910be84d457203")
(setf (get state_msg::form :datatype-) "state_msg/form")
(setf (get state_msg::form :definition-)
      "std_msgs/Header header
## 控制参考量 
uint8 swarm_shape

uint8 One_column=0
uint8 Triangle=1
uint8 Square=2
float32 swarm_size
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



(provide :state_msg/form "8e27eb7bb8b1540aaf910be84d457203")


