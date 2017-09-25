#include <iostream>

int main() {

 using namespace std;
int a,b,c;
     char f;
    cin >>a>>f>>b;

    switch (f)
    {
        case '+': c=a+b;
                    cout<<(c); break;
        case '-': c=a-b;
                     cout<<(c);break;
        case '*': c=a * b;
                     cout<<(c); break;

        case '/': c=a/b;
                     cout<<(c);break;
        case '%': c=a % b;
                        cout<<(c);break;
        case '&': c=a & b;
                    cout<<(c);  break;

        case '|': c=a | b;
                        cout<<(c);break;
        case '^': c=a ^ b;
                         cout<<(c); break;
        case '<': c=a << b;
                          cout<<(c); break;
        case '>': c=a >> b;
                           cout<<(c); break;

    }




    return 0;

}