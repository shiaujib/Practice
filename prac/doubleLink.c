#include<stdio.h>
#include<stdlib.h>

 struct node{
	struct node *llink;
	struct node *rlink;
	int data;
};
typedef struct node nodePointer;

void dinsert(nodePointer* n,nodePointer* newNode){
/*	newNode->llink=node;
	newNode->rlink=node->rlink;
	node->rlink->llink=newNode;
	node->rlink=newNode;*/
//	newNode->rlinkdata=n;
	newNode->rlink=n->rlink;
	n->rlink=newNode;
//	newNode->rlink=node->rlink;
}

/*void ddelete(nodePointer node,nodePointer delete){
	if(node==delete)
		printf("header cant be delete");
	else{
		delete->llink->rlink=delete->rlink;
		delete->rlink->llink=delete->llink;
	}
	free(delete);
}
*/
nodePointer* create(int n){
	nodePointer *start=malloc(sizeof(nodePointer));
	start->data=n;
	start->rlink=NULL;
	return start;
	
}
void printList(nodePointer *start){
/*	while(start!=NULL){
		printf(" %d ",start->data);
		start=start->rlink;
	}  */
	for(;start;start=start->rlink)
		printf(" %d ",start->data);
}

int main(){
	nodePointer *a,*b,*c;
	a=create(10);
	b=create(20);
	c=create(30);
	dinsert(a,b);
	printList(a);
	
	
}


