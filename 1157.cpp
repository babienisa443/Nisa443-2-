Source #671083:
#include<bits/stdc++.h>
using namespace std;
vector <int> v1;
deque <int> q1,q2;
main(){
	int n,k;
	scanf("%d %d",&n,&k);
	v1.resize(n+10);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v1[i]);
	}
	q1.push_back(0);
	q2.push_back(v1[0]);
	for(int i=1;i<n;i++)
	{
		if(i-q1.front()>k)
		{
			q1.pop_front();
			q2.pop_front();
		}
		if(q2.back()>v1[i]+q2.front())
		{
			int x;
			x=v1[i]+q2.front();
			while(q2.back()>v1[i]+q2.front())
			{
				q1.pop_back();
				q2.pop_back();
			}
			q1.push_back(i);
			q2.push_back(x);
		}
		else
		{
			q1.push_back(i);
			q2.push_back(v1[i]+q2.front());
		}
	}
	printf("%d",q2.back());
}
