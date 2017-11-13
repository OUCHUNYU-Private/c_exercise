cmake_minimum_required(VERSION 3.8)
project(project_1)

set(CMAKE_C_STANDARD 99)

set(
        SOURCE_FILES
        main.c
        basic_exercises/exercise_1.c basic_exercises/exercise_1.h
        basic_exercises/exercise_2.c basic_exercises/exercise_2.h
        exercise_helpers/exercise_helper.c exercise_helpers/exercise_helper.h
)

add_executable(project_1 ${SOURCE_FILES})