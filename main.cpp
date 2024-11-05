#include<iostream>
#include "lib_file.cpp"
#include"Adder/adder.cpp"
#include"variadicfun.cpp"
#include"variadictemplate.cpp"
int main()
{
    std::cout<<"main file\n";
    display();
    add();
    int res =  sum(4,3,4,5,7); // here 4 =>count of varriable
   //  int r = sum(2,4,5,8,0);  here 0 => sentinel value is termination arg
    std::cout<< "variadic fun sum::"<<res <<"\n";
    std::cout << "variadic template sum: " << sumtemplate(1, 2, 3, 4) << std::endl;  // Outputs: Sum: 10
    return 0;
}