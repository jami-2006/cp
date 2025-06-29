#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>arr[i][j];
        }
        int max=0;
        int count=0;
        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]>max){
                    max=arr[i][j];
                    v1.clear();
                    v2.clear();
                    count=1;
                    v1.push_back(i);
                    v2.push_back(j);
                }
                else if(arr[i][j]==max){
                    count++;
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }
        if(count<3) cout<<max-1<<"\n";
        else if(count>=(n+m)) cout<<max<<"\n";
        else{
            int r=-1;
            int a=1;
            for(int i=1;i<v1.size();i++){
                if(v1[i]==v1[i-1]){
                    if(r==-1) r=v1[i];
                    else if(v1[i]!=r){
                        a=0;
                        break;
                    }
                }
            }
            if(a==0) cout<<max<<"\n";
            else{
                if(r==-1){
                    int col=-1;
                    int count1=1;
                    int count2=0;
                    for(int i=1;i<v2.size();i++){
                        if(v2[i]==v2[0]) count1++;
                        else if(col==-1){
                            col=v2[i];
                            count2++;
                        }
                        else if(v2[i]==col) count2++;
                        else{
                            a=0;
                            break;
                        }
                        if(count1>1&&count2>1){
                            a=0;
                            break;
                        }
                    }
                    if(a) cout<<max-1<<"\n";
                    else cout<<max<<"\n";
                }
                else{
                    int col=-1;
                    for(int i=0;i<v1.size();i++){
                        if(v1[i]!=r){
                            if(col==-1) col=v2[i];
                            else if(v2[i]!=col){
                                a=0;
                                break;
                            }
                        }
                    }
                    if(a) cout<<max-1<<"\n";
                    else cout<<max<<"\n";
                }
            }
        }
    }
 
    return 0;
}