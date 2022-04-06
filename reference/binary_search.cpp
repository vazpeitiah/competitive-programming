#include <bits/stdc++.h>

using namespace std;

/* 
  Descripcion: Version recursiva de una busqueda binaria
  v: arreglo de elementos ordenados acendentemente
  l: indice a la izquierda
  r: indice a la derecha
  x: elemento a buscar

  Retorno: Si se encuentra al elemento x en v, se retorna el indice 
  del elemento x; en caso contrario -1
*/

int rb_search(vector<int> &v, int l, int r, int x) {
  if(l >= r) {
    if(v[l] == x) {
      return l;
    } else {
      return -1;
    }
  }

  if(v[(l+r)/2] == x) {
    return (l+r)/2;
  } else {
    if(v[(l+r)/2] > x) {
      return rb_search(v, l, (l+r) / 2 - 1, x);
    } else {
      return rb_search(v, (l+r) / 2 + 1, r, x);
    }
  }
}

/* Version iterativa de una busqueda binaria */

int ib_search(vector<int> &v, int x) {
  int l=0, r=v.size();
  
  while(l<r) {
    if(v[(l+r)/2] == x) {
      return (l+r)/2;
    } else if(x < v[(l+r)/2]) {
      r = (l+r) / 2 - 1;
    } else {
      l = (l+r) / 2 + 1;
    }
  }

  if(v[l] == x) {
    return l;
  } else {
    return -1;
  }
}

int lowerBound(vector<int> &array, int target) {
  // array should be sorted in non-decreasing
  // order from left to right
  int l = 0, r = array.size() - 1;
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (target <= array[m]) {
      r = m - 1;
    } else {
      l = m + 1;
    }
  }
  return l;
}

int upperBound(vector<int> &array, int target) {
  // array should be sorted in non-decreasing
  // order from left to right
  int l = 0, r = array.size() - 1;
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (target < array[m]) {
      r = m - 1;
    } else {
      l = m + 1;
    }
  }
  return l;
}

int main () {
  
  vector<int> arr;

  for(int i = 0; i<=10; i++) {
    arr.push_back(i);
    cout << arr[i] << " ";
  }

  cout << endl;

  cout << rb_search(arr, 0, arr.size(), 11) << endl;

  return 0;
}