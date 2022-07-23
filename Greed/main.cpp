// Resolução do problema "Greed"
// no site: https://codeforces.com/problemset/problem/892/A 

/*
A resolução desse problema é bem simples:
Somamos a quantidade de bebida sobrando e depois colocamos o tamanho de cada lata numa fila de prioridades do maior para o menor
comparamos a soma dos dois valores do topo da fila com a soma da quantidade de bebida sobrando
se a soma dos dois valores do topo for maior ou igual a soma da quantidade de bebida sobrando, imprimimos "YES"
caso contrário, imprimimos "NO"
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, contador=0, a, somaDasMaiores;
    
    priority_queue<long long int> soQueroAsDuasMaiores;
    
    scanf("%lld", &n);
    for(int i=0; i<n; i++){
        scanf("%lld", &a);
        contador+=a;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a);
        soQueroAsDuasMaiores.push(a);
    }
    somaDasMaiores = soQueroAsDuasMaiores.top();
    soQueroAsDuasMaiores.pop();
    somaDasMaiores+=soQueroAsDuasMaiores.top();
    if(somaDasMaiores < contador){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}