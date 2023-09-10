#include <iostream>

/*
 * Integral (whole number) data types in C++
 *
 * char
 * short
 * int
 * long
 * short int
 * long int
 * bool
 * unsigned char
 * unsigned short
 * unsigned int
 * unsigned long
 *
 * If you use a constant whole number literal, such as 12, C++ will declare it as an int by default.
 */

/*
 * Floating-point (real number) data types in C++
 *
 * float
 * double
 * long double
 *
 * If you use a constant floating-point literal, such as 12.25, C++ will declare it as a double by default.
 */

/*
 * In C++, when you display the value stored in a bool,
 *   1 is displayed if truthy
 *   0 is displayed if falsy
 * Some older compilers do not support the bool data type.
 */

int main() {

    /* Integral (whole number) data types */
    char aChar = 'a';
    short aShort = 1;
    int anInt = 5;
    long aLong = 10000;
    short int aShortInt = 2;
    long int aLongInt = 100000;
    bool aBool = true;
    unsigned char anUnsignedChar = 'b';
    unsigned short anUnsignedShort = 100;
    unsigned int anUnsignedInt = 1000000;
    unsigned long anUnsignedLong = 100000000;
    std::cout << "Integral (whole number) data types" << std::endl;
    std::cout << "===================================" << std::endl;
    std::cout << "char aChar == " << aChar << std::endl;
    std::cout << "short aShort == " << aShort << std::endl;
    std::cout << "int anInt == " << anInt << std::endl;
    std::cout << "long aLong == " << aLong << std::endl;
    std::cout << "short int aShortInt == " << aShortInt << std::endl;
    std::cout << "long int aLongInt == " << aLongInt << std::endl;
    std::cout << "bool aBool == " << aBool << std::endl;
    std::cout << "unsigned char anUnsignedChar == " << anUnsignedChar << std::endl;
    std::cout << "unsigned short anUnsignedShort == " << anUnsignedShort << std::endl;
    std::cout << "unsigned int anUnsignedInt == " << anUnsignedInt << std::endl;
    std::cout << "unsigned long anUnsignedLong == " << anUnsignedLong << std::endl;

    std::cout << std::endl;

    /* Floating-point (real number) data types */
    float aFloat = 1.2;
    double aDouble = 123.45;
    long double aLongDouble = 10000000.34;
    std::cout << "Floating-point (real number) data types" << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "float aFloat == " << aFloat << std::endl;
    std::cout << "double aDouble == " << aDouble << std::endl;
    std::cout << "long double aLongDouble == " << aLongDouble << std::endl;

    std::cout << std::endl;

    /* Integral (whole number) data type sizes (in bytes) */
    std::cout << "Integral (whole number) data type sizes (in bytes)" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "`char` size is " << sizeof(char) << " on this computer" << std::endl;
    std::cout << "`short` size is " << sizeof(short) << " on this computer" << std::endl;
    std::cout << "`int` size is " << sizeof(int) << " on this computer" << std::endl;
    std::cout << "`long` size is " << sizeof(long) << " on this computer" << std::endl;
    std::cout << "`short int` size is " << sizeof(short int) << " on this computer" << std::endl;
    std::cout << "`long int` size is " << sizeof(long int) << " on this computer" << std::endl;
    std::cout << "`bool` size is " << sizeof(bool) << " on this computer" << std::endl;
    std::cout << "`unsigned char` size is " << sizeof(unsigned char) << " on this computer" << std::endl;
    std::cout << "`unsigned short` size is " << sizeof(unsigned short) << " on this computer" << std::endl;
    std::cout << "`unsigned int` size is " << sizeof(unsigned int) << " on this computer" << std::endl;
    std::cout << "`unsigned long` size is " << sizeof(unsigned long) << " on this computer" << std::endl;

    std::cout << std::endl;

    /* Floating-point (real number) data type sizes (in bytes) */
    std::cout << "Floating-point (real number) data type sizes (in bytes)" << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << "`float` size is " << sizeof(float) << " on this computer" << std::endl;
    std::cout << "`double` size is " << sizeof(double) << " on this computer" << std::endl;
    std::cout << "`long double` size is " << sizeof(long double) << " on this computer" << std::endl;

    std::cout << std::endl;

    return 0;

}
