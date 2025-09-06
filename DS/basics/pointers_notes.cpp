#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int *ptr = &a;        // Single pointer → stores address of 'a'
    int **new_ptr = &ptr; // Double pointer → stores address of 'ptr'

    // --- Demonstration ---
    cout << *ptr << endl;       // prints value of 'a' (1)
    cout << **new_ptr << endl;  // prints value of 'a' (1), via double pointer
    cout << ptr << endl;        // prints address of 'a'
    cout << new_ptr << endl;    // prints address of 'ptr'
    cout << &a << endl;         // prints address of 'a' (same as ptr)
    cout << &ptr << endl;       // prints address of 'ptr'
    cout << &new_ptr << endl;   // prints address of 'new_ptr'

    return 0;
}

/*
===========================
        POINTER NOTES
===========================

1. Pointer Basics
   - int *ptr → single pointer (points to a value).
   - int **new_ptr → double pointer (points to a pointer).
   - Higher levels are possible: int ***p3, int ****p4, etc.

2. Address vs Value
   - ptr → holds an address (of 'a').
   - *ptr → value stored at that address (value of 'a').
   - &ptr → address of the pointer variable itself.
   - **new_ptr → double dereference, still gives value of 'a'.

3. Memory Visualization
   Suppose:
       a = 1          [value: 1, address: 1000]
       ptr = &a       [value: 1000, address: 2000]
       new_ptr = &ptr [value: 2000, address: 3000]

   Then:
       *ptr = 1
       **new_ptr = 1
       ptr = 1000
       new_ptr = 2000
       &a = 1000
       &ptr = 2000

4. Why Double Pointers?
   - Dynamic memory allocation (malloc/calloc in C).
   - Representation of 2D arrays.
   - Passing pointer by reference (e.g., linked list head).

5. Common Mistakes
   - Using uninitialized pointers leads to undefined behavior (dangling pointers).
   - Always initialize pointers with a valid address or nullptr.

===========================
End of Notes
===========================
*/
