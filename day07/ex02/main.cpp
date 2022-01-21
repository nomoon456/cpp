#include "Array.hpp"
#include <string>

int main() {
    Array<int> arrOfInt; //TEST FOR INTS
    try {
        arrOfInt[0] = 10;
    } catch (std::exception &e) {
        std::cout << "Index out of range" << std::endl;
    }

    Array<float> arrOfFloats(10); //TEST FOR FLOATS
    int size = arrOfFloats.size();
    for (int i = 0; i < size; ++i)
        arrOfFloats[i] = static_cast<float>(i) * 2;
    std::cout << arrOfFloats << std::endl;

    Array<std::string> arrOfStrings(5); //TEST FOR STRING
    arrOfStrings[0] = "ab";
    arrOfStrings[1] = " cd";
    arrOfStrings[2] = " ef";
    arrOfStrings[3] = " ghagagas";
    arrOfStrings[4] = " ihaihahi.";
    std::cout << arrOfStrings << std::endl;

    arrOfStrings[22] = " hhhh";
    std::cout << arrOfStrings << std::endl;
    return 0;
}
