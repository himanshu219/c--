#include<iostream>
using namespace std;

int main() {
    int a = 3;
    int *pointerA;
    int **pointerToPointer;

    pointerA = &a;
    pointerToPointer = &pointerA;

    cout << pointerA;
    cout << *pointerA; // 3
    cout << **pointerToPointer;
}