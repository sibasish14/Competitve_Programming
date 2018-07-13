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
    int i;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='n' && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u')
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
	return 0;
}
