#!/bin/sh

# rm -rf build
bash build_vx.sh

mkdir -p ../build

cd ../build

cmake ..
make

mkdir -p ../dist
find ../ -mindepth 1 -maxdepth 1 ! -name 'lib' ! -name 'dist' -exec cp -r {} ../dist/ \;

rm -rf ../dist/build/CMakeFiles
rm -rf ../dist/scripts
rm -rf ../dist/.git
rm -rf ../dist/.vscode
rm ../dist/build/cmake_install.cmake
rm ../dist/build/CMakeCache.txt
rm ../dist/build/dist.tar.gz
rm ../dist/build/Makefile
rm ../dist/.gitmodules
rm ../dist/CMakeLists.txt

tar -czf ../build/dist.tar.gz -C ../ dist
