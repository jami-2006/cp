#include <bits/stdc++.h>
using namespace std;
int count(int a){
    int s=0;
    while(a>0){
        s++;
        a=a/10;
    }
    return s;
}
 
int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int s=0;
        int n=count(a);
        for(int i=n-1;i>=0;i--){
            int x=a;
            int y=b;
            for(int j=0;j<i;j++){
                x=x/10;
                y=y/10;
            }
            if(x==y) s=s+2;
            else if(y==x+1) s=s+1;
            else break;
        }
        cout<<s<<"\n";
    }
 
    return 0;
}