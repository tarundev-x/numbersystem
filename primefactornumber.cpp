#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp;
	
for(int i=2;i*i<=temp;i++)
{
	while(n%i==0)
	{
		cout<<i<<" ";
		n=n/i;
	}
}
return 0;
}
