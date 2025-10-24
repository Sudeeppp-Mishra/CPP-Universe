#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("ReadWrite.txt",ios::out | ios::in | ios::trunc);

    if(!file)
    {
        cerr<<"Unable to open file!";
        return 1;
    }
    else
    {
        string s;
        cout<<"Enter string: ";
        getline(cin,s);
        file<<s;

        file.seekg(0,ios::beg);
        string ch;
        while(getline(file,ch))
        {
            cout<<ch;
        }
        file.close();
    }


}