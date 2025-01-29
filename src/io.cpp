#include<iostream>
#include"../include/header.h"

int readNumber()
{
    int n;
    std::cin>>n;
    return n;
}

namespace BasicMath {
    void writeAnswer(int n1,int n2)
    {
        std::cout<<n1+n2<<"\n";
    }

    int add(int x,int y)
    {
        return x-y;
    }
}
