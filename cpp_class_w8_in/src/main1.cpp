//
// Created by 31227 on 2024/4/17.
//
// MyList.cpp
#include "main1.h"

using namespace std;

// 构造函数
MyList::MyList() {
    head = NULL;
}

// 析构函数
MyList::~MyList() {
    while ( head != NULL ) {
        Node *n = head;
        head = head -> next;
        delete n;
    }
}

// 添加新的节点
void MyList::add(char c) {
    Node *n = new Node;
    if ( n == nullptr ) {
        cout << "Overflow\n";
        exit(-1);
    }
    else {
        n -> content = c;
        n -> next = nullptr;
        if ( head == nullptr ) {
            head = n;
        }
        else {
            Node *tail = head;
            while ( tail -> next != nullptr ) {
                tail = tail -> next;
            }
            tail -> next = n;
        }
    }
}

/* TODO:
 * 移除所有content等于c的节点，没有则不移除
 * 确保 head 仍是新链表的头部，且未删除节点的顺序保持一致
 * 输出移除的节点数量(number)
 */
void MyList::removeNode(char c) {
    int number = 0;
    /* TODO */
    if ( head == nullptr ) {
        cout << number << endl;
        return;
    }

    Node *tail = head;
    while ( tail != nullptr ) {
        if ( tail -> content == c ) {
            if ( tail == head ) {
                Node *d = tail;
                head = head -> next;
                tail = tail -> next;
                delete d;
            }
            else {
                Node *tail_before = head;
                while ( tail_before -> next != tail ) {
                    tail_before = tail_before -> next;
                }
                tail_before -> next = tail -> next;
                Node *d = tail;
                tail = tail -> next;
                delete d;
            }
            number++;
        }
        else {
            tail = tail -> next;
        }
    }
    /* TODO END */
    cout << number << endl;
}

// 从表头开始按加入顺序打印元素
void MyList::printList() {
    Node *n = head;
    while ( n != nullptr ) {
        cout << n -> content << " ";
        n = n -> next;
    }
    cout << endl;
}

int main() {
    MyList mylist;
    mylist . removeNode('A');
    // 移除2个含'J'的节点
    mylist . printList(); // 从头部遍历打印mylist
    return 0;
}