#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Cuadrado con Raylib");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(300, 200, 200, 200, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}