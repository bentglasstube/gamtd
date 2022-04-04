package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "gamtd",
    data = ["//content"],
    linkopts = [
        "-static-libstdc++",
        "-static-libgcc",
    ],
    srcs = ["main.cc"],
    deps = [
        "@gam//:game",
        ":config",
        ":screens",
    ],
)

cc_library(
    name = "components",
    hdrs = ["components.h"],
    deps = [
        "@entt//:entt",
        ":types",
    ],
)

cc_library(
    name = "config",
    srcs = ["config.cc"],
    hdrs = ["config.h"],
    deps = [
        "@gam//:game",
        ":types",
    ],
)

cc_library(
    name = "screens",
    srcs = [
        "game_screen.cc",
        "title_screen.cc",
    ],
    hdrs = [
        "game_screen.h",
        "title_screen.h",
    ],
    deps = [
        "@gam//:screen",
        "@entt//:entt",
        ":components",
    ],
)

cc_library(
    name = "types",
    hdrs = ["types.h"],
)
