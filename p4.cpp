/*Write a C++ program to demonstrate use of passing object as an argument.*/
//220130318026
//saija hetvi
#include <iostream>
using namespace std;
class MyClass
{
    private:
        int value;
    public:
    MyClass(int val) : value(val){}
    int getValue()
    {
        return value;
    }

};
void printValue(MyClass obj)
{
    cout<<"Value inside the object :: "<<obj.getValue()<<endl;
}

int main()
{
    MyClass myObject(38);

    printValue(myObject);

    return 0;
}
