#include <iostream>

using namespace std;

int unsortedlist[20] = {16, 9, 6, 19, 13, 14, 8, 20, 3, 12, 11, 4, 15, 18, 5, 7, 10, 17, 1, 2};
int sortedlist[20] ;//ordered list, variables possibly?


void printlist()
{
    for (int i = 0; i < 20; i++)
    {
    cout << unsortedlist[i] << ',';
    }
    cout << '\n';
}

//does one loop through the list swapping values that are next to eachother if they are in the wrong order.  If it makes a swap it returns 0 if it not swaps were needed it returns 1.
int sort()
{
    int done = 1;
    for (int i = 0; i < 19; i++)
    {
        if (unsortedlist[i] > unsortedlist[i+1]) 
        {
        swap (unsortedlist[i], unsortedlist[i+1]);
        done = 0;
        printlist();
        }    
    }
    cout << "loop \n";
    return done;
}
int main()
{
    //sortedlist = unsortedlist;
    printlist();
    int x = 0;
    while(x == 0) // keep going through the list until no swaps were needed
    {
        x = sort();
        
    }
//swap (unsortedlist [0], sortedlist[1]); //Maaaaybeee??
}
