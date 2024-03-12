#include "myTools.h"

void drawSBox(int x1,int y1, int x2, int y2)
{
	for(int i = x1 + 1; i < x2; i++)
    {
        gotoxy(i, y1);
        printf("%c", 196);

        gotoxy(i, y2);
        printf("%c", 196);
    }
    for(int i = y1 + 1; i < y2; i++)
    {
        gotoxy(x1, i);
        printf("%c", 179);

        gotoxy(x2, i);
        printf("%c", 179);
    }

    gotoxy(x1,y1);
    printf("%c", 218);
    gotoxy(x1,y2);
    printf("%c", 192);
    gotoxy(x2,y1);
    printf("%c", 191);
    gotoxy(x2,y2);
    printf("%c", 217);

}
void gotoxy(int x, int y)
{
	COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	return;
}
void menu()
{
	int time, h, m, s;
	int coin, q, d, p;
	
	char choice;

	int lineX = 0;
    int lineY = 0;

	while(choice != 'd') 
	{
        system("cls");
        drawSBox(lineX,lineY,lineX+25,lineY+15);

		gotoxy(7,2);
		printf("Conversion\n");
		gotoxy(2,4);
		printf("[a] Time");
		gotoxy(2,5);
		printf("[b] Coin");
		gotoxy(2,6);
		printf("[c] Display");
		gotoxy(2,7);
		printf("\t[1] Time");
		gotoxy(2,8);
		printf("\t[2] Coin");
		gotoxy(2,9);
		printf("[d] Exit");
		gotoxy(2,12);
		printf("Enter your choice: ");
		
		scanf(" %c", &choice);
		gotoxy(0, 18);

		int displayChoice = 0;
		switch(choice)
		{
			case 'a':
				printf("Input time in seconds: ");
				scanf("%d", &time);
				gotoxy(0,22);
				convertTime(time, &h, &m, &s);
				break;
			case 'b':
				printf("Input coin value in cents: ");
				scanf("%d", &coin);
				gotoxy(0,22);
				computeCoin(coin, &q, &d, &p);
				break;
			case 'c':
				printf("Time or Coin? [1/2] ");
				scanf("%d", &displayChoice);
				gotoxy(0,22);
				if(displayChoice == 1) displayTime(time, &h, &m, &s);
				if(displayChoice == 2) displayCoin(coin, &q, &d, &p);
				break;
			case 'd':
				printf("Exiting the program...");
				return;
			default:
				printf("Invalid input\n");
		}
		gotoxy(0,25);

		printf("Press Enter to continue...");
		if(getchar() == '\n');
		getchar();
	}
	return;
}