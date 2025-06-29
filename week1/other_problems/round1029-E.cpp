#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        unordered_set<int> s1,s2;
        int u=0;
        int l=0;
        int x=0;
        for(int i=n-1;i>=0;i--){
            auto it=s1.find(a[i]);
            if(a[i]==b[i]){
                cout<<i+1<<"\n";
                x=1;
                break;
            }
            if(it!=s1.end()){
                cout<<i+1<<"\n";
                x=1;
                break;
            }
            it=s2.find(b[i]);
            if(it!=s2.end()){
                cout<<i+1<<"\n";
                x=1;
                break;
            }
            s1.insert(a[i]);
            s1.insert(l);
            s2.insert(b[i]);
            s2.insert(u);
            u=a[i];
            l=b[i];
        }
        if(x==0) cout<<"0\n";
    }
 
    return 0;
}