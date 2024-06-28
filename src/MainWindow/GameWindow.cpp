#include "GameWindow.h"

#include <raylib.h>

#include <stdexcept>


GameWindow::GameWindow(int width, int height) : _width(width), _height(height) {
  // empty
}

GameWindow::~GameWindow() {
  CloseWindow();
}

void GameWindow::init(const MyString windowTitle, const std::function<void ()> func) {
    InitWindow(_width, _height, windowTitle.get_str());

    if (!IsWindowReady()) {
        throw std::runtime_error("Window initialization failed.");
    }

    while (!WindowShouldClose()) {
      func();
    }
}

std::pair<int, int> GameWindow::getDims() {
  return std::make_pair(_width, _height);
}