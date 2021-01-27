#include <iostream>

using namespace std;

int main()
{
    string phrase = "Potato Waffle";
    cout << phrase[0];
    cout << "\n";
    phrase[0] = 'B';
    cout << phrase;

    cout << phrase.find("tato", 0);
    return 0;
}