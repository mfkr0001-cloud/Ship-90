# Ship 90 — Geode mod project

Target: Geometry Dash Android 2.2081  
Mod ID: `ship90.physics`  
Version: `1.0.0`

## Current status

This is a source-project scaffold, **not a compiled `.geode` install package**.
It registers the mod metadata and loads a small startup log. It does not yet change
ship physics, because the exact Android 2.2081 PlayerObject movement bindings must
be verified against the installed Geode SDK before modifying gameplay safely.

## Build requirements

- Geode SDK / CLI compatible with the Geode version declared in `mod.json`
- Android NDK and CMake toolchain configured for Geode
- Geometry Dash Android 2.2081 bindings supplied by that SDK

From a configured Geode project environment, use the build command documented by
the installed Geode CLI, commonly `geode build`.

## Planned next step

Validate the Android 2.2081 ship movement hook, then expose independent, tested
gravity and thrust controls. Values of `1.0` should preserve the original game
physics; any tuning should be measured in-game at 60 FPS against 90 FPS behavior.
