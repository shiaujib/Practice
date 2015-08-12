#include<stdio.h>
#include<stdlib.h>
#define ROW 5
#define COL 5

void func(int **ptr){
	int i,j;
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++){
			*((*ptr+i)+j)=i+j;
		}
	}

int main(){
	
	int **ptr=(int **)malloc(sizeof(int *)*ROW);
	int i=0,j=0;
	for(i=0;i<ROW;i++)
	ptr[i]=(int *)malloc(sizeof(int)*COL);
	func(ptr);

	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf(" %d  ",*((*ptr+i)+j));
		}
		printf("\n");
}

	
	    
}
