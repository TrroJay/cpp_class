//
// Created by 31227 on 2024/4/8.
//
#include "MyQueue.h"
#include "Mystack.h"

using namespace std;
using namespace A;

int pop();

extern int c;

MyQueue::MyQueue() {
    // TODO
}

// 元素从队尾入队
void MyQueue::push(char c) {
    // TODO
    my_stack.push(c);
}

// 队首元素出队，返回出队的元素（我们没有定义空队列pop操作，测试用例中不会涉及）
char MyQueue::pop() {
    char result;
    // TODO
    int size = my_stack.size();
    for (int i = 0; i < size - 1; ++i) {
        my_stack_copy.push(my_stack.pop());
    }
    result = my_stack.pop();
    for (int i = 0; i < size - 1; ++i) {
        my_stack.push(my_stack_copy.pop());
    }
    return result;
}

// 返回队列的大小（队列内元素的个数）
int MyQueue::size() {
    int result;
    // TODO
    result = my_stack.size();
    return result;
}


int main(void) {
    MyQueue q;
    q.push('N');
    q.push('J');
    q.push('U');
    cout << q.size() << endl; // 3
    cout << q.pop() << endl; // N
    cout << q.pop() << endl; // J
    cout << q.pop() << endl; // U
    cout << q.size() << endl; // 0
    return 0;
}