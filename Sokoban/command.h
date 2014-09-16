#ifndef COMMAND_H
#define COMMAND_H

#include "macros.h"

#include "game_pole.h"

namespace sokoban {

class Command {
public:
  Command();
  virtual ~Command() {}
  
  virtual bool Execute() = 0;
  virtual bool UnExecute() = 0;

  static bool SetGamePole(GamePole* game_pole);
protected:
  CellType GetCell(size_t x, size_t y) const { return (*game_pole_)[x][y]; }
  void SetCell(size_t x, size_t y, CellType data) { (*game_pole_)[x][y] = data; }

  int x_;
  int y_;

  bool with_box_;
private:
  static GamePole* game_pole_;

  DISALLOW_ASSIGN(Command);
};

}   // namespace sokoban

#endif    //  COMMAND_H