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
#define vpllll vector<pair<long long, long long>>
#define pll pair<long long, long long>
#define sll set<long long>

ll calculateArea(const vpllll& mon){
    if (mon.empty()) return 0;
    ll minX = mon[0].first, maxX = mon[0].first;
    ll minY = mon[0].second, maxY = mon[0].second;
    
    for (const auto& c : mon) {
        minX = min(minX, c.first);
        maxX = max(maxX, c.first);
        minY = min(minY, c.second);
        maxY = max(maxY, c.second);
    }
    
    return (maxX-minX+1)*(maxY-minY+1);
}
void solve(){
    int n;
    cin>>n;
        
        vpllll mon(n);
        for (int i = 0; i<n;i++){
            cin>>mon[i].first>>mon[i].second;
        }
        if(n==1){
            cout<<1;
            return;
        }
        ll mini = calculateArea(mon);
        for (int idx = 0;idx<n;idx++){
            pll initial = mon[idx];
            sll xpos, ypos;
            for (int i = 0; i < n; i++) {
                xpos.insert(mon[i].first);
                ypos.insert(mon[i].second);
            }
            vll xVec(xpos.begin(), xpos.end());
            vll yVec(ypos.begin(), ypos.end());

            for (ll i=0;i<xVec.size();i++){
                for (ll j=0;j<yVec.size();j++){
                    if (i>0){
                        ll diff = xVec[i]-xVec[i-1];
                        xpos.insert(xVec[i] + diff);
                        if (xVec[i] - diff >= 1) xpos.insert(xVec[i-1] - diff);
                    }
                    if (j>0){
                        ll diff = yVec[j] - yVec[j-1];
                        ypos.insert(yVec[j] + diff);
                        if (yVec[j] - diff >= 1) ypos.insert(yVec[j-1] - diff);
                    }
                }
            }
            for (ll newX : xpos) {
                for (ll newY : ypos){
                    bool avail = false;
                    for (int i=0;i<n;i++){
                        if(i!=idx && mon[i].first == newX && mon[i].second == newY){
                            avail = true;
                            break;
                        }
                    }
                    
                    if (!avail){
                        mon[idx] = {newX, newY};
                        mini = min(mini, calculateArea(mon));
                    }
                }
            }
            mon[idx] = initial;
        }
        cout<<mini;
    } 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt;cin>>tt;
    while(tt--){
          solve();
        cout<<endl;
    return 0;
}
}