#include <iostream>

int main() {
    int v,t;
    std::cin >> v >> t;
    int s =v*t%109;
    int k=(109+s)%109;
    std::cout <<k;    
    return 0;
}