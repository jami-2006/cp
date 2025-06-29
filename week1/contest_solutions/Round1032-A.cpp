#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        if(n==1){
            int x;
            cin>>x;
            x=x-s;
            x=abs(x);
            cout<<x<<"\n";
        }
        else{
        int x,y;
        cin>>x;
        for(int i=0;i<n-1;i++) cin>>y;
        x=x-s;
        y=y-s;
        if(x>=0) cout<<y<<"\n";
        else if(y<=0) cout<<abs(x)<<"\n";
        else{
            x=abs(x);
            y=abs(y);
            if(x<y) cout<<2*x+y<<"\n";
            else cout<<2*y+x<<"\n";
        }
        }
    }
 
    return 0;
}
