// Resolução do problema "Dinner with Emma"
// no site: https://codeforces.com/problemset/problem/616/B

/*A resolução desse problema parte de uma interpretação de seu enunciado:
Emma quer maximizar o custo, Jack quer minimizá-lo e que Emma sabe das intenções de Jack,
a partir disso, podemos inferir que a Emma sempre vai escolher a rua cujo o menor elemento
é o maior se comparado com o menor elemento de qualquer outra rua. E que Jack vai só escolher
o menor elemento da rua.

Seguindo o texto acima temos que pode-se colocar, para cada rua, os elementos numa fila de prioridades que vai do menor para o maior,
colocar o elemento do topo numa fila de prioridades que vai do maior para o menor, e então imprimir o valor do topo.

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c;
    priority_queue<int> maiorDosMenores;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        priority_queue<int, vector<int>, greater<int>> menorDaRua;
        for(int j=0; j<m; j++)
        {
            scanf("%d", &c);
            menorDaRua.push(c);
        }
        maiorDosMenores.push(menorDaRua.top());
    }
    printf("%d\n", maiorDosMenores.top());
    return 0;
}