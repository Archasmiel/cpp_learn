#include <iostream>

int main() {

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    std::string temp;
    for (int i = 0 ; i < size ; i++) {
        std::cout << "Enter food for index=" << i << ": (q=exit) ";
        std::getline(std::cin, temp);
        if (temp == "q") {
            break;
        }
        foods[i] = temp;
    }

    for (int i = 0 ; !foods[i].empty() ; i++) {
        std::cout << "Food with index=" << i << ": " << foods[i] << "\n";
    }

    return 0;
}