#include<iostream>
using namespace std;

// Example of reverse array without change the memory address in variable

int main() {
    // Create a new variable array
    int student[] = {1, 2, 3};

    // Create pointer array
    int *studentPointer[3];
    // Pointer to pointer array
    int **pointerToPointer[3];
    
    int i, j;

    // Pointer have sequence order of memory address of student
    for(i=0; i < 3; i++) {
        cout << student[i];
        studentPointer[i] = &student[i];
    }

    cout << "\n";


    // Reverse
    for(i=0, j=2; i < 3; i++, j--) {
        pointerToPointer[j] = &studentPointer[i];
    }

    // Showing result
    for(i=0; i < 3; i++) {
        cout << **pointerToPointer[i];
    }

    return 0;
}