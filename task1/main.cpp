#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>

using namespace std;

void checkEqual(const string &left, const string &rigth)
{
    if ( left.length() != rigth.length() )
        throw runtime_error (left + " != " + rigth);
}

int main()
{

    try {
        checkEqual("Hello C++", "Hello C++");
        checkEqual("Hello C++", "Bey C++");
    } catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}

