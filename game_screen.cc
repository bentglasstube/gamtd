#include "game_screen.h"

#include "title_screen.h"

GameScreen::GameScreen() {}

bool GameScreen::update(const Input& input, Audio& audio, unsigned int elapsed) {
  return true;
}

void GameScreen::draw(Graphics& graphics) const {
  // do nothing
}

Screen* GameScreen::next_screen() const {
  return new TitleScreen();
}
