#include <iostream>
using namespace std;
int x=10;
void myfunction()
{
    int x=20;
}
main()
{
    cout << "value of x is:"<< x <<endl;
    myfunction();
}