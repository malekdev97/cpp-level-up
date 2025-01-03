// header contain a functions, classes, and variables with extenstion .h or .hpp
// library is a complied code that has functions and classes with extension .lib, .a, .dll
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void printHello() {
    cout << "Hello, C++" << endl;
}

void increment(int* a) {
    *a = *a + 1;
}

int main() {

    std::cout << "Can you C me?" << std::endl;

    // types in c
    // int, float, double, char, void, bool, short, long, long long, unsigned, signed
    int myInt = 10; // 4 bytes integer is number without decimal
    float myFloat = 3.14f; // 4 bytes float is number with decimal
    double myDouble = 2.71828; // 8 bytes double is number with decimal
    char myChar = 'A'; // 1 byte char is single character
    bool myBool = true; // 1 byte bool is true or false
    short myShort = 5; // 2 bytes short is short integer
    long myLong = 1000000l; // 4 bytes long is long integer
    long long myLongLong = 10000000000ll; // 8 bytes long long is long long integer
    unsigned int myUnsigned = 0u; // 4 bytes unsigned is positive integer
    signed int mySigned = -1; // 4 bytes signed is negative or positive integer same as int

    // overflow example  
    int intMax = INT_MAX;
    cout << intMax << endl;
    intMax = intMax + 1;
    cout << intMax << endl;

    // underflow example
    int intMin = INT_MIN;
    cout << intMin << endl;
    intMin = intMin - 1;
    cout << intMin << endl;


    // c++ string
    string myString = "Hello, C++";
    cout << myString << endl;


    // vector/array
    int myArray[5] = {1, 2, 3, 4, 5};
    cout << myArray[0] << endl;


    // Jump statements
    // loop 
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << endl;
    }

    while(myInt > 0) {
        cout << myInt << endl;
        myInt--;
    }

    do {
        cout << myInt << endl;
        myInt++;
    } while (myInt < 10);

    // if else 
    if (myInt == 10) {
        cout << "myInt is 10" << endl;
    } else if (myInt == 9) {
        cout << "myInt is 9" << endl;
    } else {
        cout << "myInt is not 10 or 9" << endl;
    }

    // function 
    cout << add(1, 2) << endl;

    printHello();

    // pointer 
    int* myPointer = &myInt; // int* is pointer to integer and & is address of operator
    cout << myPointer << endl; // print address
    cout << *myPointer << endl; // print value at address
    cout << &myInt << endl; // print address
    cout << *&myPointer << endl; // print address
    cout << &*myPointer << endl; // print address

    // reference
    int& myReference = myInt; // int& is reference to integer
    cout << myReference << endl; // print value
    cout << &myReference << endl; // print address



    // namespace
    cout << "Can you C++ me?" << endl;

    int num = 1;
    increment(&num);
    cout << num << endl;

    // Dynamic memory allocation
    int* myDynamicArray = new int[5];
    myDynamicArray[0] = 1;
    myDynamicArray[1] = 2;
    myDynamicArray[2] = 3;
    myDynamicArray[3] = 4;
    myDynamicArray[4] = 5;
    cout << myDynamicArray[0] << endl;
    delete[] myDynamicArray;

    // union 
    union myUnion {
        int x;
        float y;
    };
    myUnion u;
    u.x = 10;
    cout << u.x << endl;
    cout << u.y << endl;

    // enum

    enum myEnum {
        RED,
        GREEN,
        BLUE
    };

    myEnum color = RED;
    cout << color << endl;
    

    return 0;
}



// Header
// The <boost/algorithm/string.hpp> header provides declarations for various string algorithms.

// Library
// The implementation of these string algorithms is provided by the Boost library, which you need to link to your program.

// Example Code
// #include <iostream>                // Header for input-output stream
// #include <boost/algorithm/string.hpp> // Header for Boost string algorithms

// int main() {
//     std::string text = "Boost Libraries";
//     boost::to_upper(text); // Using boost::to_upper from the Boost library

//     std::cout << text << std::endl; // Using std::cout from the <iostream> header

//     return 0;
// }




// Preprocessing:

// The preprocessor handles directives like #include and #define.
// It includes the contents of header files and processes macros.
// Compilation:

// The compiler translates the preprocessed code into assembly language.
// Each source file is compiled independently into an object file (.o or .obj).
// Assembly:

// The assembler converts the assembly code into machine code, producing object files.
// Linking:

// The linker combines object files and libraries into a single executable.
// It resolves references to functions and variables across different object files.
// Loading:

// The operating system loads the executable into memory.
// It sets up the runtime environment, including stack and heap.
// Execution:

// The CPU executes the machine code instructions.
// The program runs, performing its tasks until completion.
// Example Workflow
// Preprocessing:

// Compilation:

// Assembly:

// Linking:

// Loading:

// Execution:

