//
// Created by 31227 on 2024/4/17.
//

#include "main2.h"

using namespace std;

TimeParser::TimeParser(string s) {
    s1 = s.substr();
    const char* s2=s1.c_str();
    if ( strlen(s2)<8 ) {
        right = 0;
        return;
    }


    sH = s.substr(0, 2);
    sM = s.substr(3, 2);
    sS = s.substr(6, 2);
    num[0] = stoi(sH);
    num[1] = stoi(sM);
    num[2] = stoi(sS);

    if ( s1[2] != ':' || s1[5] != ':' ) {
        right = 0;
    }
    if ( num[0] > 23 || num[1] > 59 || num[2] > 59 ) {
        right = 0;
    }
    /* TODO */
}

int TimeParser::getHour() {
    /* TODO */
    if ( right == 1 ) {
        return num[0];
    }
    else {
        return -1;
    }

}

int TimeParser::getMin() {
    /* TODO */
    if ( right == 1 ) {
        return num[1];
    }
    else {
        return -1;
    }
}

int TimeParser::getSec() {
    /* TODO */
    if ( right == 1 ) {
        return num[2];
    }
    else {
        return -1;
    }
}

int main() {
    std::string s;
    std::cin >> s;
    TimeParser tp(s);
    std::cout << tp.getHour() << ' ';
    std::cout << tp.getMin() << ' ';
    std::cout << tp.getSec() << endl;
    return 0;
}