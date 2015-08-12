#include<iostream>
using namespace std;

int graph[9][9];
struct element
{
	int v;
	element* next;
};
element* list[5];

void add_edge(int a,int b)
{
	element* e=new element();
	e->v=b;
	e->next=list[a]->next;
	list[a]->next=e;
}
void re_delete(element *e)
{
	if(!e)
		return;
		re_delete(e->next);
		delete e;
	}
void adj_list()
{	
	int a,b;
	for(int i=0;i<5;i++)
	{
		re_delete(list[i]);
		list[i]=new element();
	}
	cout<<"input first edge"<<endl;
	while(cin>>a>>b){
		add_edge(a,b);
		cout<<"input next edge"<<endl;
		}
}

void adj_matrix(int *num)
{
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++){
			graph[i][j]=0;
		}
	int a,b,c;
	cout<<"input first node"<<endl;
	while(cin>>a>>b>>c)
	{
		(*num)++;
		graph[a][b]=c;
		cout<<"input next node"<<endl;
		
	}
	
}
	
int main(){
	int num;
/*	adj_matrix(&num);
	cout<<"numbers of edge is "<<num<<endl; */
	adj_list();
	for(int i=0;i<5;i++){
			while(list[i]->next)
			{
				cout<<"list "<<i<<" "<<(list[i]->next)->v<<" ";
				list[i]=list[i]->next;
			}
			cout<<endl;
		} 
//	cout<<list[0]->v>>" ">>endl;




}
