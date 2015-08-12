#include<stdio.h>
#include<stdlib.h>

void func(int *n){
	(*n)++;
}
int main(){
	int n=0;
	func(&n);
	printf("%d \n",n);
	}
