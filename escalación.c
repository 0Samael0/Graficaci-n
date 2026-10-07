#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Escalacion de un cuadrado");

    SetTargetFPS(60);

    float tamaño = 150;

    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_UP))
            tamaño += 2;

        if (IsKeyDown(KEY_DOWN))
            tamaño -= 2;

        if (tamaño < 20)
            tamaño = 20;

        if (tamaño > 400)
            tamaño = 400;

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(400 - tamaño / 2, 300 - tamaño / 2, tamaño, tamaño, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}