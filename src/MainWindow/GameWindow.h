#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#pragma once

#include "MyString.h"
#include "../utils/LastWish.h"

#include <utility>
#include <functional>

class GameWindow {
public:
  GameWindow(int width, int height);
  ~GameWindow();

  void init(const MyString windowTitle, const std::function<void ()> func);
  std::pair<int, int> getDims();
private:
  int _width = 0;
  int _height = 0;
};

#endif // GAMEWINDOW_H