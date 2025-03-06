; Auto-generated. Do not edit!


(cl:in-package state_msg-msg)


;//! \htmlinclude form.msg.html

(cl:defclass <form> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (swarm_shape
    :reader swarm_shape
    :initarg :swarm_shape
    :type cl:fixnum
    :initform 0)
   (swarm_size
    :reader swarm_size
    :initarg :swarm_size
    :type cl:float
    :initform 0.0))
)

(cl:defclass form (<form>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <form>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'form)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name state_msg-msg:<form> is deprecated: use state_msg-msg:form instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <form>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader state_msg-msg:header-val is deprecated.  Use state_msg-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'swarm_shape-val :lambda-list '(m))
(cl:defmethod swarm_shape-val ((m <form>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader state_msg-msg:swarm_shape-val is deprecated.  Use state_msg-msg:swarm_shape instead.")
  (swarm_shape m))

(cl:ensure-generic-function 'swarm_size-val :lambda-list '(m))
(cl:defmethod swarm_size-val ((m <form>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader state_msg-msg:swarm_size-val is deprecated.  Use state_msg-msg:swarm_size instead.")
  (swarm_size m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<form>)))
    "Constants for message type '<form>"
  '((:ONE_COLUMN . 0)
    (:TRIANGLE . 1)
    (:SQUARE . 2))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'form)))
    "Constants for message type 'form"
  '((:ONE_COLUMN . 0)
    (:TRIANGLE . 1)
    (:SQUARE . 2))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <form>) ostream)
  "Serializes a message object of type '<form>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'swarm_shape)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'swarm_size))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <form>) istream)
  "Deserializes a message object of type '<form>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'swarm_shape)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'swarm_size) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<form>)))
  "Returns string type for a message object of type '<form>"
  "state_msg/form")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'form)))
  "Returns string type for a message object of type 'form"
  "state_msg/form")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<form>)))
  "Returns md5sum for a message object of type '<form>"
  "8e27eb7bb8b1540aaf910be84d457203")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'form)))
  "Returns md5sum for a message object of type 'form"
  "8e27eb7bb8b1540aaf910be84d457203")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<form>)))
  "Returns full string definition for message of type '<form>"
  (cl:format cl:nil "std_msgs/Header header~%## 控制参考量 ~%uint8 swarm_shape~%~%uint8 One_column=0~%uint8 Triangle=1~%uint8 Square=2~%float32 swarm_size~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'form)))
  "Returns full string definition for message of type 'form"
  (cl:format cl:nil "std_msgs/Header header~%## 控制参考量 ~%uint8 swarm_shape~%~%uint8 One_column=0~%uint8 Triangle=1~%uint8 Square=2~%float32 swarm_size~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <form>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <form>))
  "Converts a ROS message object to a list"
  (cl:list 'form
    (cl:cons ':header (header msg))
    (cl:cons ':swarm_shape (swarm_shape msg))
    (cl:cons ':swarm_size (swarm_size msg))
))
