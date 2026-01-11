#ifndef PLAYER
#define PLAYER

#include "raylib.h"

typedef struct {
	float x;
	float y;
	int size;
	float dx;
	float dy;
	int spd;
	Texture tex;
} Player;

Player new_player();
void update_player(Player* player);
void render_player(Player* player);

#endif
