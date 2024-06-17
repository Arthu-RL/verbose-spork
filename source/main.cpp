#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

#ifdef unix
    #include <pthread.h>
#endif

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

    SetWindowTitle("TaskerApp");
   
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(DARKGRAY);
            DrawText("Congrats! You created your first window!", width*0.5 - MeasureText("Congrats! You created your first window!", 20)/2, height*0.5, 20, WHITE);
             DrawText(("FPS: " + std::to_string(GetFPS())).c_str(), width*0.01, height*0.01, 20, WHITE);
        EndDrawing();

        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    CloseWindow();
    
    p->debug("Successfuly closed!");
    p->print_in_color("bye", consoleColors.green);

    delete p;

    return 0;
}

// Windows test
// g++ -Wall -Wextra -c -o ./obj/MyString.o ./printcpp/MyString/MyString.cpp
// g++ -g -Wall -Wextra -o ./bin/main ./source/main.cpp ./obj/MyString.o -I./printcpp -I./raylib/src -L./raylib/src -lraylib -lopengl32 -lgdi32 -lwinmm