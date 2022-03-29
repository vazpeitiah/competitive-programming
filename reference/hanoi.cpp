#include <bits/stdc++.h>

using namespace std;

/* Funcion para demostrar la solucion a las torres de hanoi para n discos en 3 postes */

void hanoi_print(int n, char x, char y, char z) {
  if(n==1) {
    printf("Mueve %d de %c -> %c\n", n, x, y); /* Mueve el disco n de A -> C */
  } else {
    hanoi_print(n-1, x, z, y); /* Mueve los n-1 discos de A -> B */
    printf("Mueve %d de %c -> %c\n", n, x, y);
    hanoi_print(n-1, z, y, x); /* Mueve los n-1 discos de B -> C */
  }
}

/* Calcular el numero de movimientos de hanoi para n */

int hanoi_movs(int n) {
  if(n==1) {
    return 1;
  } else {
    return hanoi_movs(n-1) * 2 + 1;
  }
}

/* Puede demostrarse que hanoi(n) = 2^n - 1 */

long long hanoi(int n) {
  return pow(2, n) - 1;
} 

int main () {
  int n; cin >> n;
  cout << hanoi(n) << endl;
  return 0;
}