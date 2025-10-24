#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("This.txt",ios::out);

    if(!file)
    {
        cerr<<"Unable to create file!";
        return 1;
    }

    else
    {
        string s;
        cout<<"\nEnter what you wanna write inside file?";
        cin>>s;
        file<<s;
    }
    file.close();

    file.open("This.txt",ios::in);

    if(!file)
    {
        cerr<<"Unable to find the file!";
        return 11;
    }
    else
    {
        char line;
        while(1)
        {
            file>>line;
            if(file.eof())
            {
                break;
            }
            else
            {
                cout<<line;
            }
        }
    }

    file.close();
}