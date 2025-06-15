#include<bits/stdc++.h>
long long em[1001][1001];
long long sum[1001][1001];
int main()
{
    long long a,b,c;
    std::cin>>a>>b>>c;
    for(long long y=1;y<a+1;y+=1)
    {
        for(long long d=1;d<b+1;d+=1)
        {
            std::cin>>em[y][d];
            sum[y][d]=em[y][d]-sum[y-1][d-1]+sum[y-1][d]+sum[y][d-1];
        }
    }
    for(long long r=1;r<c+1;r+=1)
    {
        long long x1,y1,x2,y2;
        std::cin>>x1>>y1>>x2>>y2;
        std::cout<<sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1]<<"\n";
    }
    return 0;
}