#pragma once

#include <string>

class Board {
  int x, y, bombs;
  int sizeX, sizeY;
  std::string keyGuide[5];
  char **tabHidden;
  char **tabVisible;
  void fieldReveal(int, int);
  void findNoEmptyDown();
  void findNoEmptyLeft();
  void findNoEmptyRight();
  void findNoEmptyUp();
  void bombMarker();

public:
  Board(int x_ = 4, int y_ = 6, int bombs_ = 5, int size_x = 10,
        int size_y = 10);
  ~Board();
  void fillHashsZeros();
  void showTabVisible();
  void showTabHidden();
  void createBombs();
  void keyPressed(char &);
  bool bombsCheck(char &);
  int getBombs() const;
  void showEndingBoard(bool);
};
