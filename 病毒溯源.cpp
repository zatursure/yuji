#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    int lChild;
    int rChild;
};
Node node[1005];
vector<int>a[1005];
int mx,e;
bool vis[1005];
vector<int> p, best;
void DFS(int x,int deep){
    p.push_back(x);
    if (deep > mx || (deep == mx && p < best)) {
        mx = deep;
        e = x;
        best = p;
    }
    for (auto y : a[x]) DFS(y, deep + 1);
    p.pop_back();
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k,x;
        cin>>k;
        while(k--){
            cin>>x;
            a[i].push_back(x);
            vis[x]=true;
        }
        sort(a[i].begin(),a[i].end());
    }
    for(int i=0;i<n;i++){
        if(vis[i]==false){
            p.clear();
            DFS(i,1);
        }
    }
    cout<<mx<<endl;
    for (int i = 0; i < best.size(); i++) {
        if (i > 0) cout << " ";
        cout << best[i];
    }
    return 0;
}