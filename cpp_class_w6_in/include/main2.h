//
// Created by 31227 on 2024/4/3.
//

#ifndef CPP_IN_CLASS_WEEK6_MAIN2_H
#define CPP_IN_CLASS_WEEK6_MAIN2_H

#include <iostream>
#include <vector>
using namespace std;

// ATTENTION: you should not modify any of the following interfaces
class Polynomial {
    friend Polynomial add(const Polynomial &p1, const Polynomial &p2);
    friend Polynomial derivate(const Polynomial &p);

public:
    Polynomial() {}

    explicit Polynomial(const vector<int> &coefficients);
    Polynomial(const Polynomial &other);

public:
    void output() const;

private:
    vector<int> coefficients_; // bonus: maybe more efficient data structures?
    // TODO: add any members if you want
};


#endif //CPP_IN_CLASS_WEEK6_MAIN2_H
