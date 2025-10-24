#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Hello.txt",ios::in);
    if(!file)
    {
        cerr<<"Unable to open file";
        return 1;
    }
    else
    {
        while(1)
        {
            char ch;
            file>>ch;
            if(file.eof())
            {
                break;
            }
            else
            {
                cout<<ch;
            }
        }
        file.close();
    }
    return 0;
}