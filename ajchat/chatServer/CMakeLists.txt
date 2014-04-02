project(chatserver)

add_executable(chatserver main.cpp)

install(TARGETS chatserver RUNTIME DESTINATION bin)
