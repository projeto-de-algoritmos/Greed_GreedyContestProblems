// Resolução do problema "Watching a Movie"
// no site: https://codeforces.com/problemset/problem/499/AA
/*
A resolução desse problema baseia-se em somar a diferença do minuto final de cada cena boa com o minuto do começo de cada cena

*/

#include <bits/stdc++.h>
#define MAX 250
using namespace std;

int main()
{
  int n, x, l, r, film_start = 1;
  int vetorDeFinais[MAX], vetorDeComecos[MAX];
  scanf("%d %d", &n, &x);
  int test = n;
  int i = 0;
  int soma = 0;
  while (test--)
  {
    scanf("%d %d", &l, &r);
    vetorDeComecos[i] = l;
    vetorDeFinais[i] = r;
    soma += vetorDeFinais[i] - vetorDeComecos[i] + 1;
    i++;
  }
  int ondeEstamos = 1;
  for (int i = 0; i < n; i++)
  {
    soma += ((vetorDeComecos[i] - ondeEstamos) % x);
    ondeEstamos = vetorDeFinais[i] + 1;
  }
  printf("%d\n", soma);

  return 0;
}