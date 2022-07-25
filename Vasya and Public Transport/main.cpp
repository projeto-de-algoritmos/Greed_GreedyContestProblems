// Resolução do problema "Vasya and Public Transport"
// no site: https://codeforces.com/problemset/problem/355/B

#include <bits/stdc++.h>
using namespace std;
int main(){
    int c1, c2, c3, c4, n, m;
    scanf("%d %d %d %d", &c1, &c2, &c3, &c4);
    scanf("%d %d", &n, &m);
    int custoDeOnibus=0, custoDeBonde=0, qtdOnibus, qtdBonde;
    for(int i=0; i<n; i++){
        scanf("%d", &qtdOnibus);
        if(qtdOnibus*c1 < c2)
            custoDeOnibus+= (qtdOnibus*c1);
        else
            custoDeOnibus+=c2;
    }
    for(int i=0; i<m; i++){
        scanf("%d", &qtdBonde);
        if(qtdBonde*c1 < c2)
            custoDeBonde+= (qtdBonde*c1);
        else
            custoDeBonde+=c2;
    }
    priority_queue<int, vector<int>, greater<int>> soQueroOTopo;
    soQueroOTopo.push(c4);
    soQueroOTopo.push(custoDeBonde+c3);
    soQueroOTopo.push(custoDeOnibus+c3);
    soQueroOTopo.push(2*c3);
    soQueroOTopo.push(custoDeBonde+custoDeOnibus);
    printf("%d\n", soQueroOTopo.top());
    return 0;
}