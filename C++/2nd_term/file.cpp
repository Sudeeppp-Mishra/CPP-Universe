#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("test.txt",ios::out | ios::in | ios::trunc);
    if(!file)
    {
        cerr<<"Unable to create file!";
        return 1;
    }
    else
    {
        string thing;
        cout<<"Enter string:";
        getline(cin, thing);
        file<<thing;
    }

    file.seekg(0,ios::beg);
    string content;
    while(getline(file,content))
    {
        cout<<content;
    }
    file.close();
}