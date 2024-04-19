//
// Created by 31227 on 2024/4/18.
//

#include "main1_2.h"
using namespace std;

Complex add(const Complex &x1, const Complex &x2) {
    Complex temp;
    temp.real = x1.real + x2.real;
    temp.imag = x1.imag + x2.imag;
    return temp;
}

int main(void){
    Complex a;
    Complex b;
    a.print();
    a+b;
    a.print();

}