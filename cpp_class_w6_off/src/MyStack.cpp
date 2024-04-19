#include "MyStack.h"


// 构造函数
MyStack::MyStack() {
    top = nullptr;
}


// 析构函数，你需要在这里归还额外申请的资源
MyStack::~MyStack() {
    Node *delete_temp = top;
    for (; top != nullptr;) {
        top = top->next;
        delete delete_temp;
    }
    delete delete_temp;
}

// 字符c入栈
void MyStack::push(char c) {
    Node *new_node = new Node;
    new_node->content = c;
    new_node->next = top;
    top = new_node;
}

// 栈顶元素出栈，返回出栈元素（我们没有定义空栈pop操作，测试用例中不会涉及）
char MyStack::pop() {
    char result = 0;
    result = top->content;
    Node *temp = top;
    top = top->next;
    delete temp;
    return result;
}

// 返回栈的大小（栈内元素数量）
int MyStack::size() {
    using namespace std;
    int result = 0;
    Node *count = top;
    for (; count != nullptr;) {
        count = count->next;
        result++;
    }
    int c = 3;
    cout << c << endl;
    ::pop();
    return result;
}


