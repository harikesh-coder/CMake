#include <iostream>

// Base case: When only one argument is left
int sumtemplate(int a) {
    return a;
}

// Recursive variadic function
template<typename... Args>
int sumtemplate(int a, Args... args) {
    return a + sumtemplate(args...);  // Recurse by calling sum on the remaining arguments
}
/*
int main() {
    std::cout << "Sum: " << sum(1, 2, 3, 4) << std::endl;  // Outputs: Sum: 10
    return 0;
}
*/