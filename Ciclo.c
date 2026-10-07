#include "raylib.h"

int main(void) {
    // 1. INICIALIZACIÓN
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Ciclo de Vida - raylib");
    SetTargetFPS(60);

    Texture2D miTextura = LoadTexture("resources/logo.png"); // Carga recurso
    Vector2 posicion = { 400, 225 };

    // 2. EL BUCLE GRÁFICO (Se ejecuta frame a frame)
    while (!WindowShouldClose()) {
        
        // A. Input / Eventos
        if (IsKeyDown(KEY_RIGHT)) posicion.x += 4.0f;
        if (IsKeyDown(KEY_LEFT)) posicion.x -= 4.0f;

        // B. Update / Lógica
        // (Aquí irían cálculos complejos, colisiones, etc.)

        // C. Draw / Dibujado
        BeginDrawing();
            ClearBackground(RAYWHITE); // Limpiar pantalla
            
            DrawTexture(miTextura, posicion.x, posicion.y, WHITE); // Dibujar recurso
            DrawText("Usa las flechas para mover la imagen", 10, 10, 20, DARKGRAY);
            
        EndDrawing();
    }

    // 3. DESINICIALIZACIÓN
    UnloadTexture(miTextura); // Liberar textura de la GPU
    CloseWindow();            // Cerrar ventana y liberar contexto gráfico

    return 0;
}