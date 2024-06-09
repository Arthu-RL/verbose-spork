#include <iostream>
#include <raylib.h>

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