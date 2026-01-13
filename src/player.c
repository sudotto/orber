#include "player.h"

#include "raylib.h"

Player new_player(){
	Player player;
	player.x = 0;
	player.y = 0;
	player.size = 2;
	player.dx = 0;
	player.dy = 0;
	player.spd = 5;
	player.tex = LoadTexture("player.png");
	return player;
}

void update_player(Player* player){
	if(IsKeyDown(KEY_W)){
		player->dy = -player->spd; 
	}
	if(IsKeyDown(KEY_A)){
		player->dx = -player->spd; 
	}
	if(IsKeyDown(KEY_S)){
		player->dy = player->spd; 
	}
	if(IsKeyDown(KEY_D)){
		player->dx = player->spd; 
	}

	player->x += player->dx;
	player->y += player->dy;
	if(player->dx < 0){
		player->dx += 0.25;
	} else if (player->dx > 0){
		player->dx -= 0.25;
	}
	if(player->dy < 0){
		player->dy += 0.25;
	} else if (player->dy > 0){
		player->dy -= 0.25;
	}
}

void render_player(Player* player){
	Vector2 pos = {player->x, player->y};
	DrawTextureEx(player->tex, pos, 0, player->size, WHITE);
}
