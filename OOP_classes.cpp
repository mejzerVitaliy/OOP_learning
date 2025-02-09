#include <iostream>

class Numbers {
public:
    int first_num;
    int second_num;

    void set(int first, int second)
    {
        first_num = first;
        second_num = second;
    }

    void print()
    {
        std::cout << "Numbers(" << first_num << ", " << second_num << ")\n";
    }
};

int main()
{
    Numbers n1;
    n1.set(314, 341);
    
    Numbers n2{ 214, 442 };

    n1.print();
    n2.print();

    return 0;
}

// TASK 2 - Numbers have variables and methods, therefore we must using class instead of struct for tasks like this
