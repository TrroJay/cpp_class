//
// Created by 31227 on 2024/4/18.
//

#ifndef CPP_CLASS_W8_IN_MAIN1_2_H
#define CPP_CLASS_W8_IN_MAIN1_2_H

#include<iostream>

class Complex {
    double real,imag;
public:
    Complex(){
        real=0;
        imag=1;
    }
    Complex(Complex& a){
        real=a.real;
        imag=a.imag;
    }
    void operator + (const Complex& x){
        //member function has a default "this" pointer to point the object
        real = real + x.real;
        imag = imag + x.imag;

    }

    Complex(Complex&& a){
        real=a.real;
        imag=a.imag;
    }
    friend Complex add(const Complex& x1,const Complex& x2) ;
    void print(){
        std::cout<<real<<std::endl<<imag<<std::endl;
    }
};


#endif //CPP_CLASS_W8_IN_MAIN1_2_H
