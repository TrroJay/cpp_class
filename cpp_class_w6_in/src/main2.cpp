//
// Created by 31227 on 2024/4/3.
//


#include "../include/main2.h"
#include <assert.h>

Polynomial::Polynomial(const vector<int> &coefficients) {
    coefficients_ = coefficients;
}

Polynomial::Polynomial(const Polynomial &other) {
    this->coefficients_ = other.coefficients_;
}

Polynomial add(const Polynomial &p1, const Polynomial &p2) {
    size_t len1=p1.coefficients_.size();
    size_t len2=p2.coefficients_.size();
    size_t len=(len1<len2?len1:len2);
    Polynomial p;
    if(len1>=len2){
        for ( int i = 0; i <len1-len ; i++ ) {
            p.coefficients_.push_back(p1.coefficients_[i]);
        }
        for ( int i = len1-len; i <len1 ; i++) {
            p.coefficients_.push_back(p1.coefficients_[i]+p2.coefficients_[i-len1+len]);
        }
    }else{
        for ( int i = 0; i <len2-len; i++ ) {
            p.coefficients_.push_back(p2.coefficients_[i]);
        }
        for ( int i = len2-len; i<len2 ; i++) {
            p.coefficients_.push_back(p1.coefficients_[i-len2+len]+p2.coefficients_[i]);
        }
    }
    return p;
}

Polynomial derivate(const Polynomial &p) {
    Polynomial p1;
    size_t len=p.coefficients_.size();
    for ( int i = 0; i < len-1; ++i ) {
        p1.coefficients_.push_back(p.coefficients_[i]*(len-i-1));
    }
    return p1;
}

void Polynomial::output() const {
    size_t len=coefficients_.size();
    for ( size_t i = 0; i < len; ++i ) {
        if(coefficients_[i]!=0){
            cout<<coefficients_[i]<<"("<<len-i-1<<") ";
        }
    }
    cout<<endl;
}

int main(){
    Polynomial t({1, 1, 1}); // x^2 + x + 1
    derivate(t).output(); // 2x + 1
}