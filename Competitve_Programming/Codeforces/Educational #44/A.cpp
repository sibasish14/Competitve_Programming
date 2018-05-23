#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  	int n,i,ans1=0,ans2=0;
  	cin>>n;
  	ll a[n+1];
  	for(i=1;i<=n/2;i++)
  	{
  		cin>>a[i];
  	}
  	sort(a+1,a+n/2+1);

  		for(i=1;i<=n/2;i++)
  		{
  			ans1+=abs(a[i]-i*2);
  		}

		for(i=1;i<=n/2;i++)
  		{
  			ans2+=abs(a[i]-(i*2-1));
  		}
  	cout<<min(ans2,ans1);
	return 0;
}
