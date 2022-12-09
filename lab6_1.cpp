#include<iostream>
using namespace std;

int main(){
    int num=1;
    int even,odd = 0;
    while(num != 0)
{
    cout << "Enter an integer: ";
    cin >> num;
    if(num%2 == 0)
    {
        even = even+1;
    }else
    {
        odd = odd+1;
    }
}
    cout << "#Even numbers = " << even-1 << endl;
    cout << "#Odd numbers = "<< odd;
    return 0;
}
