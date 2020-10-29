#include<iostream>
#include<string>

using namespace std;

int main()
{
    string sInput = " ";
    string sName1 = " ";
    string sName2 = " ";
    int iParty1 = 0;
    int iParty2 = 0;

    cout << "Name of the first party: ";
    cin >> sName1;
    cout << "Name of the second party: ";
    cin >> sName2;

    while (sInput != "")
    {
        cout << "Your vote: ";
        cin >> sInput;
        cout << endl;
        if (sInput == sName1)
        {
            iParty1++;
        }
        else
        {
            if (sInput == sName2)
            {
                iParty2++;
            }
            else
            {
                cout << "Wrong Input" << endl;
            }
        }

    }
    cout << sName1 << ": " << iParty1 << endl;
    cout << sName2 << ": " << iParty2 << endl;
    getchar();
    return 0;
}