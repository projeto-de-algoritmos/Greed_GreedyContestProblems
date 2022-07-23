// Resolução do problema "Assigning to Classes"
// no site: https://codeforces.com/problemset/problem/1300/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T, n, s;
  scanf("%d", &T);

  for (int i = 0; i < T; i++)
  {
    vector<int> turma1;
    vector<int> turma2;
    priority_queue<int> fila;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; i++)
    {
      scanf("%d", &s);
      fila.push(s);
    }

    if (n % 2 == 0)
    {
      auto top = fila.top();
      fila.pop();
      turma1.push_back(top);
    }
    while (!fila.empty())
    {
      auto top = fila.top();
      fila.pop();
      turma1.push_back(top);
      if (fila.empty())
        break;
      top = fila.top();
      fila.pop();
      turma2.push_back(top);
    }

    int med1;
    int med2;
    if (turma1.size() % 2 == 0)
    {
      med1 = turma1[turma1.size() / 2] + turma1[turma1.size() / 2 - 1];
      med1 /= 2;
    }
    else
    {
      med1 = turma1[turma1.size() / 2];
    }

    if (turma2.size() % 2 == 0)
    {
      med2 = turma2[turma2.size() / 2] + turma2[turma2.size() / 2 - 1];
      med2 /= 2;
    }
    else
    {
      med2 = turma2[turma2.size() / 2];
    }
    int a, b;
    if (med1 > med2)
    {
      a = med1;
      b = med2;
    }
    else
    {
      a = med2;
      b = med1;
    }

    int result = a - b;
    cout << result << endl;
  }
}