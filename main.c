/***
 * 
 * STEP 1: Compiling C program
 * comipler by using: gcc, clang, msvs, etc...
 * example using gcc to compile c language
 * gcc -c main.c -o main.o
 * gcc is the GNU Compiler Collection
 * -c flag tells the compiler to compile the source code without linking
 * main.c is the source file
 * -o main.o specifies the output file name
 * the final output is an object file named main.o
 * 
 * STEP 2: Linking object files to create an executable program 
 * gcc main.o -o main
 * main.o is the object file generated in the previous step
 * -o main specifies the output file name
 * the final output is an executable program named main.ext in windows
 * 
 */

#include <stdio.h>

int getBirthYear(int age) {
    return 2024 - age;
}


int main() {

    printf("Hello, C\n");

    int age;
    scanf("%d", &age);

    int birthYear = getBirthYear(age);
    printf("Your birth year is %d\n", birthYear);

    return 0;

}
