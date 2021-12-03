#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, maxArea=-1, area, top;
    cin >> n;
    vector<int> arr(n);
    stack<int> stk;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (i = 0; i < n; i++) {
        //cout << arr[i] << '\n';
        if(stk.empty() || arr[i] >= arr[stk.top()]) {
            stk.push(i);
            //cout << "push " << i << '\n';
        } else {
            while(!stk.empty() && arr[i] < arr[stk.top()]) {
                top = stk.top();
                //cout << "remove " << top << '\n';
                stk.pop();
                if(stk.empty()) {
                    area = arr[top] * i;
                }else {
                    area = arr[top] * (i - stk.top() - 1);
                }
                //cout << "new area:" << area << '\n';
                maxArea = max(maxArea, area);
            }
            stk.push(i);
            //cout << "push " << i << '\n';
        }
    }
    
    while(!stk.empty()) {
        top = stk.top();
        stk.pop();
        if(stk.empty()) {
            area = arr[top] * i;
        }else {
            area = arr[top] * (i - stk.top() - 1);
        }
        maxArea = max(maxArea, area);
    }
    
    cout << maxArea << '\n';
    
    return 0;
}
