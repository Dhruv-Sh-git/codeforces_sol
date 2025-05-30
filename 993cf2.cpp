#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string a[n];
    for (int i = 0; i < n; ++i) {
        getline(cin, a[i]);
    }
    for (int i = 0; i < n; ++i) {
       reverse(a[i].begin(),a[i].end());
       for(char &c:a[i]){
       if(c=='p'){
           c='q';
       }
       else if(c=='q'){
           c='p';
       }
    }}
    
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<endl;
    }
    
    return 0;
}