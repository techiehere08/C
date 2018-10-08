#include<stdlib.h>
#include<stdio.h>
char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
int player=1,w,t,p2point=10,p1point=10,full;
int checkfull();
void display(int);
int play();
int findwinner();
void main()
{
int ch;
printf("\t\t*****************************************	\n\t\t*\t\t\t\t\t*\n\t\t*\t\t\t\t\t*\n\t\t*\t  THE HIDDEN TIC TOC TOE\t*\n\t\t*\t\t\t\t\t*\n\t\t*\t\t\t\t\t*	\n\t\t*****************************************	\n\n\t\t__________________RULES__________________\n\n\n1.Intially both the player will be given 10 points.\n\n2.Each time player uses DISPLAY 4 points will be deducted.\n\n3.Each time player chooses already filled place his 2 points will be deducted and also loses the chance.\n\n4.Any of the player making a row or a coloumn or a diagonal of either X or O first will be given 10 points.\n\n5.After comparing overall points winner will be decided.\n");
while(1)
{
	printf("\n====>Player %d,chance:\n\n",player);
	printf("Enter your choice\n\n1.Display\n2.Play\n3.Exit");
	scanf("%d",&ch);
if(ch==1)
	display(player)	;
else if(ch==2)
	player=play();
else if(ch==3)
		break;
	
if(player%2==0)
		player=2;
	else
		player=1;
	if(checkfull())
{
	printf("Draw\n");
}
}
}

int play()
{ 	int i;
	{
		findwinner();
	printf("Enter the postion\n");
	scanf("%d",&i);
	if(arr[i]!='X'&&arr[i]!='O'){
		if(player==1)
		arr[i]='X';
	else
		arr[i]='O';
	}
	else
		{
			if(player==1){
				printf("Invalid your point got deducted\n");
				p1point=p1point-2; 
			}
			else
			{
				printf("Invalid your point got deducted\n");
				p2point=p2point-2; 
			}
		}
	player++;
	return player;
	}
	    
}

void display(int p)
{	
	if(p==1)
		p1point=p1point-4;
	else
		p2point=p2point-4;
    printf("\n\n\tTic Tac Toe\n\n");

    printf("\tPlayer 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", arr[1], arr[2], arr[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", arr[4], arr[5], arr[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", arr[7], arr[8], arr[9]);

    printf("     |     |     \n\n");
}

int findwinner()
{
	if(arr[1] == arr[2] && arr[2] == arr[3])
		if(arr[1]=='X')
			w=1;
		else
			w=2;
	else if (arr[4] == arr[5] && arr[5] == arr[6])
        if(arr[4]=='X')
			w=1;
		else
			w=2;
        
    else if (arr[7] == arr[8] && arr[8] == arr[9])
        if(arr[7]=='X')
			w=1;
		else
			w=2;
        
    else if (arr[1] == arr[4] && arr[4] == arr[7])
        if(arr[1]=='X')
			w=1;
		else
			w=2;
        
    else if (arr[2] == arr[5] && arr[5] == arr[8])
        if(arr[2]=='X')
			w=1;
		else
			w=2;
        
    else if (arr[3] == arr[6] && arr[6] == arr[9])
        if(arr[3]=='X')
			w=1;
		else
			w=2;
        
    else if (arr[1] == arr[5] && arr[5] == arr[9])
        if(arr[1]=='X')
			w=1;
		else
			w=2;
        
    else if (arr[3] == arr[5] && arr[5] == arr[7])
        if(arr[3]=='X')
			w=1;
		else
			w=2;
	else
		w=0;

if(w==1)
	p1point=10+p1point;
else if(w==2)
	p2point=10+p2point;
if(w==1||w==2)
{
	if(p1point>p2point)
	printf("Player 1 wins\n");
else if (p2point>p1point)
	printf("Player 2 wins\n");
exit(0);
}

return 0;
}
int checkfull(){
	int i,full=1;
	for(i=1;i<10;i++)
	{
		if(arr[i]!='X' || arr[i]!='O')
			{
				full=0;
			break;
		}
		else
			full=1;
	}
	return full;
}