#include<stdio.h>
#include<stdlib.h>

void init(int group[],int amount[]){
	int i;
	for(i=0;i<100;i++){
		group[i]=i;
		amount[i]=1;
	}
}

int find(int group[],int n){
	return group[n];
}
int max(int x,int y){
	if(x>=y)
		return x;
	else
		return y;
}

int min(int x,int y){
        if(x<=y)
                return x;
        else
                return y;
}


void unionfunc(int group[],int amount[],int x,int y){
	int i;
	if(group[x]!=group[y]){
		int gmin=min(group[x],group[y]);
		int gmax=max(group[x],group[y]);
		for(i=0;i<100;i++)
			if(group[i]==gmax){
				group[i]=gmin;
				amount[gmax]--;
				amount[gmin]++;
			}
	}
}
int cardinality(int amount[],int num){
	return amount[num];
}
		
	

int main(){	
	int group[100];
	int amount[100];
	init(group,amount);
	unionfunc(group,amount,2,3);
	printf("%d  \n%d\n",find(group,3),cardinality(amount,2));

}
		
