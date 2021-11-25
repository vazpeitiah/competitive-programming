#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ele;
    bool flag;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = n-1; i >= 0; i--) {
        flag = true;
        if(ele.size() == 0) {
            ele.push_back(arr[i]);
        } else{
            for (int j = 0; j < ele.size(); j++) {
                if(arr[i] == ele[j]){
                    flag = false;
                }
            }
            
            if(flag) {
                ele.push_back(arr[i]);
            }
        }
    }
    
    cout << ele.size() << "\n";
    for (int i = ele.size()-1; i >= 0; i--) {
        cout << ele[i] << " ";
    }
    cout << "\n";
    
    

    return 0;
}
