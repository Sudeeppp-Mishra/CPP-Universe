#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

class File
{
    string content;
    public:
    void input()
    {
        cout<<"|Enter the content: ";
        getline(cin,content);
    }

    void putData()
    {
        ofstream file("File.txt");
        if(!file)
        {
            cout<<"Unable to create file!";
            exit(0);
        }
        else
        {
            file<<content;
        }
        file.close();
    }

    void getData()
    {
        ifstream file("File.txt");
        if(!file)
        {
            cout<<"Unable to open file!";
            exit(0);
        }
        else
        {
            string content;
            while(getline(file,content))
            {
                cout<<content;
            }
        }
        file.close();
    }
};

int main()
{
    File f;
    f.input();
    f.putData();
    f.getData();
}