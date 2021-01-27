#include <iostream>

using namespace std;

int main()
{
    string phrase = "Potato";
    string phrasesub;
    phrasesub = phrase.substr(2, 3);
    cout << phrasesub;
    cout << phrase.substr(2, 3);
    return 0;
}
