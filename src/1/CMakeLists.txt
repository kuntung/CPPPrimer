set(base_SRCS
Sales_item.h
)

add_library(cpp_base ${base_SRCS})

install(TARGETS cpp_base DESTINATION lib)
file(GLOB HEADERS "*.h")
install(FILES ${HEADERS} DESTINATION include/src/1)

#if(NOT CMAKE_BUILD_NO_EXAMPLES)
#    add_subdirectory(tests)
#endif()
