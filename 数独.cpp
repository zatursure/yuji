#include<bits/stdc++.h>
using namespace std;
int a[10][10];

bool check(int x,int y,int z){
    int cnt=0;
    for(int i=0;i<9;i++){
        cnt+=(a[x][i]==z);
        cnt+=(a[i][y]==z);
    }
    for(int i=x/3*3;i<x/3*3+3;i++){
        for(int j=y/3*3;j<y/3*3+3;j++) cnt+=(a[i][j]==z);
    }
}
void DFS(int x,int y){
    if(y==9) DFS(x+1,0);
    else if(x==9){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++) cout<<a[i][j];
            cout<<endl;
        }
        exit(0);
    }
    else if(a[x][y]) DFS(x,y+1);
    else{
        for(int i=1;i<=9;i++){
            if(check(x,y,i)){
                a[x][y]=i;
                DFS(x,y+1);
                a[x][y]=0;
            }
        }
    }
}
int main(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            char ch;
            cin>>ch;
            if(ch!='?'){
                a[i][j]=ch-'0';
            }
        }
    }
    DFS(0,0);
    return 0;
}