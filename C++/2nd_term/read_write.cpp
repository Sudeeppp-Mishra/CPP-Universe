#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Hello.txt",ios::out );
    if(!file)
    {
        cerr<<"Unable to create file!";
        return 1;
    }
    else
    {
        string content;
        cout<<"Enter the thing you wanna write:";
        getline(cin, content);
        file<<content;
    }
    file.close();

    file.open("Hello.txt",ios::in);
    if(!file)
    {
        cerr<<"Unable to open file!";
        return 1;
    }
    else
    {
        string line;
        while(getline(file, line))
        {
            cout<<line;
        }
    }
}