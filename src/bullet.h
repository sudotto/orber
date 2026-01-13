#ifndef BULLET
#define BULLET

#include "raylib.h"

typedef struct {
	float x;
	float y;
	int size;
	float dx;
	float dy;
	int spd;
	Texture tex;
} Bullet;

Bullet new_bullet();
void update_bullet(Bullet* bullet);
void render_bullet(Bullet* bullet);

#endif
