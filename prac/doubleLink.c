#include<stdio.h>
#include<stdlib.h>

typedef struct node *nodePointer;
typedef struct node{
	nodePointer llink;
	nodePointer rlink;
	int data;
};

void dinsert(nodePointer node,nodePointer newNode){
	newNode->llink=node;
	newNode->rlink=node->rlink;
	node->rlink->llink=newNode;
	node->rlink=newNode;
}

void ddelete(nodePointer node,nodePointer delete){
	if(node==delete)
		printf("header cant be delete"):
	else{
		delete->llink->rlink=delete->rlink;
		delete->rlink->llink=delete->llink;
	}
	free(delete);
}
	

int main(){
	
}


