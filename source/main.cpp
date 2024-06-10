#include <iostream>
#include <raylib.h>

#include "MyString/MyString.h"
#include "Print.h"

static Print *p;

static int width = 1280, height = 720;

int main() {
    InitWindow(width, height, "Tasker");

    if (!IsWindowReady()) {
        p->ok("Window opened!");
        return 1;
    }
        
    while (!WindowShouldClose()) {
        ClearBackground(DARKGRAY);
        
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
    
    delete p;

    return 0;
}

// Windows test
// g++ -g -Wall -Wextra -o .\bin\main .\source\main.cpp -I.\libs\raylib\include -I../printcpp -L.\libs\raylib\lib -lraylib -lopengl32 -lgdi32 -lwinmm