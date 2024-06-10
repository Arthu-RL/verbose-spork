#include <iostream>
#include <raylib.h>

#include "..\printcpp\MyString\MyString.h"
#include "..\printcpp\Print.h"

static int width = 1280, height = 720;

int main() {
    InitWindow(width, height, "Tasker");

    if (!IsWindowReady()) {
        // log
        return 1;
    }
        
    while (!WindowShouldClose()) {

    }

    CloseWindow();
    
    return 0;
}

// Windows test
// g++ -g -Wall -Wextra -o .\bin\main .\source\main.cpp -I.\libs\raylib\include -L.\libs\raylib\lib -lraylib -lopengl32 -lgdi32 -lwinmm