// learningFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value)

    std::cout << "double the value is: " << value * 2 << '\n';

int main()
{
    int num{ getValueFromUser () };

    printDouble(num);

    return 0;
}
*/

#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int myNum{};
    std::cin >> myNum;

    return myNum;
}
    
void doubleValue(int extValue) //extValue is the extracted Value from Keyboard input by the user
{
    std::cout<< extValue << " doubled is: " << extValue * 2 << '\n';

}

int main()
{
    doubleValue(getValueFromUser());

    return 0;
}

