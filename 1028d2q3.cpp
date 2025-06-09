/***********  
DHRUV KA CODE 
***************/ 
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define all(x) x.begin(), x.end()   
#define L(i,x,n) for(int i=x;i<n;i++) 
#define R(i,x,n) for(int i=x;i>=n;i--) 
#define sz(a) ((int) (a).size()) 
#define pb push_back 
#define mp make_pair 
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define pii pair<int, int> 
#define vpii vector<pair<int, int> > 
#define vll vector<long long> 
#define vvl vector<vector<long long> > 
#define mll map<long long, long long> 

int gcd_mul(vi &arr){     
    return accumulate(arr.begin() + 1, arr.end(), arr[0],      
    [](int a, int b){ return __gcd(a, b);}); 
} 

void solve(){          
    int n;          
    cin >> n;          
    vi arr(n);              
    for(int i = 0; i < n; i++) cin>>arr[i];               
    
    if (n == 1) {         
        cout << 0;         
        return;     
    }                
    
    int target_val = gcd_mul(arr);          
    int counts = count(arr.begin(), arr.end(), target_val);               
    
    if (counts == n) {         
        cout << 0;         
        return;     
    }          
    
    if (counts > 0) {         
        cout << n - counts;         
        return;     
    }     
    for (int i = 0; i < n; i++) {         
        for (int j = i + 1; j < n; j++) {             
            if (__gcd(arr[i], arr[j]) == target_val) {                 
                cout << n;             
                return;            
            }         
        }     
    }
    int mini = n + 1;     
    for (int i = 0; i < n; i++) {         
        int curr = arr[i];         
        for (int j = i; j < n; j++) {             
            if (j > i) {
                curr = __gcd(curr, arr[j]);             
            }
            
            if (curr == target_val) {                 
                mini = min(mini, j - i + 1);                 
                break;
            }
        }     
    }     
    
    cout << n + mini - 1; 
}    

int main() {     
    int t;     
    cin >> t;     
    while (t--) {         
        solve();         
        cout << endl;     
    }     
    return 0; 
}