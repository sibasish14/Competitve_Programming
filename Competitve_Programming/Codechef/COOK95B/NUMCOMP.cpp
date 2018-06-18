#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,n;
		cin>>a>>b>>n;
		if(a==b)
			cout<<"0\n";
		else if(a==0 && b!=0)
		{
			if(b>0)
				cout<<"2\n";
			else
			{
				if(n%2==0)
					cout<<"2\n";
				else
					cout<<"1\n";
			}
		}
		else if(b==0 && a!=0)
		{
			if(a>0)
				cout<<"1\n";
			else
			{
				if(n%2==0)
					cout<<"1\n";
				else
					cout<<"2\n";
			}
		}
		else if(a>0 && b>0)
		{
			if(a>b)
				cout<<"1\n";
			else
				cout<<"2\n";
		}
		else if(a>0 && b<0)
		{
			if(a>abs(b))
				cout<<"1\n";
			else if(a<abs(b))
			{
				if(n%2==0)
					cout<<"2\n";
				else
					cout<<"1\n";
			}
			else
			{
				if(n%2==0)
					cout<<"0\n";
				else
					cout<<"1\n";
			}
		}
		else if(a<0 && b>0)
		{
			if(abs(a)<b)
				cout<<"2\n";
			else if(abs(a)>b)
			{
				if(n%2==0)
					cout<<"1\n";
				else
					cout<<"2\n";
			}
			else
			{
				if(n%2==0)
					cout<<"0\n";
				else
					cout<<"2\n";
			}
		}
		else if(a<0 && b<0)
		{
			if(abs(a) > abs(b))
			{
				if(n%2==0)
					cout<<"1\n";
				else 
					cout<<"2\n";
			}
			else
			{
				if(n%2==0)
					cout<<"2\n";
				else
					cout<<"1\n";
			}
		}
	}
	return 0;
}
