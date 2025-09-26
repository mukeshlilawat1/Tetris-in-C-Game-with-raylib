#include "raylib.h"
#include "grid.h"

using namespace std;

int main()
{
    Color darkBlue = { 44,44,127,255 };
    InitWindow(300, 600, "Tetris-Game");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(darkBlue);

        EndDrawing();
    }

    CloseWindow();

}

