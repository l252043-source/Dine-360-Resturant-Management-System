#define _CRT_SECURE_NO_WARNINGS
#include <raylib.h>
#include "Colors.h"
#include "UIHelper.h"
#include "ReservationManager.h"
ReservationManager manager;
int main(){
    InitWindow(1366, 768, "DINE 360  |  Restaurant Management System");
    SetTargetFPS(60);
    SetExitKey(KEY_NULL); 
    while (!WindowShouldClose()){
        BeginDrawing();
        manager.update();
        if (manager.currentScreen == -1){
            manager.currentScreen = 5;
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}