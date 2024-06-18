#include <raylib.h>
#include <utility>
#include "MyString.h"

#include "MainWindow.h"
#include <stdexcept>


MainWindow::MainWindow(int width, int height) : _width(width), _height(height) {
  // empty
}

MainWindow::~MainWindow() {
  CloseWindow();
}

void MainWindow::init(const MyString windowTitle) {
    InitWindow(_width, _height, windowTitle.get_str());

    if (!IsWindowReady()) {
        throw std::runtime_error("Window initialization failed.");
    }
}

std::pair<int, int> MainWindow::getDims() {
  return std::make_pair(_width, _height);
}