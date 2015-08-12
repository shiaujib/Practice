#include<iostream>
#include<queue>
using namespace std;

bool adj[9][9];
bool visit[9];

void bfs()
{
	queue<int> q; //create a queue
	for(int i=0;i<9;i++)
		visit[i]=false;  //initial
	
	for(int i=0;i<9;i++)
		if(!visit[i])   //node hasnt been travel
		{
			q.push(i);    //push node in queue
			visit[i]=true;
			while(!q.empty())
			{
				
				int n=q.front();
				q.pop();
				for(int j=0;j<9;j++) //find other node connect with n 
					if(adj[n][j]&&!visit[j])
					{
						q.push(j);
						visit[j]=true;
					}
			}
		}
}

int main()
{



	}
