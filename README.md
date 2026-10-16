# Media Player

A desktop video player written in C++ with Qt Widgets and Qt Multimedia.

## Features

Open a local video (`.mp4`, `.avi`, or `.mkv`), play and pause it, seek with the timeline, skip ten seconds forward or backward, reset playback, adjust volume, switch to full screen, and reopen the previous video path. Playback support for a particular format depends on the local Qt multimedia backend and codecs.

## Stack and structure

C++17, CMake, Qt Widgets, Qt Multimedia, and Qt MultimediaWidgets. `mainwindow.*` manages playback and UI events; `volume_control.*` implements the volume popup; `*.ui` stores Qt Designer forms; `Resources.qrc`, `Images/`, and `Styles/` hold resources; `main.cpp` starts the application.

## Build and run

Install CMake, a C++17 compiler, and a matching Qt development kit with Widgets, Multimedia, and MultimediaWidgets. In Qt Creator, open `CMakeLists.txt`, select an installed kit, build, and run. Alternatively:

```sh
cmake -S . -B build
cmake --build build
```

Run the `Media_player` executable from the selected build configuration. Qt must be able to locate its runtime plugins. No automated tests are included.

## Repository note

A local `build/` directory and `CMakeLists.txt.user` are currently tracked. The proposed `.gitignore` prevents adding fresh generated files; removing the tracked copies requires an explicit reviewed deletion. Existing history will still contain them.

## Future work

Add a small playback smoke test, improve error feedback for unsupported media, and package Qt runtime dependencies for distribution.
