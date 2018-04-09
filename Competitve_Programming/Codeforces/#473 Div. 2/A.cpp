#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	if(n == 1)
		cout<<"Ehab\n";
	else
	{
		if(n%2 == 0)
			cout<<"Mahmoud\n";
		else
			cout<<"Ehab\n";
	}	
	return 0;
}