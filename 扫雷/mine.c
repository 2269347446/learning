#include"game.h"

int main()
{
	int input;
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("play game\n");
			game();
			break;
		case 0:
			printf("out game\n");
			break;
		default:
			printf("erroc\n");
			break;
		}

	} while (input);
}