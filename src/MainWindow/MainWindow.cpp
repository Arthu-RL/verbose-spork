#include <raylib.h>
#include <utility>

#include "MainWindow.h"
#include <stdexcept>


MainWindow::MainWindow(int width, int height) : _width(width), _height(height) {
  // empty
}

MainWindow::~MainWindow() {
  CloseWindow();
}

void MainWindow::init() {
    InitWindow(_width, _height, "Tasker");

    if (!IsWindowReady()) {
        throw std::runtime_error("Window initialization failed.");
    }

    SetWindowTitle("TaskerApp");
}

std::pair<int, int> MainWindow::getDims() {
  return std::make_pair(_width, _height);
}