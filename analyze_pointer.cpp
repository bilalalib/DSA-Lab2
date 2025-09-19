#include <iostream>
using namespace std;

// Part 1: Function to analyze a pointer
void analyze_pointer(int *ptr) {
    cout << "Memory address stored in pointer: " << ptr << endl;
    cout << "Value at that memory location: " << *ptr << endl;
}

int main() {
    // Part 2(a): Stack allocation
    int iValue = 42;   // allocated on stack
    cout << "Analyzing stack-allocated int:" << endl;
    analyze_pointer(&iValue);

    cout << endl;

    // Part 2(b): Heap allocation
    int *hValue = new int;   // allocated on heap
    *hValue = 99;
    cout << "Analyzing heap-allocated int:" << endl;
    analyze_pointer(hValue);

    // Free heap memory
    delete hValue;

    return 0;
}
