// Resolução do problema "C+="
// no site: https://codeforces.com/problemset/problem/1368/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, contador;
    int a, b, n;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        contador = 0;
        scanf("%d %d %d", &a, &b, &n);
        priority_queue<int> fila;
        fila.push(a);
        fila.push(b);
        // A resolução parte do pressuposto que é sempre melhor somar o maior elemento 
        // ao segundo maior elemento e ir seguindo até algum deles ser maior do que n.
        while (fila.top() <= n)
        {
            a = fila.top();
            fila.pop();
            b = fila.top();
            fila.pop();
            b+=a;
            fila.push(a);
            fila.push(b);
            contador++;
        }
        printf("%d\n", contador);
    }
    return 0;
}