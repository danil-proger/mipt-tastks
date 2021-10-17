#include <iostream>
#include "arithmetcs.h"
 
void Panic(int result_sum, int result_mul) {
    std::cout << "Unexpected result: " << result_sum << " " << result_mul;
}
 
void PrintSuccess() {
    std::cout << "Ok!" << std::endl;
}
 
int main() {
    int a, b;
    std::cin >> a >> b;
    int result_sum = sum(a, b), result_mul = mul(a, b);
    if (result_sum == a + b && result_mul == a * b) {
        PrintSuccess();
    } else {
        Panic(result_sum, result_mul);
    }
 
    return 0;
}
