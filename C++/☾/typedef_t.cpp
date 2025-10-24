#include<iostream>
using std::cout;
using std::cin;

typedef std::string text_t; //here _t is denoted for type as comment convention

using word_t = std::string;
int main() {
    text_t s="Hello";
    cout<<s;

    word_t d="World";
    cout<<std::endl<<d;
}

//but using keyword has replaced typedef in cpp coz it can also suitable tempelates