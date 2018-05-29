#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	ll k,n,s,p;
   	cin>>k>>n>>s>>p;
   	ll sheets=k*ceil(1.0*n/s);
   	cout<<(ll)ceil(1.0*sheets/p);

   	return 0;
}
