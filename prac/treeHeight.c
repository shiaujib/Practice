#include<stdio.h>
#include<stdlib.h>
typedef int bool;
#define true 1
#define false 0

bool adj[9][9];

int max(int x,int y){
	if(x>=y)
		return x;
	else
		return y;
}
int dfs(int node ,int pnode){
	
	int i,h=0;
	for(i=0;i<9;i++){
		if(adj[node][i]&&i!=pnode)
			h=max(h,dfs(i,node)+1);
		}
	return h;

	}

int main(){
	
	adj[1][2]=1;
	adj[2][3]=1;
	adj[2][1]=1;
	adj[3][2]=1;
	int n=dfs(1,1);
	printf("tree height is %d \n",n);


}
