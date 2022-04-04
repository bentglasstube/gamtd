#pragma once

#include "game.h"

#include "types.h"

struct Config : public Game::Config {
  Config();

  static constexpr float kZoom = 32.0f;
  static constexpr float kWaveStart = -0.1f;

  static constexpr Color kTowerLevel1 = { 0.15f, 1.00f, 0.15f, 1.0f };
  static constexpr Color kTowerLevel2 = { 1.00f, 1.00f, 0.00f, 1.0f };
  static constexpr Color kTowerLevel3 = { 1.00f, 0.35f, 0.35f, 1.0f };
  static constexpr float kTowerSize = 0.4f;

  static constexpr int kGunTowerLevel1Price = 100;
  static constexpr int kGunTowerLevel2Price = 200;
  static constexpr int kGunTowerLevel3Price = 400;

  static constexpr int kSlowTowerLevel1Price = 150;
  static constexpr int kSlowTowerLevel2Price = 300;
  static constexpr int kSlowTowerLevel3Price = 600;

  static constexpr int kRocketTowerLevel1Price = 200;
  static constexpr int kRocketTowerLevel2Price = 400;
  static constexpr int kRocketTowerLevel3Price = 800;

  static constexpr int kCannonTowerLevel1Price = 250;
  static constexpr int kCannonTowerLevel2Price = 500;
  static constexpr int kCannonTowerLevel3Price = 1000;
};

static const Config kConfig;
