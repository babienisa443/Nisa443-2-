#include<stdio.h>
#include<vector>
using namespace std;
vector <int> head,naypl;
int findhead(int soldier)
{
	while(head[soldier]!=soldier)
	{
		soldier=head[soldier];
	}
	return soldier;
}
void connect(int soldierwin ,int soldierlose)
{
	head[soldierlose]=soldierwin;
}
main(){
	int n,p,fi,naya,nayb,a,b;
	scanf("%d %d",&n,&fi);
	head.resize(n+10);
	naypl.resize(n+10);
	for(int i=1;i<=n;i++)
		{
			head.at(i)=i;
			//printf("***%d***",head.at(i));
		}
	for(int i=1;i<=n;i++)
		{
			scanf("%d",&p);
			naypl.at(i)=p;
		}
	for(int i=1;i<=fi;i++)
		{
			scanf("%d %d",&naya,&nayb);
			a=findhead(naya),b=findhead(nayb);
			if(a!=b)
			{
				if(naypl.at(a)>naypl.at(b))
				{
					printf("%d\n",a);
					naypl.at(a)=naypl.at(a)+(naypl.at(b)/2);
					connect(a,b);
				}
				else if(naypl.at(a)<naypl.at(b))
				{
					printf("%d\n",b);
					naypl.at(b)=naypl.at(b)+(naypl.at(a)/2);
					connect(b,a);
				}
				else if(naypl.at(a)==naypl.at(b))
				{
					if(a<b)
					{
						printf("%d\n",a);
						naypl.at(a)=naypl.at(a)+(naypl.at(b)/2);
						connect(a,b);
					}
					else if(a>b)
					{
						printf("%d\n",b);
						naypl.at(b)=naypl.at(b)+(naypl.at(a)/2);
						connect(b,a);
					}
				}
			}
			else if(a==b)
			{
				printf("-1\n");
			}
			
		}		
	
}
