/*
  Surprise Box Game

  Programmer: Carl Jimroe Pa�o
  Date Finished: Sept. 20, 2023
  Description:

  - Player will keep choosing among the given boxes, the goal is to get high score as possible.
  If you picked the box with a bomb, you'll lose, and the game will restart.
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int arr[5]={0,1,2,3,4};
	int box, round = 5;
    int play=0;
	int score = 0;
	printf("�AVOID THE BOMB�");
	while(play < round){
		printf("\n\nChoose a box ->\n");
	printf(" ___________________\n|_%d_|_%d_|_%d_|_%d_|_%d_|\n\n>>",arr[0],arr[1],arr[2],arr[3],arr[4]);
	scanf("%d", &box);

	int bomb = rand() % 6;
	if(box == bomb){
			printf("\nTHE BOMB EXPLODED!!!");
		play = 10;
	}else if(box > 4 || box < 0){
		printf("\nOnly pick 0-4!!!");
		exit(1);
	}
	else{
		printf("\nYOU'RE SAFE!!");
		score++;
		printf("\nScore: %d", score);
		}
	}
	printf("\nYour score: %d\n", score);

}
