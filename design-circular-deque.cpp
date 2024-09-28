#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class NODE {
public:
  int val;
  NODE *next;
  NODE *prev;
  NODE(int val) : val(val), next(nullptr), prev(nullptr) {}
};

class MyCircularDeque {
  NODE *rear;
  NODE *front;
  int dequeSize = 0;
  int MAXSIZE;
public:
  MyCircularDeque(int k) {
    MAXSIZE = k;
  }

  bool insertFront(int value) {
    if (dequeSize == MAXSIZE) return false;
    NODE *node = new NODE (value);
    if (dequeSize == 0) {
      rear = node;
      front = rear;
    }
    else {
      front->next = node;
      node->prev = front;
      front = node;
    }
    dequeSize++;
    return true;
  }

  bool insertLast(int value) {
    if (dequeSize == MAXSIZE) return false;
    NODE *node = new NODE (value);
    if (dequeSize == 0) {
      rear = node;
      front = rear;
    }
    else {
      rear->prev = node;
      node->next = rear;
      rear = node;
    }
    dequeSize++;
    return true;
  }

  bool deleteFront() {
    if (dequeSize == 0) return false;
    if (dequeSize == 1) {
      front = nullptr;
      rear = nullptr;
    }
    else {
      front = front->prev;
      front->next = nullptr;
    }
    dequeSize--;
    return true;
  }

  bool deleteLast() {
    if (dequeSize == 0) return false;
    if (dequeSize == 1) {
      front = nullptr;
      rear = nullptr;
    }
    else {
      rear = rear->next;
      rear->prev = nullptr;
    }
    dequeSize--;
    return true;
  }
      
  int getFront() {
    if (dequeSize == 0) return -1;
    return front->val;
  }
      
  int getRear() {
    if (dequeSize == 0) return -1;
    return rear->val;
  }
      
  bool isEmpty() {
    return !dequeSize;
  }
      
  bool isFull() {
    return (dequeSize == MAXSIZE);
  }
};