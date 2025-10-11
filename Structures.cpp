#include <iostream>

struct Rectangle
{
    int l;
    int b;
    
};

int main() {
    struct Rectangle r1={1,4};
        std::cout<<sizeof(r1)<<std::endl;
    std::cout<<r1.b<< " "<<r1.l<<std::endl;
    std::cout<< "the area is:"<<r1.b*r1.l<<std::endl;
    
    
    
        return 0;
}