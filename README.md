RAYLIB UI STUDY

#### Install

(w64devkit)[https://github.com/skeeto/w64devkit]

(vcpkg)[https://github.com/microsoft/vcpkg]

(raylib)[https://github.com/raysan5/raylib]

(leiflib)[https://github.com/cococry/leif]

```sh
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat --disableMetrics
vcpkg integrate install
vcpkg install raylib
```

### Windows test

```sh
g++ -Wall -Wextra -c -o ./obj/MyString.o ./submodules/printcpp/MyString/MyString.cpp
g++ -g -Wall -Wextra -o ./bin/main ./src/main.cpp ./obj/MyString.o -I./submodules/printcpp -I./raylib/src -L./raylib/src -lraylib -lopengl32 -lgdi32 -lwinmm
```