#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    fstream file1;
    file1.open("Country.txt",ios::out);
    if(!file1)
    {
        cerr<<"Error!! Opening file!!";
        exit(1);
    }
    else
    {
        file1<<"USA"<<endl;
        file1<<"UK"<<endl;
    }
    file1.close();

    fstream file2;
    file2.open("Capital.txt",ios::out);
    if(!file2)
    {
        cerr<<"Error! Opening file!!";
        exit(1);
    }

    else
    {
        file2<<"Washington DC"<<endl;
        file2<<"London"<<endl;
    }
    file2.close();

    fstream f1;
    f1.open("Country.txt",ios::in);
    fstream f2;
    f2.open("Capital.txt",ios::in);

    for(int i=0;i<2;i++)
    {
        if(f1.eof())
        {
            break;
        }
        else
        {
            string line;
            getline(f1,line);
            cout<<"Capital of "<<line<<"\t";
        }

        if(f2.eof())
        {
            break;
        }
        else
        {
            string line;
            getline(f2,line);
            cout<<line<<endl;
        }
    }
}