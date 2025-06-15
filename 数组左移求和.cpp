#include<bits/stdc++.h>
using namespace std;
int a[100005], b[100005];
int n, Q, t;

void left(){
    int x = a[1];
    for(int i=1; i<n; i++){
        a[i] = a[i+1];
    }
    a[n] = x;
}

int main(){
    cin >> n >> Q;
    t = n+1;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        b[t-1+i] = a[i];  // 保存原始数组
    }
    
    for(int i=1; i<=n-1; i++){
        left();
        for(int j=1; j<=n; j++){
            b[t+j-1] = a[j];
        }
        t += n;
    }
    
    while(Q--){
        int L, R;
        cin >> L >> R;
        long long sum = 0;
        for(int i=L; i<=R; i++){
            sum += b[i];
        }
        cout << sum << endl;
    }
    return 0;
}