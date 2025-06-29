#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,w,h,a,b;
    int x1,y1,x2,y2;
    cin>>t;
    while(t--){
        cin>>w>>h>>a>>b;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2){
            int y=y2-y1;
            if(y%b==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(y1==y2){
            int x=x2-x1;
            if(x%a==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            int x=x2-x1;
            int y=y2-y1;
            x=x%a;
            y=y%b;
            if(x&&y) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
 
    return 0;
}