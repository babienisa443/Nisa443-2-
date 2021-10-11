Source #677527:
#include <stdio.h>
#include <queue>
using namespace std;
int x,y;
struct box {
	int x,y,l=-1,min;
	bool operator <(const box &X)const{
	return X.min < min;
	}
}temp; 
struct life {
	int st=-1,en=-1;
	int sam=0;
}; 
queue<box>q,q2;
priority_queue<box>q3;
void check (int X,int Y,int z)
{
	if(X+1<=x)
		{
			temp.x=X+1;
			temp.y=Y;
			temp.l=z+1;
			q.push(temp);
		}
	if(X-1>0)
		{
			temp.x=X-1;
			temp.y=Y;
			temp.l=z+1;
			q.push(temp);
		}
	if(Y+1<=y)
		{
			temp.x=X;
			temp.y=Y+1;
			temp.l=z+1;
			q.push(temp);
		}
	if(Y-1>0)
		{
			temp.x=X;
			temp.y=Y-1;
			temp.l=z+1;
			q.push(temp);
		}	
}
main(){
	int xs,ys,xe,ye,max=0;
	scanf("%d %d",&x,&y);
	scanf("%d %d",&xs,&ys);
	scanf("%d %d",&xe,&ye);
	int ar[x+5][y+5];
	struct life pt[x+5][y+5];
	for(int i=1;i<=x;i++)
	{
		for(int k=1;k<=y;k++)
		{
			scanf("%d",&ar[i][k]);
		}
	}
	check(xs,ys,0);
	pt[xs][ys].sam=1;
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		if(pt[temp.x][temp.y].sam==1) continue;
		if(ar[temp.x][temp.y]==1)
		{
			pt[temp.x][temp.y].sam=1;
			//printf("000");
			check(temp.x,temp.y,temp.l);
		}
		else
		{
			//printf("%d %d \n",temp.x,temp.y);
			if(pt[temp.x][temp.y].st>temp.l||pt[temp.x][temp.y].st==-1)
			pt[temp.x][temp.y].st=temp.l;
		}
	}
	
	check(xe,ye,0);
	pt[xe][ye].sam=1;
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		if(pt[temp.x][temp.y].sam==1) continue;
		if(ar[temp.x][temp.y]==1)
		{
			pt[temp.x][temp.y].sam=1;
			check(temp.x,temp.y,temp.l);
		}
		else
		{
			if(pt[temp.x][temp.y].en>temp.l||pt[temp.x][temp.y].en==-1)
			pt[temp.x][temp.y].en=temp.l;
			q2.push(temp);
		}
	}
	while(!q2.empty())
	{
		temp=q2.front();
		q2.pop();
		if(pt[temp.x][temp.y].st!=-1)
		{
			temp.min=pt[temp.x][temp.y].st+pt[temp.x][temp.y].en;
			q3.push(temp);
			if(pt[temp.x][temp.y].sam==0)
			{
				max++;
				pt[temp.x][temp.y].sam=1;
			}
		}
	}
	temp=q3.top();
	printf("%d\n%d",max,temp.min+1);
}
