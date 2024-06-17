#!/bin/bash

# rm -rf bin/
mkdir -p build
cd build
cmake ..
make --jobs=$(nproc --all)
cmake --install .

echo ''
echo -e "Compilation \033[32mfinished\033[0m at $(date '+%A day %d at %H:%M:%S')"
echo ''
