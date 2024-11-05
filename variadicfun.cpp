#include<iostream>
#include<stdarg.h>

int sum(int a,...)
{
    int result =0;
va_list lst;
va_start(lst,a);
while(a>0)
{
    int next = va_arg(lst,int);
    
    result = result+next;
  a--;
}
va_end(lst);
return result;
}
/*
int main()
{
    int res =  sum(4,3,4,5,7); // here 4 =>count of varriable
   //  int r = sum(2,4,5,8,0);  here 0 => sentinel value is termination arg
    std::cout<<res;
    return 0;
}
*/