#include<stdio.h>
char arr[10]={'O','1', '2', '3', '4', '5', '6', '7', '8', '9'};
int player=1,w,t,p2point=10,p1point=10,full;
int checkfull();
void display(int);
int play();
int findwinner();

void main()
{
int ch;
while(1)
{
	printf("Player %d,chance:  ", player);
	printf("Enter your choice\n1.Display\n2.Play\n3.Exit");
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
}
while(1)
if(t==1)
break;
}


int play()
{ 	int i,j;
	{	
		full=checkfull();
		if(full)
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
				p1point--; 
			}
			else
			{
				printf("Invalid your point got deducted\n");
				p2point--; 
			}
		}
	player++;
	return player;
	}
	
    
}

void display(int p)
{	
	if(p==1)
		p1point--;
	else
		p2point--;
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
if(p1point>p2point)
	printf("Player 1 wins\n");
else if (p2point>p1point)
	printf("Player 2 wins\n");
else
{
	printf("Draw\n");
t=1;
}
return 0;
}
int checkfull(){
	int i,full=1;
	for(i=0;i<10;i++)
	{
		if(arr[i]!='X'&&arr[i]!='O')
			full=0;
		else
			full=1;
	}
	return full;
}