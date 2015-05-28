#include<stdio.h>
#include<stdlib.h>
 struct node{
	int data;
	struct node *lchild,*rchild;
};
typedef struct node treePointer;
void insert(treePointer **tree,treePointer *item){
	if(!(*tree)){
		*tree=item;
		return;
}
	if(item->data<(*tree)->data)
		insert(&(*tree)->lchild,item);
	else if(item->data>(*tree)->data)
		insert(&(*tree)->rchild,item);
}
void print(treePointer *tree){
	if(tree->lchild)
		print(tree->lchild);
	printf("%d  ,",tree->data);
        if(tree->rchild)
		print(tree->rchild);
}
int main(){
	treePointer *curr,*root;
	int i;
	root=NULL;
	for(i=0;i<10;i++){
		curr=(treePointer *)malloc(sizeof(treePointer));
		curr->lchild=curr->rchild=NULL;
		curr->data=rand()%10+1;
		insert(&root,curr);
        }
	print(root);
}

