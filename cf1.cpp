#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++)
    if(arr[i]%2==0){
        cout<<"Sakurako"<<endl;
    }
    else
    cout<<"Kosuke"<<endl;
    return 0;
}