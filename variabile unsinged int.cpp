#include<iostream>
using namespace std;
int main()
{
    unsigned int max=4294967295;
    unsigned int min=0;
    //il numero massimo è 2^31-1; il numero minimo è -2^32
    cout<<"ecco il minimo:"<<min<<endl;
    cout<<"ecco il massimo:"<<max<<endl;
    cout<<"ecco il minimo-1:"<<min-1<<endl;
    cout<<"ecco il massimo+1:"<<max+1<<endl;
    return 0;
}
