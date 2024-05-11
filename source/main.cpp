#include <iostream>
#include <raylib.h>
#include "functions.cpp"

int main() 
{
    std::cout << "Hello CMAKE" << "\n";

    InitWindow(800, 600, "raylib [core] example - basic window");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawText("First window!", 300, 400, 3, DARKBLUE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}