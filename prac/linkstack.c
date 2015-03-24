#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct{
	int key;
	}element;
typedef struct stack *stackPointer;
typedef struct stack{
	element data;
	stackPointer link;
};
stackPointer top[MAX];

void push(int i,element item){
	stackPointer temp;
	temp=malloc(sizeof(*temp));
	temp->data=item;
	temp->link=top[i];
	top[i]=temp;
}

element pop(int i){
	stackPointer temp=top[i];
	element item;
	item=temp->data;
	top[i]=temp->link;
	free(temp);
	return item;
}
void readStack(stackPointer first){
	for(;first;first=first->link){
		printf("%d  ",first->data.key);

	}
}		

int main(){
	element item;
	item.key=5;
	push(0,item);
//	printf("%d  ",top[0]->data.key);

	readStack(top[0]);

	


}
	
	
