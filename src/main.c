#include "raylib.h"

#include "resource_dir.h"

#include "player.h"

int main(){
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);
	InitWindow(900, 600, "Orber");
	SearchAndSetResourceDir("resources");
	Player player = new_player();
	while(!WindowShouldClose()){
		update_player(&player);
		BeginDrawing();
		ClearBackground(BLACK);
		render_player(&player);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
