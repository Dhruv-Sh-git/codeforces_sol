#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][4];
    for (int i = 0; i < n; ++i) {
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }  
    for (int i = 0; i < n; ++i) {
        
            if(a[i][1]>=a[i][0] && a[i][2]>=a[i][0]){
                cout<<2*a[i][0]<<endl;
            }
            if(a[i][1]>=a[i][0] && a[i][2]<a[i][0] && a[i][3]<=(a[i][0]-a[i][2])){
                cout<<a[i][0]+a[i][2]+a[i][3]<<endl;
            }
            if(a[i][1]>=a[i][0] && a[i][2]<a[i][0] && a[i][3]>(a[i][0]-a[i][2])){
                cout<<2*a[i][0]<<endl;
            }
            if(a[i][1]<a[i][0] && a[i][2]>=a[i][0] && a[i][3]<=(a[i][0]-a[i][2])){
                cout<<a[i][0]+a[i][1]+a[i][3]<<endl;
            }
            if(a[i][1]<a[i][0] && a[i][2]>=a[i][0] && a[i][3]>(a[i][0]-a[i][1])){
                cout<<2*a[i][0]<<endl;
            }
            if(a[i][1]<a[i][0] && a[i][2]<a[i][0] && a[i][3]>=(2*a[i][0]-(a[i][1]+a[i][2]))){
                cout<<2*a[i][0]<<endl;
            }
            if(a[i][1]<a[i][0] && a[i][2]<a[i][0] && a[i][3]<(2*a[i][0]-(a[i][1]+a[i][2]))){
                cout<<a[i][1]+a[i][2]+a[i][3]<<endl;
            }
            
            
            
    } 

    return 0;
}