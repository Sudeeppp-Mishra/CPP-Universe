#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("File.txt",ios::out | ios::in | ios::trunc);

    if(!file)
    {
        cout<<"Unable to open file!";
        return 1;
    }

    else
    {
        string name;
        int age;
        cout<<"\nEnter name and age:\n";
        getline(cin,name);
        cin>>age;

        file<<name<<"\t"<<age<<"\n";

        file.seekg(0,ios::beg);
        string naam;
        int agee;
        while(file>>naam>>agee)
        {
                cout<<naam<<"\t"<<agee<<"\n";
        }
    }
    file.close();
}