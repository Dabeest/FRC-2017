
#include "JustShootRoutine.h"

JustShootRoutine::JustShootRoutine(RobotModel* shooter) {
  kShooter = shooter;
}

void JustShootRoutine::Prestart() {
  // TODO Auto-generated constructor stub

}

void JustShootRoutine::Routine() {
  Shoot(kShooter, 5.0, .8);
}