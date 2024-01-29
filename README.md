
# Setup
Please add the following files in the same directory as main.c:
- glut.h
- glut32.dll
- libglut32.a

from this OpenGL library:
https://chortle.ccsu.edu/Bloodshed/glutming.zip

to compile:
gcc main.c -L. -lglu32 -lglut32 -lopengl32

