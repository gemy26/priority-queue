cmake_minimum_required(VERSION 3.23)
project(priority_queue C)

set(CMAKE_C_STANDARD 11)

add_executable(priority_queue main.c priority-queue.h priority-queue.c test.h)
