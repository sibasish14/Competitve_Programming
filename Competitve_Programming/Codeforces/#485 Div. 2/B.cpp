#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll x,y;
	cin>>x>>y;

	if(x == y || (x==2 && y==4) || (x==4 && y==2))
		cout<<"=";
	else if(x < y)
	{
		if(x >= 3)
			cout<<">";
		else if((x == 2 && y==3) || x == 1)
			cout<<"<";
		else if(x == 2 && y >= 5)
			cout<<">";
	}
	else
	{

		if(y >= 3)
			cout<<"<";
		else if((y == 2 && x == 3) || y == 1)
			cout<<">";
		else if(y == 2 && x >= 5)
			cout<<"<";
	}
	return 0;
}
