#include "game_screen.h"

#include "components.h"
#include "title_screen.h"

GameScreen::GameScreen() {
  // initialize game entities

  // load_resources();
  // create_map();
  // create_hud();
  // wave_controller();
  // tooltip();
  // ui_context();
  //

  {
    auto e = reg_.create();
    reg_.emplace<Player>(e);
    reg_.emplace<Bank>(e, 150.0f);
    reg_.emplace<Investor>(e, 0.003f);
  }


}

bool GameScreen::update(const Input& input, Audio& audio, unsigned int elapsed) {


  return true;
}

void GameScreen::draw(Graphics& graphics) const {
  // do nothing
}

Screen* GameScreen::next_screen() const {
  return new TitleScreen();
}
