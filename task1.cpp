#include <iostream>

using namespace std;

int main()
{
    int x,y,result;
    char z;
    cout<<"Enter number and operarion"<<endl;
    cin>>x>>y>>z;
    if (z=='+') {
        result=x+y;
    }
    else if (z=='-') {
        result = x-y;
    }
    else if (z=='*') {
        result=x*y;
    }
    else if (z=='/') {
        result=x/y;
    }
    cout<<result<<endl;

    return 0;
}