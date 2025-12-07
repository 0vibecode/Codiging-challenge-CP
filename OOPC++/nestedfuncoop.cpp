#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void chk_bin(void); // nested member function (private)
public:
    void read();
    void complement();
    void display();
};
void binary::read()
{
    cout << "Enter a number " << endl;
    cin >> s;
}
void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect format" << endl;
            exit(0);
        }
    }
}
void binary::complement()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    cout << "Member of Nested function" << endl;
    binary b1;
    b1.read();
    b1.display();
    b1.complement();
    b1.display();
    return 0;
}