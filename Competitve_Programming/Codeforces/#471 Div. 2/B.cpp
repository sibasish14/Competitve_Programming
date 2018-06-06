#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	map<char,int> mp;
	cin>>s;
	int i,c=0;
	for(i=0;i<s.size();i++)
		mp[s[i]]++;
	int s1=s.size(),s2=mp.size();
	if(s1<4 || s2>4 ||s2==1)
		cout<<"NO";
	else if(s2 >= 3)
		cout<<"YES";
	else
	{
		for(auto z:mp)
			if(z.second <= 1)
			{
				cout<<"NO";
				return 0;
			}
			cout<<"YES";
	}
	return 0;
}
