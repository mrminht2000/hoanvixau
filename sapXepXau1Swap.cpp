#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    char minChar = inputString[0];
    int viTriSwap = 0, viTriMin = 0;
    char tmp;
    while (viTriSwap < inputString.length ())
    {
        minChar = inputString[viTriSwap];
        viTriMin = viTriSwap;

        for (int i=viTriSwap; i < inputString.length(); i++)
            if (minChar >= inputString[i])
            {
                minChar = inputString[i];
                viTriMin = i;
            }

        if (inputString[viTriSwap] <= minChar) viTriSwap++;
        else
            {
                tmp = inputString[viTriMin];
                inputString[viTriMin] = inputString[viTriSwap];
                inputString[viTriSwap] = tmp;
                break;
            }
    }

    cout << inputString;
    return 0;
}
