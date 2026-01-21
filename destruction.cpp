#include <iostream>

using namespace std;

class rectangle
{
    static int count; // static member to keep track of number of objects
public:
    rectangle()
    {
        count++;
        cout << "Creating a rectangle object. Total count: " << count << endl;
    }
    ~rectangle()
    {
        count--;
        cout << "Destroying a rectangle object. Remaining count: " << count << endl;
    }
    static int getCount()
    {
        return count;
    }
};

int rectangle::count = 0; // initialize static member

int main()
{
    cout << "\n enter main" << endl;
    rectangle a1, a2, a3, a4;
    {
        cout << "\n enter block" << endl;
        rectangle a5;
    }
    
    {
        cout << "\n Enter block 2" << endl;

        rectangle a6;
    }

    cout << "\n re-enter main" << endl;
    return 0;
}
