#! /bin/fish

cmake -S . -B ./build/ -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
