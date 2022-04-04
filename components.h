#pragma once

#include <string>
#include <vector>

#include "entt/entity/registry.hpp"

#include "types.h"

// Function signatures

typedef void(*ClickFunc)(entt::registry&, entt::entity);
typedef void(*PlaceFunc)(entt::registry&, const Position&);
typedef void(*PositionAnimCallbackFunc)(entt::registry&, entt::entity);
// typedef void(*DrawShapeFunc)(VertexPC*, const Position&, float, float, const Color&);
typedef void(*ShootFunc)(entt::registry&, entt::entity, entt::entity);
typedef void(*UpgradeFunc)(entt::registry&, entt::entity);
typedef void(*CreateCritterFunc)(entt::registry&, const Position&);

struct Player {};
struct Tooltip {};

// Gameplay

struct Bank { float amount; };
struct BaseSpeed { float speed; };
struct CashThresholdButtonToggler { float threshold; };
struct Cooldown { float delay; };
struct Critter {};
struct Damage { float damage; };
struct Dead {};
struct DeathTimer { float delay; };
struct EndWaveChecker {};
struct EndWaveDlay { float delay; };
struct FindTarget {};
struct Health { float amount, max; };
struct Investor { float interest; };
struct Name { std::string name; };
struct Physics { float x, y, z, vx, vy, vz; };
struct Placer { PlaceFunc place; };
struct Spawner { float wave_time; };
struct Speed { float speed; };
struct SpeedNerf { float delay, mult; };
struct Target { bool ground, air; };
struct Targeter { bool ground, air; float range, cooldown; ShootFunc shoot; };
struct Targetscore { float score; };
struct Traveler { std::vector<Position> waypoints; size_t next; };
struct Upgradable { float cost; UpgradeFunc upgrade; };
struct Wave { int count; const std::vector<float> times; const std::vector<CreateCritterFunc> factories; };
struct WavesController { std::vector<Wave> waves; size_t current; };

// Resources

struct Sound {};
struct SoundInstance {};

struct Resources {
  // GLuint program_pc;   // shader - position, color
  // GLuint program_ptc;  // shader - position, texcoord, color
  // GLuint font_tex;
  // GLuint vertex_buf;
  // VertexPC* pc_verticies;
  // VertexPTC* ptc_vertices;
  Sound gun_shot;
  Sound slow_shot;
  Sound cannon_shot;
  Sound pop;
  Sound explosion;
};


// UI

struct Hoverable { Color normal, hover; };

struct Clickable {
  Color pressed;
  ClickFunc click;
};

struct Button {
  Color disabled;
  ClickFunc click;
};

struct Hud {
  entt::entity current_wave_label;
  entt::entity cash_label;
};

struct UIContext {
  entt::entity hover, down;
};

// Input handling

enum class InputState { Up, JustDown, Down, JustUp };
struct Inputs {
  Position mouse, world_mouse;
  InputState left, right, upgrade;
  bool left_button, right_button, upgrade_key;
};

// Animations

struct ColorAnim { float anim, duration; Color from, to; };
struct LineAnim { float anim, duration; Position from1, from2, to1, to2; };
struct PositionAnim { float anim, duration; Position from, to; };
struct SizePulseAnim { float anim, speed, from, to; };

struct PositionAnimCallback { PositionAnimCallbackFunc callback; };

// Renderers

struct LineRenderer { Position target; };
struct PointRenderer {};
// struct ShapeRenderer { DrawShapeFunc draw; };
// struct StaticLinesRenderer { GLuint vertex_buffer, GLsizei count; };
struct TextRenderer { std::string text; Color background; float alignment; };

