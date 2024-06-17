#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <utility>

class MainWindow {
public:
  MainWindow();
  ~MainWindow();

  void init();
  std::pair<int, int> getDims();
private:
  int _width = 0;
  int _height = 0;
};

#endif // MAINWINDOW_H