/*
    WAP to input any string from user, write that string in a file. Write another input to the same file. Read the whole written string from the file and
    display it in the console.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("RW.txt",ios::out);
    string s;
    if(!file)
    {
        cerr<<"Unable to create or open file!";
        return 1;
    }

    else
    {
        cout<<"\nEnter the string: ";
        getline(cin,s);
        file<<s;
    }
    file.close();

    file.open("RW.txt",ios::app);
    if(!file)
    {
        cout<<"Unable to open file!";
        return 1;
    }
    else
    {
        string s1;
        cout<<"\nEnter another string: ";
        getline(cin,s1);
        file<<s1;
    }
    file.close();

    file.open("RW.txt",ios::in);
    if(!file)
    {
        cerr<<"Unable to read file!";
        return 1;
    }
    else
    {
        string str;
        while(getline(file,str))
        {
            cout<<str;
        }
    }
    file.close();
}