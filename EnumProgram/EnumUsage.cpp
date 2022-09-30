#include <iostream>
using namespace std;

enum Grade
{
    A,
    B,
    C,
    D,
    F
};

int main()
{
    Grade g = static_cast<Grade>(2);
    cout << g << endl;
    return 0;
}