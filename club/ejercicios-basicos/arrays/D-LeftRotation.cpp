#include <bits/stdc++.h>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    /*for (int i = 0; i < d; i++) {
        int aux;
        for (int j = 0; j < arr.size(); j++) {
            if(j == 0){ 
                aux = arr[j];
            }else {
                arr[j-1] = arr[j]; 
            }
        }
        arr[arr.size()-1] = aux;
    }*/
    vector<int> res(arr.size());
    for (int i = 0; i < arr.size(); i++) {
        int index;
        if(i - d < 0) {
            index = arr.size()+ i-d;
        } else { 
            index =i - d;
        }
        res[index] = arr[i];
    }
    return res;
}


int main() {
    int n, d;
    cin >> n >> d;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> res = rotateLeft(d, arr);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}