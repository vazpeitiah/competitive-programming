#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    int hourglassX[3] = {-1, 0, 1};
    int hourglassY[3] = {-1, 0, 1};

    int maxSum = -63;
    int aux = 0;
    for (int i=0; i<4; i++) {
        hourglassY[0]++; hourglassY[1]++; hourglassY[2]++;
        for (int j=0; j<4; j++) {
            hourglassX[0]++; hourglassX[1]++; hourglassX[2]++; 
            int sumTop = arr[hourglassX[0]][hourglassY[0]]
                + arr[hourglassX[0]][hourglassY[1]]
                + arr[hourglassX[0]][hourglassY[2]]; 
        
            int sumCenter = arr[hourglassX[1]][hourglassY[1]];
            
            int sumBotton = arr[hourglassX[2]][hourglassY[0]]
                    + arr[hourglassX[2]][hourglassY[1]]
                    + arr[hourglassX[2]][hourglassY[2]];
                    
            aux = sumTop + sumCenter + sumBotton;
            if(aux > maxSum){
                maxSum = aux;
            }   
        }
        hourglassX[0] = -1; hourglassX[1] = 0; hourglassX[2] = 1;
    }
    return maxSum;
}


int main() {
    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }

    int result = hourglassSum(arr);

    cout << result << "\n";
    return 0;
}