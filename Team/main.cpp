// Resolução do problema "Team"
// no site: https://codeforces.com/problemset/problem/401/C

#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    bool flag = true;
    scanf("%d %d", &n, &m);
    if((n <= m && (n+1)*2 >= m) || n==m+1){
        while(n > 0 || m > 0){
            if(m>=((n+1)*2) && flag){
                printf("11");
                flag = false;
                m-=2;
            }
            if(m>=n && flag){
                printf("1");
                m--;
                flag = false;
            }
            else{
                if(n>0)
                    printf("0");
                n--;
                flag = true;
            }
        }
        printf("\n");
    }
    else 
        printf("-1\n");
    return 0;
}