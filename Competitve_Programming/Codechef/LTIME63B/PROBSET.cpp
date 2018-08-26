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
        int n,m,i,j;
        cin>>n>>m;
        int fine=0,invalid=0,weak=0;
        string s,t;
        for(i=0;i<n;i++)
        {
            cin>>s>>t;
            if(s == "correct")
            {
                for(j=0;j<m;j++)
                    if(t[j] == '0')
                        break;
                if(j == m)
                    fine=1;
                else invalid=1;
            }
            else
            {
                for(j=0;j<m;j++)
                    if(t[j] == '0')
                        break;
                if(j == m)
                    weak=1;
            }
        }
        if(invalid)
            cout<<"INVALID\n";
        else if(weak)
            cout<<"WEAK\n";
        else cout<<"FINE\n";
    }
    return 0;
}