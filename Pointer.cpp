// this var. are store in a block of HEAP>>STACK>>MAIN>>CODESECTION

//int a=10;
//int *p;
//p=&a;
//
//std::cout<<a;       result:10
//std::cout<<*p;      result:10
//
//std::cout<<p;       result:random address
//std::cout<<&a;      result:random address

//NOTE: When you will use malloc(),then only you will get memory in HEAP.(#include<stdlib.h>)
//#include<stdlib.h>
//int main(){
//int *p;              //p is allocated in MAIN memory
//in C
//p=(int *)malloc(5* sizeof(int)); //now this line will allocate HEAP memory,p will get                                        // address from heap memory

//in C++
//p=new int[5];  //now this line will allocate HEAP memory,p will get address from heap memory
//for deleting memory for arrays
//delete []p;
//free(p);
//}
#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
    
    int a=10;
    int *p;
    p=&a; //in array u just write p=A;
    
    std::cout<<"the address"<<a<<std::endl;
    return 0;
}
