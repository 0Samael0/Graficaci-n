#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Circulo con raylib");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawCircle(400, 300, 100, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}