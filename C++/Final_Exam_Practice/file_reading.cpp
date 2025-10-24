#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Hello.txt",ios::in);
 /*
    if(!file)
    {
        cout<<"Unable to find file!!";
        return 0;
    }
    else
    {
        string s;
        file>>s;
        cout<<s;
    }
    file.close();
*/
/*
    if(file.is_open())
    {
        cout<<"File opened successfully!";
        char ch;
        while(1)
        {
            file>>ch;
            if(file.eof())
            {
                break;
            }
            cout<<ch;
        }
        
    }
    else
    {
        cout<<"Unable to open file!";
    }
*/

    string line;
    while(getline(file,line))
    {
        cout<<line;
    }
    file.close();
}