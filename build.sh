#!/bin/bash

# rm -rf bin/
mkdir -p bin
cd bin
cmake ..
make
cmake --install .

echo ''
echo -e "Compilation \033[32mfinished\033[0m at $(date '+%A day %d at %H:%M:%S')"
echo ''
