#include <iostream>
#include <string>

using namespace std;

int main()
{
    char i;
    string palindrome;
    cout << "Enter a word/ line of characters: ";
    cin >> palindrome;

    if (palindrome[i++] != palindrome[i--])
    {
        cout << palindrome << " is not a palindrome. ";
    }
    else
    {
        cout << palindrome << " is a palindrome. ";
    }

}
