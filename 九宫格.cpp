// 方案1
#include <iostream>
#include <vector>

using namespace std;

int countSolutions(int n, int a, int b, int c, int d) {
    int count = 0;
    for (int x1 = 1; x1 <= n; ++x1) {
        for (int x2 = 1; x2 <= n; ++x2) {
            for (int x3 = 1; x3 <= n; ++x3) {
                for (int x4 = 1; x4 <= n; ++x4) {
                    int x5 = a + b + c + d - x1 - x2 - x3 - x4;
                    if (x5 < 1 || x5 > n) continue;
                    for (int x6 = 1; x6 <= n; ++x6) {
                        for (int x7 = 1; x7 <= n; ++x7) {
                            for (int x8 = 1; x8 <= n; ++x8) {
                                int x9 = a + b + c + d - x6 - x7 - x8;
                                if (x9 < 1 || x9 > n) continue;
                                if (x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 == 4 * (a + b + c + d) / 3) {
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    cout << countSolutions(n, a, b, c, d) << endl;
    return 0;
}


// 方案2
#include <bits/stdc++.h>
using namespace std;
int main1(){
    long long n,a,b,c,d,x,y=INT_MAX;
    cin>>n>>a>>b>>c>>d;
    x=max(x,a+b);
    x=max(x,a+c);
    x=max(x,d+b);
    x=max(x,c+d);
    y=min(y,a+b-x);
    y=min(y,a+c-x);
    y=min(y,d+b-x);
    y=min(y,c+d-x);
    if((n+y)*n<=0){
        cout<<0;
    }else{
        cout<<(n+y)*n;
    }
    return 0;
}