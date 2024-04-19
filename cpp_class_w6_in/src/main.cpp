#include "../include/main.h"

SmartPointer::SmartPointer(const SmartPointer &sptr)
{
    pointer=sptr.pointer;
    ref_cnt=sptr.ref_cnt;
    (*ref_cnt)++;
}

void SmartPointer::assign(const SmartPointer &sptr)
{
    if(pointer!= nullptr){
        (*ref_cnt)--;
        if(*ref_cnt==0){
            delete pointer;
            delete ref_cnt;
            ref_cnt= nullptr;
            pointer= nullptr;
        }
    }
    if(sptr.pointer== nullptr){
        pointer= nullptr;
        ref_cnt= nullptr;
        return;
    }
    pointer=sptr.pointer;
    ref_cnt=sptr.ref_cnt;
    (*ref_cnt)++;
}

SmartPointer::~SmartPointer()
{
    if(pointer== nullptr){
        return;
    }
    (*ref_cnt)--;
    if(*ref_cnt==0){
        delete pointer;
        delete ref_cnt;
        pointer= nullptr;
        ref_cnt= nullptr;
    }else{
        pointer= nullptr;
        ref_cnt= nullptr;
    }
}

int main(){
    SmartPointer sp1(new Node(123));
    SmartPointer* sp2=new SmartPointer(sp1);
    sp1.~SmartPointer();
    sp1.assign(SmartPointer());//测试空指针赋值
    sp1.assign(*(new SmartPointer(new Node(456))));
}
