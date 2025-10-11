#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &p=a; //reference variable
    //reference variable must be initialized during declaration
    //after initialization u cant change the reference variable to another variable
    p++;
    std::cout<<a<<std::endl;
    return 0;
}