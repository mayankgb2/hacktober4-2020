#include <bits/stdc++.h>

using std::string;

bool isPallindrome(string str, int start, int end)
{   
    if(start>= end)
    {
        return true;
    }

    return str[start] == str[end] && isPallindrome(str, start + 1, end - 1);
}

int main()
{
    string str;
    std::cout << "Enter any string: ";
    std::cin >> str;
    std::cout <<"string is palindrome: "<< isPallindrome(str, 0, str.length());

    return 0;
}
