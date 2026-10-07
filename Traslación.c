#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "Traslacion de un cuadrado");

    SetTargetFPS(60);

    Vector2 posicion = {300, 200};

    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_RIGHT))
            posicion.x += 3;

        if (IsKeyDown(KEY_LEFT))
            posicion.x -= 3;

        if (IsKeyDown(KEY_UP))
            posicion.y -= 3;

        if (IsKeyDown(KEY_DOWN))
            posicion.y += 3;

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangleV(posicion, (Vector2){150, 150}, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}