# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "px4_uwb: 3 messages, 0 services")

set(MSG_I_FLAGS "-Ipx4_uwb:/home/amov/nooploop_ws/src/px4_uwb/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(px4_uwb_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg" NAME_WE)
add_custom_target(_px4_uwb_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "px4_uwb" "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg" "geometry_msgs/Point"
)

get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg" NAME_WE)
add_custom_target(_px4_uwb_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "px4_uwb" "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg" NAME_WE)
add_custom_target(_px4_uwb_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "px4_uwb" "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg" "px4_uwb/Bspline:geometry_msgs/Point"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/px4_uwb
)
_generate_msg_cpp(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg"
  "${MSG_I_FLAGS}"
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/px4_uwb
)
_generate_msg_cpp(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/px4_uwb
)

### Generating Services

### Generating Module File
_generate_module_cpp(px4_uwb
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/px4_uwb
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(px4_uwb_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(px4_uwb_generate_messages px4_uwb_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_cpp _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_cpp _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_cpp _px4_uwb_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(px4_uwb_gencpp)
add_dependencies(px4_uwb_gencpp px4_uwb_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS px4_uwb_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/px4_uwb
)
_generate_msg_eus(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg"
  "${MSG_I_FLAGS}"
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/px4_uwb
)
_generate_msg_eus(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/px4_uwb
)

### Generating Services

### Generating Module File
_generate_module_eus(px4_uwb
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/px4_uwb
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(px4_uwb_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(px4_uwb_generate_messages px4_uwb_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_eus _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_eus _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_eus _px4_uwb_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(px4_uwb_geneus)
add_dependencies(px4_uwb_geneus px4_uwb_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS px4_uwb_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/px4_uwb
)
_generate_msg_lisp(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg"
  "${MSG_I_FLAGS}"
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/px4_uwb
)
_generate_msg_lisp(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/px4_uwb
)

### Generating Services

### Generating Module File
_generate_module_lisp(px4_uwb
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/px4_uwb
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(px4_uwb_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(px4_uwb_generate_messages px4_uwb_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_lisp _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_lisp _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_lisp _px4_uwb_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(px4_uwb_genlisp)
add_dependencies(px4_uwb_genlisp px4_uwb_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS px4_uwb_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/px4_uwb
)
_generate_msg_nodejs(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg"
  "${MSG_I_FLAGS}"
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/px4_uwb
)
_generate_msg_nodejs(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/px4_uwb
)

### Generating Services

### Generating Module File
_generate_module_nodejs(px4_uwb
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/px4_uwb
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(px4_uwb_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(px4_uwb_generate_messages px4_uwb_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_nodejs _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_nodejs _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_nodejs _px4_uwb_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(px4_uwb_gennodejs)
add_dependencies(px4_uwb_gennodejs px4_uwb_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS px4_uwb_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/px4_uwb
)
_generate_msg_py(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg"
  "${MSG_I_FLAGS}"
  "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/px4_uwb
)
_generate_msg_py(px4_uwb
  "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/px4_uwb
)

### Generating Services

### Generating Module File
_generate_module_py(px4_uwb
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/px4_uwb
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(px4_uwb_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(px4_uwb_generate_messages px4_uwb_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/Bspline.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_py _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/DataDisp.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_py _px4_uwb_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/amov/nooploop_ws/src/px4_uwb/msg/MultiBsplines.msg" NAME_WE)
add_dependencies(px4_uwb_generate_messages_py _px4_uwb_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(px4_uwb_genpy)
add_dependencies(px4_uwb_genpy px4_uwb_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS px4_uwb_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/px4_uwb)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/px4_uwb
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(px4_uwb_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(px4_uwb_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/px4_uwb)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/px4_uwb
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(px4_uwb_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(px4_uwb_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/px4_uwb)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/px4_uwb
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(px4_uwb_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(px4_uwb_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/px4_uwb)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/px4_uwb
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(px4_uwb_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(px4_uwb_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/px4_uwb)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/px4_uwb\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/px4_uwb
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(px4_uwb_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(px4_uwb_generate_messages_py geometry_msgs_generate_messages_py)
endif()
