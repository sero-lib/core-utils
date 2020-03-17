#!/bin/sh

export CCACHE_DIR=/opt/.ccache
export CC=/lib/ccache/bin/clang
export CXX=/lib/ccache/bin/clang++

cd /opt/repo || exit 1

mkdir build && cd build || exit 1
cmake .. \
    -DCMAKE_CXX_COMPILER=/bin/clang++ \
    -DCMAKE_CC_COMPILER=/bin/clang \
    -GNinja
cmake --build .

./sero_core_utils_tests