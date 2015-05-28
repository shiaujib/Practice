#include<stdio.h>
#include<stdlib.h>
#define MAX 100


typedef struct {
	int key;
	}element;
element stack[MAX];

int top=-1;
void stackFull(){
	fprintf(stderr,"stack is full\n");
	exit(0);
}

void stackEmpty(){
	 fprintf(stderr,"stack is Empty\n");
         exit(0);
  }


void push(int n){
	if(top>=MAX-1)
		stackFull();
	top++;
	stack[top].key=n;
}
int pop(){
	if(top==-1)
		stackEmpty();
	return stack[top--].key;
	}
void display(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d ",stack[i].key);
	}
	printf("\n");
}


int main()
{	
	int i;
	for(i=0;i<10;i++){
		push(i);
//		printf("%d ",stack[top].key);
	}
	pop();
	pop();
	display();
	
		








}
	
	

