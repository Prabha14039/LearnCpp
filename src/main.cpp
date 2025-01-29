#include"../include/header.h"
#include<iostream>

int main()

{
   int int1 { readNumber() };
   int int2 { readNumber() };
   int x2 {BasicMath::add(int1,int2)};
   std::cout<<x2<<std::endl;
   BasicMath::writeAnswer(int1,int2);
}


