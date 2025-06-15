#include<bits/stdc++.h>
using namespace std;
string a;
bool vis[10][10];
int ans;
void DFS(int x,int y,int s){
    if(x==7&&y==1){
        ans+=(s==48);
        return;
    }
    if(vis[x][y]||s>=48) return;
    if(vis[x+1][y]&&vis[x-1][y]&&vis[x][y+1]==vis[x][y-1]) return;
    if(vis[x][y+1]&&vis[x][y-1]&&vis[x+1][y]==vis[x-1][y]) return;
    vis[x][y]=1;
    if(a[s]==)
}