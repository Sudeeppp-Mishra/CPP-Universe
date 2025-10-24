#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Hello.txt",ios::out);
    if(file.is_open())
    {
        cout<<"File created successfully!";
        file<<"HIIII";
        file.close();
    }
    else
    {
        cout<<"Unalbe to create file";
        return 0;
    }
    return 1;
}