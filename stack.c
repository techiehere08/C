#include<stdio.h>
#include<conio.h>

struct ArrayStack
{
	int top;
	int capacity;
	int *(array);
};
struct ArrayStack* createstack(int cap)
{
	struct ArrayStack *stack;
	stack= malloc(sizeof(struct ArrayStack));
	stack->capacity=cap;
	stack->top=-1;
	stack->array=malloc(sizeof(int)*stack->capacity);
	return(stack);
}
int isFull(struct ArrayStack *stack)
{
	if(stack->top==stack->capacity-1)
		return(1);
	else
		return(0);
}
int isEmpty(struct ArrayStack *stack)
{
 if(stack->top==-1)
 	return(1);
 else
 	return(0);
}

void push(struct ArrayStack *stack, int item)
{
	if(!isFull(stack))
		{
			stack->top++;
		stack->array[stack->top]=item;
	}
}

int pop(struct ArrayStack *stack)
{
	int item;
if(!isEmpty(stack))
{
 item=stack->array[stack->top];
 stack->top--;
 return(item);
}	
return(-1);
}

main()
{	int ch,item;
	struct ArrayStack *stack;
	while(1){
		clrscr();
		printf("1. PUSH\n");
		printf("2. POP\n");
		printf("3. EXIT\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("Enter your number\n");
					scanf("%d",&item);
					push(stack,item);
					break;
			case 2: 
					item=pop(stack);
					if(item==-1)
						printf("stack is empty\n");
					else
					printf("%d is deleted\n",item);
				case 3: exit(0);
		}
	}
	getch();
	
}