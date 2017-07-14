#include <iostream>

using namespace std;

int unsortedlist[20] = {16, 9, 6, 19, 13, 14, 8, 20, 3, 12, 11, 4, 15, 18, 5, 7, 10, 17, 1, 2};
int sortedlist[20] = //ordered list, variables possibly?


void printlist()
{
for (int i = 0; i < 20; i++)
{
cout <<unsortedlist[i] << ',';
}
cout << '\n';
}

int main()
{
printlist();
swap (unsortedlist [0], sortedlist[1]); //Maaaaybeee??
printlist();
}
