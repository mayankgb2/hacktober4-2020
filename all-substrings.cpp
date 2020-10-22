#include<iostream>

using std::cout;
using std::cin;
using std::string;

void printSubstrings(string str, string current, int index) {

    if(index == str.length())
    {
       cout <<"("<< current << ") ";
        return;
    }

    printSubstrings(str, current, index+1);
    printSubstrings(str, current + str[index], index + 1);

}

int main(){

    string str;
    cout<<"Enter String: ";
    cin>>str;

    printSubstrings(str,"",0);
    return 0;
}
