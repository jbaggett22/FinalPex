cmake_minimum_required(VERSION 3.12)
project(FinalPex C)

set(SOURCE_FILES
        ${SDIR}main.c
        ${SDIR}FinalPex.h
        ${SDIR}listAsLinkedList.c
        ${SDIR}listAsLinkedList.h)

add_executable(FinalPex ${SOURCE_FILES})
