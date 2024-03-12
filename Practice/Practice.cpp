#include <iostream>
#include "Helper.h"

int main()
{
    int a, b;
    std::cout << "Please enter integer A: ";
    std::cin >> a;
    std::cout << "Please enter integer B: ";
    std::cin >> b;
    std::cout << "Square of the sum A and B = " << sumSquare(a, b) << std::endl;
    return 0;
}
