// Resolução do problema "Tanya and Toys"
// no site: https://codeforces.com/problemset/problem/659/C

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, paraLeitura;
    scanf("%d %d", &n, &m);
    set< int> jaTem;
    vector< int> novosBrinquedos;
    for( int i=0; i<n; i++){
        scanf("%d", &paraLeitura);
        jaTem.insert(paraLeitura);    
    }
    for( int j=1; j<=m; j++){
        if(jaTem.count(j) == 0){
            novosBrinquedos.push_back(j);
            m-=j;
        }
    }
    printf("%d\n", novosBrinquedos.size());
    if(novosBrinquedos.size()>0){
        for( int i =0; i<novosBrinquedos.size()-1; i++){
            printf("%d ", novosBrinquedos[i]);
        }
        printf("%d\n", novosBrinquedos[novosBrinquedos.size()-1]);
    }
    return 0;
}