// Auto-generated. Do not edit!

// (in-package state_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class form {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.swarm_shape = null;
      this.swarm_size = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('swarm_shape')) {
        this.swarm_shape = initObj.swarm_shape
      }
      else {
        this.swarm_shape = 0;
      }
      if (initObj.hasOwnProperty('swarm_size')) {
        this.swarm_size = initObj.swarm_size
      }
      else {
        this.swarm_size = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type form
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [swarm_shape]
    bufferOffset = _serializer.uint8(obj.swarm_shape, buffer, bufferOffset);
    // Serialize message field [swarm_size]
    bufferOffset = _serializer.float32(obj.swarm_size, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type form
    let len;
    let data = new form(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [swarm_shape]
    data.swarm_shape = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [swarm_size]
    data.swarm_size = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'state_msg/form';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8e27eb7bb8b1540aaf910be84d457203';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new form(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.swarm_shape !== undefined) {
      resolved.swarm_shape = msg.swarm_shape;
    }
    else {
      resolved.swarm_shape = 0
    }

    if (msg.swarm_size !== undefined) {
      resolved.swarm_size = msg.swarm_size;
    }
    else {
      resolved.swarm_size = 0.0
    }

    return resolved;
    }
};

// Constants for message
form.Constants = {
  ONE_COLUMN: 0,
  TRIANGLE: 1,
  SQUARE: 2,
}

module.exports = form;
