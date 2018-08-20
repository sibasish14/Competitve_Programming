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
        string s,t;
        cin>>s>>t;
        int i,j,b=0,k;
        int done[3]={0};
        for(i=0;i<3;i++)
            if(s[i] == 'o' || t[i] == 'o')
                done[i]=1;
        int f=0; 
        for(i=0;i<3;i++)
        {
            k=i;
            b=0;
            if(done[i])
            {
                for(j=0;j<3;j++)
                    if((s[j] == 'b' || t[j] == 'b') && j != k)
                        b++;
                if(b == 2)
                    f=1;
            }
        }
        if(f) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}