message("Hello World !!")  ##comment

set(PLATFORM "WINDOWS")

set(HELLO_MESSAGE_WINDOWS "Hello, the platform is Windows")
set(HELLO_MESSAGE_UNIX "Hello , the platform is unix-base")

message("HELLO_MESSAGE_${PLATFORM} = ${HELLO_MESSAGE_${PLATFORM}}")
