
#include <iostream>
#include <string.h>
using namespace std;
int BinarySearchN(char string[20][20], int N, char value[20])
{
    int Low = 0, High = N - 1, Mid;

    while (Low <= High)
    {
        Mid = (Low + High) / 2;
        if (strcmp(string[Mid], value) > 0)
            High = Mid - 1;
        else if (strcmp(string[Mid], value) < 0)
            Low = Mid + 1;
        else
            return Mid;
    }

    return -1;
}

int main()
{
    char a[20][20], find[20];
    int n, loc, i;

    cout << "Enter Total Strings of the array : ";
    cin >> n;
    cout << "Enter String  in array : ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "\n String  in array : \n";
    for (i = 0; i < n; i++)
        cout << a[i] << "\n";
    cout << "\n Enter string  to be find :";
    cin >> find;

    loc = BinarySearchN(a, n, find);
    if (loc == -1)
        cout << "\n Number not found ";
    else
        cout << "\n Number present at " << loc + 1;
}
