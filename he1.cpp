#include <iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main()
{
    long double rem, N, D, R;
    int T, p;
    
    cin >> T;
    if(T<1 || T>100)
    {
        return 1;
    }
    
    long double num_array[T][3]={};
    
    for(int i=0; i<T; i++)
    {
        cin >> num_array[i][0] >> num_array[i][1] >> num_array[i][2];
    }
    
    for(int j=0; j<T; j++)
    {
        rem= num_array[j][0]/num_array[j][1];
        rem = rem * pow(10,num_array[j][2]);
        cout << rem << endl;
        p =(int)rem;
        p=p%10;
        cout << p << endl;
    }
    
    return 0;
}