#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Triangulo con Raylib");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTriangle(
            (Vector2){400, 150},
            (Vector2){250, 450},
            (Vector2){550, 450},
            BLUE
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}