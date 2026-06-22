# RSR3D Software Renderer
## Overview
A relatively complex software renderer I wrote in C++ relying on no external dependencies besides OpenMP.
## Features
This engine features
- Textures
- Per-Pixel Lighting [Spotlights, Directional Lights, Point Lights]
- Shadow Mapping
- OBJ File Support
- FXAA Anti Aliasing
- Basic Model Transformation Functions
- Triangle Clipping
## Optimizations
I was able to optimize this engine with Multithreaded Tiled Rendering, using OpenMP for the multithreading.
## Screenshots
![Utah Teapot](https://i.imgur.com/zQ2a7PU.png)
![House](https://i.imgur.com/vJKCq0t.png)
## Building
You can build it by downloading the source files and compiling it or you can download the already compiled builds in the builds folder that comes with a test scene.
## FAQs
**Why did I do this?**  
- I did this to understand how a computer is able to run 3D graphics.  

**What am I going to do with this?**  
- I plan on using this in a simple game engine I made to capture the feel of early software rendered games while having some newer features of modern games.
