#include<stdio.h>
#include<queue>
using namespace std;
priority_queue <long long> q;
main(){
	long long n,x,y,rd=0,rs=0,k=0,mt=0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld",&x,&y);
		if(y>=2*x)
			{
				rd+=y-2*x;
			}
		else 
			{
				q.push(y-x*2);
			}
	}
	long long temp=rd,curr;
	while(!q.empty())
	{
		curr=temp+q.top();
		if(curr-(q.size()-1)*(q.size()-1)<temp-q.size()*q.size()) break;
		temp=curr;
		q.pop();
	}
	printf("%lld",temp-q.size()*q.size());
}
