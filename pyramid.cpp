#include <iostream>

int main() {
    int rows = 4;
    int num = 10;
    
    for (int i = 1; i <= rows; i++) {
        int currentNum = num - i + 1;
        
        for (int j = 1; j <= i; j++) {
            std::cout << currentNum << " ";
            num++;
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}

