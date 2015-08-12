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



void preorder(treePointer *tree){ 
	if(!tree)
		return;
	printf(" %d \t",tree->data);
		
	if(tree->lchild)
		preorder(tree->lchild);
        if(tree->rchild)
		preorder(tree->rchild);

}

void inorder(treePointer *tree){ //inorder travel
	if(!tree)
		return;
		
	if(tree->lchild)
		inorder(tree->lchild);
	printf(" %d \t",tree->data);
        if(tree->rchild)
		inorder(tree->rchild);
}


void postorder(treePointer *tree){
	if(!tree)
		return;
	if(tree->lchild)
		postorder(tree->lchild);
	if(tree->rchild)
		postorder(tree->rchild);
	printf(" %d \t",tree->data);
}

		
int main(){
	treePointer *curr,*root;
	int i;
	root=NULL;
	for(i=0;i<8;i++){
		curr=(treePointer *)malloc(sizeof(treePointer));
		curr->lchild=curr->rchild=NULL;
		curr->data=rand()%15+1;
		insert(&root,curr);
        }
	printf("preorderTravel \n");
	preorder(root);
	printf("\n");
	printf("inorderTravel \n");
	inorder(root);
	printf("\n");
	printf("postorderTravel \n");
	postorder(root);
	printf("\n");
	
}

