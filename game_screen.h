#pragma once

#include "entt/entity/registry.hpp"

#include "screen.h"

class GameScreen : public Screen {
  public:

    GameScreen();

    bool update(const Input&, Audio&, unsigned int) override;
    void draw(Graphics&) const override;
    Screen* next_screen() const override;

  private:

    entt::registry reg_;

    void update_sim(float dt);

};
