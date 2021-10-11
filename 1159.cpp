Source #677588:
#include <stdio.h>
struct box {
	int t=0,day=1;
}ar[1010][1010];
main(){
	int n,m;
	scanf("%d",&m);
	scanf("%d",&n);
	int a[n+5],b[n+5];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
			if(ar[0][i-1].t+a[i]<=m)
				{
					ar[0][i].t=ar[0][i-1].t+a[i];
					ar[0][i].day=ar[0][i-1].day;
				}
			else{
				ar[0][i].t=a[i];
				ar[0][i].day=ar[0][i-1].day+1;
			}
	}
	for(int i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(int i=1;i<=n;i++)
		for(int k=0;k<=n;k++)
			{
				if(k==0)
				{
					if(ar[i-1][k].t+b[i]<=m)
					{
							ar[i][k].t=ar[i-1][k].t+b[i];
							ar[i][k].day=ar[i-1][k].day;
					}
					else
					{
						ar[i][k].t=b[i];
						ar[i][k].day=ar[i-1][k].day+1;
					}
				}	
				else
				{
					int d1,d2,T1,T2;
					if(ar[i][k-1].t+a[k]<=m)
						{
							T1=ar[i][k-1].t+a[k];
							d1=ar[i][k-1].day;
						}
					else
						{
							//printf("%d,%d \n",i,k);
							T1=a[k];
							d1=ar[i][k-1].day+1;
						}
					if(ar[i-1][k].t+b[i]<=m)
						{
							T2=ar[i-1][k].t+b[i];
							d2=ar[i-1][k].day;
						}
					else
						{
							T2=b[i];
							d2=ar[i-1][k].day+1;
						}
					if(d1<d2)
					{
						ar[i][k].day=d1;
						ar[i][k].t=T1;
					}
					else if(d1>d2)
					{
						ar[i][k].day=d2;
						ar[i][k].t=T2;
					}
					else
					{
						if(T1<T2)
					{
						ar[i][k].day=d1;
						ar[i][k].t=T1;
					}
						else 
						{
						ar[i][k].day=d2;
						ar[i][k].t=T2;
						}
					}
					
				}
			}
/*	for(int i=0;i<=n;i++)
		{
			for(int k=0;k<=n;k++)
			{
				printf("%d,%d ",ar[i][k].t,ar[i][k].day);
			}
			printf("\n");
		}
	*/
	printf("%d\n%d",ar[n][n].day,ar[n][n].t);
}
