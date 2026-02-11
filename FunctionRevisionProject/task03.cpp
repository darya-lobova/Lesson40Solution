// Задание 3: Вызовите функцию `print_сhar_and_string` в `main`.

#include <iostream>
using namespace std;

string print_сhar_and_string(char symbol, string text)
{
    cout << symbol << ": " << text;
}

int main()
{

    cout << print_сhar_and_string('$', "dollars");
    return 0;
}