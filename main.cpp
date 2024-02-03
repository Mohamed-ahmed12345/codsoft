#include <iostream>

using namespace std;

int main()
{
    int x,y;
    char op,z;
    z= 'y';
    while (z=='y'||z=='Y')
    {
        cout <<"please enter first num\n";
        cin>>x;
        int fflush();
        cout <<"please enter op(+ - * / %)\n";
        cin>>op;
        cout <<"please enter second num\n";
        cin>>y;
        switch (op)
        {
        case '+':
            cout << "your result = "<<x+y<<endl;
            break;
        case '-':
            cout << "your result = "<<x-y<<endl;
            break;
        case '*':
            cout << "your result = "<<x*y<<endl;
            break;
        case '%' :
            cout << "your result = "<<x%y<<endl;
            break;
        case '/':
            if (y==0)
            {
                cout << "can't diveded by 0";
                break;
            }
            else cout << "your result = "<<(float)x/y<<endl;
            break;
        default:
            cout << "wrong operation \n";
            break;
        }
        cout << "if you want to reuse this calc enter ( y ) if not press any letter \n";
        cin>>z;
    }

    return 0;
}
