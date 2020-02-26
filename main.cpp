/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 3) implement the appropriate action in the member function. 
         Be aware that floating point division by 0 is legal, but integer division by 0 will crash your program.  
         Handle this possible input when you write your divide() functions.
 
 4) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 5) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 6) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 7) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */
#include <iostream>

struct floatType
{
    float add ( float lhs, float rhs );
    float subtract ( float lhs, float rhs );
    float multiply ( float lhs, float rhs );
    float divide ( float lhs, float rhs );
};

float floatType::add ( float lhs, float rhs )
{
    return lhs + rhs;
}

float floatType::subtract ( float lhs, float rhs )
{
    return lhs - rhs;
}

float floatType::multiply ( float lhs, float rhs )
{
    return lhs * rhs;
}

float floatType::divide ( float lhs, float rhs )
{
    return lhs / rhs;
}

struct doubleType
{
    double add ( double lhs, double rhs );
    double subtract ( double lhs, double rhs );
    double multiply ( double lhs, double rhs );
    double divide ( double lhs, double rhs );
};

double doubleType::add ( double lhs, double rhs )
{
    return lhs + rhs;
}

double doubleType::subtract ( double lhs, double rhs )
{
    return lhs - rhs;
}

double doubleType::multiply ( double lhs, double rhs )
{
    return lhs * rhs;
}

double doubleType::divide ( double lhs, double rhs )
{
    return lhs / rhs;
}

struct intType
{
    int add ( int lhs, int rhs );
    int subtract ( int lhs, int rhs );
    int multiply ( int lhs, int rhs );
    int divide ( int lhs, int rhs );
};

int intType::add ( int lhs, int rhs )
{
    return lhs + rhs;
}

int intType::subtract ( int lhs, int rhs )
{
    return lhs - rhs;
}

int intType::multiply ( int lhs, int rhs )
{
    return lhs * rhs;
}

int intType::divide ( int lhs, int rhs )
{
    if ( rhs != 0 )
        return lhs / rhs;

    std::cout << "can't divide integer by zero!";
    return 0;    
}

int main()
{
    floatType ft;
    float floatParamLHS = 13.6f;
    float floatParamRHS = 22.9f;

    doubleType dt;
    double doubleParamLHS = 42.673;
    double doubleParamRHS = 3.72;

    intType it;
    int intParamLHS = 48;
    int intParamRHS = 16;

    std::cout << "Result of ft.add() is " << ft.add ( floatParamLHS, floatParamRHS ) << std::endl;
    std::cout << "Result of ft.subtract is " << ft.subtract ( floatParamLHS, floatParamRHS ) << std::endl;
    std::cout << "Result of ft.multiply() is " << ft.multiply ( floatParamLHS, floatParamRHS ) << std::endl;
    std::cout << "Result of ft.divide() is " << ft.divide ( floatParamLHS, floatParamRHS ) << std::endl;

    std::cout << "Result of dt.add() is " << dt.add ( doubleParamLHS, doubleParamRHS ) << std::endl;
    std::cout << "Result of dt.subtract is " << dt.subtract ( doubleParamLHS, doubleParamRHS ) << std::endl;
    std::cout << "Result of dt.multiply() is " << dt.multiply ( doubleParamLHS, doubleParamRHS ) << std::endl;
    std::cout << "Result of dt.divide() is " << dt.divide ( doubleParamLHS, doubleParamRHS ) << std::endl;

    std::cout << "Result of it.add() is " << it.add ( intParamLHS, intParamRHS ) << std::endl;
    std::cout << "Result of it.subtract is " << it.subtract ( intParamLHS, intParamRHS ) << std::endl;
    std::cout << "Result of it.multiply() is " << it.multiply ( intParamLHS, intParamRHS ) << std::endl;
    std::cout << "Result of it.divide() is " << it.divide ( intParamLHS, intParamRHS ) << std::endl;

    std::cout << "good to go!" << std::endl;
}
