#include<stdio.h>
int v [2000000];
int ar[2000000];

main(){
	int n,Max,lan=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
		scanf("%d",&ar[i]);
	for(int i=1;i<=n;i++)
		{
				
			if(lan==0)
			{
				v[lan]=ar[i];
				lan++;
			}
			else if(v[lan-1]<ar[i])
			{
				v[lan]=ar[i];
				lan++;
			}
			else{
				int Min=0,Mid,Max=lan-1;
				int ans=200000000;
				Mid=(Max+Min)/2;
			//	printf("++++\n");
				while(Max>=Min)
				{
				
					if(v[Mid]<ar[i])
					{
					//	printf("%d %d %d-----\n",Mid,v[Mid],ar[i]);
						
						Min=Mid+1;
						Mid=(Max+Min)/2;
					}
					else if(v[Mid]>=ar[i])
					{
					//	printf("++++");
						if(Mid<=ans)
						ans=Mid;
					//	printf("%d\n",ans);
						Max=Mid-1;
						Mid=(Max+Min)/2;
						
					}
					
				}
				v[ans]=ar[i];
			}
	
		
		}
	printf("%d",lan);	
}
