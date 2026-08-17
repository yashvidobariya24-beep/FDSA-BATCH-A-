#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string sentence, word;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string longest = "";

    stringstream ss(sentence);

    while(ss >> word)
    {
        if(word.length() > longest.length())
        {
            longest = word;
        }
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << longest.length();

    return 0;
}