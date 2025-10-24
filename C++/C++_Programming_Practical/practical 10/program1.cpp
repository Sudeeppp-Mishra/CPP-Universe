/*
    WAP to input any string from user, write that string in a file. Write another input to the same file. Read the whole written string from the file and
    display it in the console.
*/

#include <iostream>
#include <stdexcept>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("First.txt", ios::out);

    if (!file)
    {
        cerr << "Unable to create file!";
        return 1;
    }

    else
    {
        cout << "Enter the string you wanna write:";
        string s;
        getline(cin, s);
        file << s;
        file.close();
    }

    file.open("First.txt", ios::app);

    if(!file)
    {
        cerr<<"Unable to open file!";
        return 3;
    }

    else
    {
        cout<<"Enter another string:";
        string s1;
        getline(cin, s1);
        file<<s1;
        file.close();
    }

    file.open("First.txt", ios::in);

    if (!file)
    {
        cerr << "Unable to open file!";
        return 2;
    }

    else
    {
        string n;

        while (getline(file, n))
        {
            cout << endl
                 << n;
        }
        file.close();
    }
}