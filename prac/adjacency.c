#include<stdio.h>
#include<stdlib.h>
typedef int bool;
#define true 1
#define false 0


void dfs(int x,bool adj[][9],int p[]){
	int i=0;
	for(i=0;i<9;i++){
		if(adj[x][i]&&i!=p[x])
		{
			p[i]=x;
			dfs(i,adj,p);
		}
	}
}			


void depth_dfs(int x,int px,bool adj[][9],int depth[]){
	int i=0;
	for(i=0;i<9;i++){
		if(adj[x][i]&&i!=px)
		{
			depth[i]=depth[x]+1;
			depth_dfs(i,x,adj,depth);
		}
	}
}			






bool x_is_parent_of_y(int x, int y,int p[]){
	
	return x==p[y];
	}

void parent_child(int root,bool adj[][9],int p[]){
	int x,y;	
	p[root]=-1;
	dfs(root,adj,p);
}

void depth(int root,bool adj[][9],int depth[]){
	int i=0;
	depth[root]=0;
	depth_dfs(root,root,adj,depth);
	for(i=0;i<9;i++)
		printf("Node %d depth is %d",i,depth[i]);

	}
int main(){

	bool adj[9][9];
	int tin[9],tout[9];//in out time
	int t=0; //time 
	int p[9];

	

}
