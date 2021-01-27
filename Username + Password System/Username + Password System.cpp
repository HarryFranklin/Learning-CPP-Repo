#include <iostream>

using namespace std;

int main()
{
    string name;
    string userName;
    string passWord;
    string passWordChk;
    string userNameLgin;
    string passWordLgin;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << " , please enter a username: ";
    cin >> userName;
    cout << "Please enter a password: ";
    cin >> passWord;
    cout << "Please re-enter your password: ";
    cin >> passWordChk;

    if (passWord == passWordChk)
    {
        cout << "Your passwords match. ";
        cout << "Please now log-in with your details.  ";
        cout << "\nUsername : ";
        cin >> userNameLgin;
        cout << "Password : ";
        cin >> passWordLgin;

        if (passWord == passWordLgin, userName == userNameLgin)
        {
            cout << "Your credentials are correct, you have logged in.";
        }
        else
        {
            cout << "Your credentials do not match.";
        }
    }

    else 
    {
        cout << "You have entered different passwords, please re-enter your passwords: ";
    }

    
    return 0;

}

