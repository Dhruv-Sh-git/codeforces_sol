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

ll dhundo(int n, int row, int col) {
    if (n==1) return row==1&&col==1?1:row==2&&col==2?2:row==2&&col==1?3:4;
    ll size = 1LL << n,quadS=size/2,cells=(size*size)/4;
    bool isBottom = row>quadS,isRight= col > quadS;
    int newR = isBottom? row - quadS : row, newcol = isRight? col - quadS : col;
    
    //recursion
    return (!isBottom && !isRight)?dhundo(n- 1, newR, newcol) : 
           (isBottom && isRight)? cells + dhundo(n - 1, newR, newcol) : 
           (isBottom)? 2*cells+ dhundo(n- 1, newR, newcol) : 
           3*cells+dhundo(n- 1,newR,newcol);
}

pair<int, int> findPos(int n, ll d) {
    if (n==1) return d == 1 ? pair<int,int>{1, 1} : d == 2 ? pair<int,int>{2, 2} : d == 3 ? pair<int,int>{2, 1} : pair<int,int>{1, 2};
    ll size = 1LL << n, cells = size * size / 4;
    int quadrant = d <= cells ? 1 : d<=2*cells?2:d<=3*cells?3:4;
    ll newD= d-(quadrant - 1) * cells;
    auto pos = findPos(n - 1, newD);
    //all 3 cases with offsetting
    if (quadrant==1) return pos;
    if (quadrant==2) return {pos.first + size/2, pos.second + size/2};
    if (quadrant==3) return {pos.first + size/2, pos.second};
    return {pos.first, pos.second + size/2};
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;cin>>tt;
    while (tt--) {
        int n, q; cin>>n>>q;
        while (q--) {
            string type; cin >> type;
            if (type == "->") {
                int x, y; cin>>x>>y;
                cout << dhundo(n, x, y) << "\n";
            } else {
                ll d;cin>>d;
                auto pos = findPos(n,d);
                cout<<pos.first<<" "<< pos.second <<"\n";
        }
        }}
    return 0;
}