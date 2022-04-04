#include "config.h"

Config::Config() : Game::Config() {
  graphics.title = "Tower Defense";
  graphics.width = 800;
  graphics.height = 600;
  graphics.intscale = 3;
  graphics.fullscreen = false;
}
