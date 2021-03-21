#include <bangtal.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int piecex[16], piecey[16], gameflag = 0;
Second secondcount;

typedef struct
{
	int x;
	int y;
} puzzle;

puzzle pieces[16];

SceneID mainScene = createScene("main", "image//메인화면.png");

ObjectID end = createObject("image//end.png");
ObjectID start = createObject("image//start.png");
ObjectID piece1 = createObject("image//1.png");
ObjectID piece2 = createObject("image//2.png");
ObjectID piece3 = createObject("image//3.png");
ObjectID piece4 = createObject("image//4.png");
ObjectID piece5 = createObject("image//5.png");
ObjectID piece6 = createObject("image//6.png");
ObjectID piece7 = createObject("image//7.png");
ObjectID piece8 = createObject("image//8.png");
ObjectID piece9 = createObject("image//9.png");
ObjectID piece10 = createObject("image//10.png");
ObjectID piece11 = createObject("image//11.png");
ObjectID piece12 = createObject("image//12.png");
ObjectID piece13 = createObject("image//13.png");
ObjectID piece14 = createObject("image//14.png");
ObjectID piece15 = createObject("image//15.png");
ObjectID pieceempty = createObject("image//empty.png");

ObjectID temptimer = createTimer(1.0f);
ObjectID resulttimer = createTimer(1);

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

bool piececheck()
{
	for (int i = 0; i < 15; i++)
	{
		if (i % 4 != pieces[i].x || i / 4 != pieces[i].y)
		{
			return false;
		}
	}

	return true;
}

void gameend()
{
	gameflag = 0;
	showObject(start);
	showObject(end);
	stopTimer(temptimer);
	setTimer(resulttimer, secondcount);
	showTimer(resulttimer);
}

void puzzlelocate()
{
	for (int i = 0; i < 16; i++)
	{
		piecex[i] = 340 + 150 * pieces[i].x;
		piecey[i] = 510 - 150 * pieces[i].y;
	}

	locateObject(piece1, mainScene, piecex[0], piecey[0]);
	locateObject(piece2, mainScene, piecex[1], piecey[1]);
	locateObject(piece3, mainScene, piecex[2], piecey[2]);
	locateObject(piece4, mainScene, piecex[3], piecey[3]);
	locateObject(piece5, mainScene, piecex[4], piecey[4]);
	locateObject(piece6, mainScene, piecex[5], piecey[5]);
	locateObject(piece7, mainScene, piecex[6], piecey[6]);
	locateObject(piece8, mainScene, piecex[7], piecey[7]);
	locateObject(piece9, mainScene, piecex[8], piecey[8]);
	locateObject(piece10, mainScene, piecex[9], piecey[9]);
	locateObject(piece11, mainScene, piecex[10], piecey[10]);
	locateObject(piece12, mainScene, piecex[11], piecey[11]);
	locateObject(piece13, mainScene, piecex[12], piecey[12]);
	locateObject(piece14, mainScene, piecex[13], piecey[13]);
	locateObject(piece15, mainScene, piecex[14], piecey[14]);
	locateObject(pieceempty, mainScene, piecex[15], piecey[15]);
}

void swappiece(ObjectID object)
{
	if (object == piece1)
	{
		if (((pieces[0].x - pieces[15].x == 1 || pieces[0].x - pieces[15].x == -1) && pieces[0].y == pieces[15].y)
			|| ((pieces[0].y - pieces[15].y == 1 || pieces[0].y - pieces[15].y == -1) && pieces[0].x == pieces[15].x))
		{
			swap(&pieces[0].x, &pieces[15].x);
			swap(&pieces[0].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece2)
	{
		if (((pieces[1].x - pieces[15].x == 1 || pieces[1].x - pieces[15].x == -1) && pieces[1].y == pieces[15].y)
			|| ((pieces[1].y - pieces[15].y == 1 || pieces[1].y - pieces[15].y == -1) && pieces[1].x == pieces[15].x))
		{
			swap(&pieces[1].x, &pieces[15].x);
			swap(&pieces[1].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece3)
	{
		if (((pieces[2].x - pieces[15].x == 1 || pieces[2].x - pieces[15].x == -1) && pieces[2].y == pieces[15].y)
			|| ((pieces[2].y - pieces[15].y == 1 || pieces[2].y - pieces[15].y == -1) && pieces[2].x == pieces[15].x))
		{
			swap(&pieces[2].x, &pieces[15].x);
			swap(&pieces[2].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece4)
	{
		if (((pieces[3].x - pieces[15].x == 1 || pieces[3].x - pieces[15].x == -1) && pieces[3].y == pieces[15].y)
			|| ((pieces[3].y - pieces[15].y == 1 || pieces[3].y - pieces[15].y == -1) && pieces[3].x == pieces[15].x))
		{
			swap(&pieces[3].x, &pieces[15].x);
			swap(&pieces[3].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece5)
	{
		if (((pieces[4].x - pieces[15].x == 1 || pieces[4].x - pieces[15].x == -1) && pieces[4].y == pieces[15].y)
			|| ((pieces[4].y - pieces[15].y == 1 || pieces[4].y - pieces[15].y == -1) && pieces[4].x == pieces[15].x))
		{
			swap(&pieces[4].x, &pieces[15].x);
			swap(&pieces[4].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece6)
	{
		if (((pieces[5].x - pieces[15].x == 1 || pieces[5].x - pieces[15].x == -1) && pieces[5].y == pieces[15].y)
			|| ((pieces[5].y - pieces[15].y == 1 || pieces[5].y - pieces[15].y == -1) && pieces[5].x == pieces[15].x))
		{
			swap(&pieces[5].x, &pieces[15].x);
			swap(&pieces[5].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece7)
	{
		if (((pieces[6].x - pieces[15].x == 1 || pieces[6].x - pieces[15].x == -1) && pieces[6].y == pieces[15].y)
			|| ((pieces[6].y - pieces[15].y == 1 || pieces[6].y - pieces[15].y == -1) && pieces[6].x == pieces[15].x))
		{
			swap(&pieces[6].x, &pieces[15].x);
			swap(&pieces[6].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece8)
	{
		if (((pieces[7].x - pieces[15].x == 1 || pieces[7].x - pieces[15].x == -1) && pieces[7].y == pieces[15].y)
			|| ((pieces[7].y - pieces[15].y == 1 || pieces[7].y - pieces[15].y == -1) && pieces[7].x == pieces[15].x))
		{
			swap(&pieces[7].x, &pieces[15].x);
			swap(&pieces[7].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece9)
	{
		if (((pieces[8].x - pieces[15].x == 1 || pieces[8].x - pieces[15].x == -1) && pieces[8].y == pieces[15].y)
			|| ((pieces[8].y - pieces[15].y == 1 || pieces[8].y - pieces[15].y == -1) && pieces[8].x == pieces[15].x))
		{
			swap(&pieces[8].x, &pieces[15].x);
			swap(&pieces[8].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece10)
	{
		if (((pieces[9].x - pieces[15].x == 1 || pieces[9].x - pieces[15].x == -1) && pieces[9].y == pieces[15].y)
			|| ((pieces[9].y - pieces[15].y == 1 || pieces[9].y - pieces[15].y == -1) && pieces[9].x == pieces[15].x))
		{
			swap(&pieces[9].x, &pieces[15].x);
			swap(&pieces[9].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece11)
	{
	if (((pieces[10].x - pieces[15].x == 1 || pieces[10].x - pieces[15].x == -1) && pieces[10].y == pieces[15].y)
		|| ((pieces[10].y - pieces[15].y == 1 || pieces[10].y - pieces[15].y == -1) && pieces[10].x == pieces[15].x))
		{
			swap(&pieces[10].x, &pieces[15].x);
			swap(&pieces[10].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece12)
	{
	if (((pieces[11].x - pieces[15].x == 1 || pieces[11].x - pieces[15].x == -1) && pieces[11].y == pieces[15].y)
		|| ((pieces[11].y - pieces[15].y == 1 || pieces[11].y - pieces[15].y == -1) && pieces[11].x == pieces[15].x))
		{
			swap(&pieces[11].x, &pieces[15].x);
			swap(&pieces[11].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece13)
	{
	if (((pieces[12].x - pieces[15].x == 1 || pieces[12].x - pieces[15].x == -1) && pieces[12].y == pieces[15].y)
		|| ((pieces[12].y - pieces[15].y == 1 || pieces[12].y - pieces[15].y == -1) && pieces[12].x == pieces[15].x))
		{
			swap(&pieces[12].x, &pieces[15].x);
			swap(&pieces[12].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece14)
	{
		if (((pieces[13].x - pieces[15].x == 1 || pieces[13].x - pieces[15].x == -1) && pieces[13].y == pieces[15].y)
			|| ((pieces[13].y - pieces[15].y == 1 || pieces[13].y - pieces[15].y == -1) && pieces[13].x == pieces[15].x))
		{
			swap(&pieces[13].x, &pieces[15].x);
			swap(&pieces[13].y, &pieces[15].y);
			puzzlelocate();
		}
	}
	else if (object == piece15)
	{
	if (((pieces[14].x - pieces[15].x == 1 || pieces[14].x - pieces[15].x == -1) && pieces[14].y == pieces[15].y)
		|| ((pieces[14].y - pieces[15].y == 1 || pieces[14].y - pieces[15].y == -1) && pieces[14].x == pieces[15].x))
	{
		swap(&pieces[14].x, &pieces[15].x);
		swap(&pieces[14].y, &pieces[15].y);
		puzzlelocate();
	}
	}
	if (piececheck() == true)
	{
		gameend();
	}
}

void shuffle()
{
	int random;
	int arrx[4] = { 0, 0, -1, 1 };
	int arry[4] = { 1, -1, 0, 0 };

	for (int i = 0; i < 100; i++)
	{
		do
		{
			random = rand() % 4;
		} while (pieces[15].x + arrx[random] < 0 || pieces[15].x + arrx[random] > 3
			|| pieces[15].y + arry[random] < 0 || pieces[15].y + arry[random] > 3);

		for (int i = 0; i < 15; i++)
		{
			if ((pieces[i].x == pieces[15].x + arrx[random])
				&& pieces[i].y == pieces[15].y + arry[random])
			{
				swap(&pieces[i].x, &pieces[15].x);
				swap(&pieces[i].y, &pieces[15].y);
				puzzlelocate();
				break;
			}
		}
	}
}

void game()
{
	gameflag = 1;
	shuffle();
	puzzlelocate();
	hideObject(start);
	hideObject(end);
	secondcount = 0;
	hideTimer();
	startTimer(temptimer);
}

void mousecallback(ObjectID object, int x, int y, MouseAction action)
{
	if (object == end)
	{
		endGame();
	}
	else if (object == start)
	{
		game();
	}
	else if (gameflag == 1 && (object == piece1 || object == piece2 || object == piece3
		|| object == piece4 || object == piece5 || object == piece6 || object == piece7
		|| object == piece8 || object == piece9 || object == piece10 || object == piece11
		|| object == piece12 || object == piece13 || object == piece14 || object == piece15))
	{
		swappiece(object);
	}
}

void timercallback(TimerID timer)
{
	if (timer == temptimer)
	{
		stopTimer(temptimer);
		setTimer(temptimer, 1.0f);
		startTimer(temptimer);
		secondcount++;
	}
}
int main(void)
{
	srand(time(NULL));

	setGameOption(GameOption::GAME_OPTION_ROOM_TITLE, false);
	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);

	for (int i = 0; i < 16; i++)
	{
		pieces[i].x = i % 4;
		pieces[i].y = i / 4;
	}

	setMouseCallback(mousecallback);
	setTimerCallback(timercallback);

	locateObject(end, mainScene, 1000, 150); 
	locateObject(start, mainScene, 1000, 250); 

	puzzlelocate();

	showObject(end);
	showObject(start);
	showObject(piece1);
	showObject(piece2);
	showObject(piece3);
	showObject(piece4);
	showObject(piece5);
	showObject(piece6);
	showObject(piece7);
	showObject(piece8);
	showObject(piece9);
	showObject(piece10);
	showObject(piece11);
	showObject(piece12);
	showObject(piece13);
	showObject(piece14);
	showObject(piece15);
	showObject(pieceempty);

	startGame(mainScene);

	return 0;
}