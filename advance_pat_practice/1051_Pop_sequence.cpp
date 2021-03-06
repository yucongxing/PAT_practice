#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
using namespace std;

int main(){

    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    for(int i=0;i<k;i++){
        stack<int> s;
        vector<int> a(n+1);
        for(int j=1;j<=n;j++){
            scanf("%d",&a[j]);
        }
        int now=1;
        for(int j=1;j<=n;j++){
            s.push(j);
            if(s.size()>m) break;
            while(!s.empty() && s.top()==a[now]){
                s.pop();
                now++;
            }
        }
        if(now==n+1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
