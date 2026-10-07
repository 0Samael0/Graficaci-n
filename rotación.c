#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Rotacion de un cuadrado");

    SetTargetFPS(60);

    float rotacion = 0;

    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_RIGHT))
            rotacion += 2;

        if (IsKeyDown(KEY_LEFT))
            rotacion -= 2;

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectanglePro(
            (Rectangle){325, 225, 150, 150},
            (Vector2){75, 75},
            rotacion,
            BLUE
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}