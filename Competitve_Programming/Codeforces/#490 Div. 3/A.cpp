#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k,i,j;
	cin>>n>>k;
	int a[n],c=0,b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i] <= k)
			c++;
		else
			break;
	}
	j=n-1;
	for(j=n-1;j>i;j--)
	{
		if(a[j] <= k)
			c++;
		else
			break;
	}
	cout<<c;
	return 0;
}
