#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    	cin>>a[i];
    sort(a,a+n);
    if(n%2 == 1)
    	cout<<a[n/2];
    else
    	cout<<a[n/2-1];
	return 0;
}
