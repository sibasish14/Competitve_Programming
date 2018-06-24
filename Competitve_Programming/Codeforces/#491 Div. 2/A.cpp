#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	int d=a-c,e=b-c;

	if(a>n || b>n || c>n)
		cout<<-1;
	else if(c>a || c>b)
		cout<<-1;
	else if(d+e+c >= n)
		cout<<-1;
	else
		cout<<n-(d+e+c);
	return 0;
}
