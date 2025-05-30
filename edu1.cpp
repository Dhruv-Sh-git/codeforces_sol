#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<long long> a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        int count=0;
        while(a[i]>3){
            a[i]=a[i]/4;
            count++;
        }
        cout<<(1LL<<count)<<endl;
    }
    
    return 0;
}