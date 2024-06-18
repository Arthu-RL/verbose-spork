#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#pragma once

#include <utility>

class MainWindow {
public:
  MainWindow(int width, int height);
  ~MainWindow();

  void init(const MyString windowTitle);
  std::pair<int, int> getDims();
private:
  int _width = 0;
  int _height = 0;
};

#endif // MAINWINDOW_H