#include <iostream>

using namespace std;

int LargestMult(int mult, int top)
{
    for(int i =  top; i >= mult; i--)
    {
        if(i%mult ==0) 
            return i;
    }
    return -1;
    
}
int main()
{
    int mult, top;
   cout << "Enter Mult:";
   cin >> mult;
   cout << "Enter top:";
   cin >> top;
   
   int hello = LargestMult(mult,top);
   if(hello == -1)
        cout << "NO multiple";
   
   else 
        cout << "Answer = " << hello << endl;
   
   return 0;
}
