#include <iostream>
#include <string>

using namespace std;

void printHV (string HV, string inputString,bool usedLetter[])
{
    if (HV.length() == inputString.length()) cout << HV << endl;
    else
        for (int i = 0; i < inputString.length(); i++)
            if (usedLetter[i] == false)
            {
                usedLetter[i] = true;
                printHV(HV + inputString[i], inputString, usedLetter);
                usedLetter[i] = false;
            }
}

int main()
{
    string inputString;
    cin >> inputString;

    bool usedLetter[inputString.length()];
    for (int i=0; i < inputString.length(); i++) usedLetter[i] = false;

    string HV;
    printHV(HV, inputString, usedLetter);

    return 0;
}
