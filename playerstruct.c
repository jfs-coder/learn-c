#include <stdio.h>

int main() {

	struct entity {int x; int y;};
	typedef struct{int x; int y;} ent;

	struct entity player;
	ent enemy;

	player.x = 10; player.y = 20;

	enemy.x = 15; enemy.y = 25;

	printf("Player X: %d\n", player.x);
	printf("Player Y: %d\n", player.y);
	printf("Enemy  X: %d\n", enemy.x);
	printf("Emeny  Y: %d\n", enemy.y);

	return 0;
}

