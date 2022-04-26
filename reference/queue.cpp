#include <bits/stdc++.h>

#define MAX_SIZE 100000

using namespace std;

class Queue {
  private:
    int que[MAX_SIZE], front, rear;

  public:
    Queue() {
      front = -1;
      rear = -1;
    }

    bool empty() {
      if(front == -1) {
        return true;
      } else {
        return false;
      }
    }
  
    bool full() {
      if(front == 0 && rear == MAX_SIZE - 1) {
        return true;
      } else {
        return false;
      }
    }

    void push(int e) {
      if(!full()) {
        if(front == -1) front = 0;
        rear++;
        que[rear] = e;
      }
    }

    void pop() {
      if(!empty()) {
        
      }
    }
};

int main () {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}