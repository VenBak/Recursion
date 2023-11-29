#include <iostream>
#include <cassert>

using namespace std;

int naive_power (int x, int n)
{
    // part 1.1: implement this function
    // Precondition:
    assert (n >= 0);
    // Postcondition:
    // returns the power of a number x to the power of n
    if (n == 0)
        return 1;
    else
        return x * naive_power (x, n-1);
}

int power (int x, int n)
{
    // part 1.2: implement this function and analyze runtime complexity
    // Precondition:
    assert (n >= 0);
    // Postcondition:
    // returns the power of a number x to the power of n
    if (n == 0)
        return 1;
    else if (n/2*2 == n)
        return power(x, n/2) * power(x, n/2);
    else
        return x * power (x, n-1);
}

bool palindrome1 (string text, int i, int j)
{
    // implement this function
    // Precondition:
    assert (text.length() >= 0);
    // Postcondition:
    // returns true if the word is a palindrome and false if the word isn't a palindrome
    if (text.at(i) != text.at(j))
        return false;
    else if (i >= j)
        return true;
    else 
        return palindrome1(text, ++i, --j);
}

bool palindrome2 (string text, int i, int j)
{
    // implement this function
    // Precondition:
    assert (text.length() >= 0);
    // Postcondition:
    // returns true if the word is a palindrome and false if the word isn't a palindrome
    if (text.at(i) != text.at(j))
        return false;
    else if (i >= j)
        return true;
    else 
        return palindrome1(text, ++i, --j);
    return false;
}

bool palindrome3 (string text, int i, int j)
{
    // implement this function
    return false;
}

bool match_chars (string chars, int i, string source, int j)
{
    // implement this function
    return false;
}

#ifndef TESTING
int main ()
{
    // Pre-condition:
    assert(true);
    // Post-condition: user has entered a line of text, and program has printed
    // return value of all palindrome functions on that line of text
    cout << naive_power(2, 4) << endl;
    cout << power(2, 9) << endl;
    cout << palindrome1("kayak", 0 ,4) << endl;

}
#endif
