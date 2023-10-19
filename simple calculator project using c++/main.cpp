#include <iostream>

using namespace std;

int main()
{
    double a,b;
    char op;
    cout<<"enter the arithmatic operator\n";
    cout<<"     (+ - * /)               :";
    cin>>op;
    cout<<"enter the two numbers:\n";
    cin>>a>>b;
    switch(op)
    {
        case'+':
        cout<<a<<op<<b<<"="<<a+b<<endl;
        break;

        case'-':
        cout<<a<<op<<b<<"="<<a-b<<endl;
        break;

        case'*':
        cout<<a<<op<<b<<"="<<a*b<<endl;
        break;

        case'/':
        cout<<a<<op<<b<<"="<<a/b<<endl;
        break;

        default:
            cout<<"invalid operator"<<endl;
            return 0;
    }

}
