#include <iostream>
#include "chain.h"
int main() {
    chain<int> test(10);
    test.insert(0,1);
    test.insert(1,18);
    std::cout<<test.get(1)<<std::endl;
    std::cout<<test.indexOf(1)<<std::endl;
    std::cout<<test.size()<<std::endl;
    return 0;
}
