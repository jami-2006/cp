#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char x,y;
        unordered_map<char,int> mp;
        cin>>x;
        mp[x]=1;
        char c;
        for(int i=0;i<n-2;i++){
            cin>>c;
            auto it=mp.find(c);
            if(it==mp.end()) mp[c]=1;
            else mp[c]++;
        }
        cin>>y;
        auto it=mp.find(y);
        if(it==mp.end()) mp[y]=1;
        else mp[y]++;
        int count=0;
        it=mp.begin();
        while(it!=mp.end()){
            if(it->second>1) count++; 
            it++;
        }
        if(count==0) cout<<"NO\n";
        else if(count==1){
            if(x!=y) cout<<"YES\n";
            else{
                if(mp[x]>2) cout<<"YES\n";
                else cout<<"NO\n";
                }
            }
        
        else cout<<"YES\n";
    }
 
    return 0;
}