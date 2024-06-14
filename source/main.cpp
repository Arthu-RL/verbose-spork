#include <iostream>
#include <raylib.h>

#include "MyString/MyString.h"
#include "Print.h"

static Print *p;

static int width = 1280, height = 720;

int main() {
    InitWindow(width, height, "Tasker");

    if (!IsWindowReady()) {
        p->error("Window Chashed!");
        return 1;
    }
   
    while (!WindowShouldClose()) {
        ClearBackground(DARKGRAY);
        
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
    

    p->debug("Successfuly closed!\n");
    p->print_in_color("bye", consoleColors.green);

    delete p;

    return 0;
}

// Windows test
// g++ -Wall -Wextra -c -o ./obj/MyString.o ./printcpp/MyString/MyString.cpp
// g++ -g -Wall -Wextra -o ./bin/main ./source/main.cpp ./obj/MyString.o -I./printcpp -I./raylib/src -L./raylib/src -lraylib -lopengl32 -lgdi32 -lwinmm