#include<iostream>
#include "lib_file.cpp"
#include"Adder/adder.cpp"
#include"variadicfun.cpp"
int main()
{
    std::cout<<"main file\n";
    display();
    add();
    int res =  sum(4,3,4,5,7); // here 4 =>count of varriable
   //  int r = sum(2,4,5,8,0);  here 0 => sentinel value is termination arg
    std::cout<< "variadic fun sum::"<<res;
    return 0;
}