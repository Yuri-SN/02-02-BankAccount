cmake_minimum_required(VERSION 3.16)

project(02-02-BankAccount LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(02-02-BankAccount main.cpp)

include(GNUInstallDirs)
install(TARGETS 02-02-BankAccount
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
