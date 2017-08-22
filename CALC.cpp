# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    
    
    cout << "Enter OPERATOR you want (+,-,*,/): ";
    cin >> op;
    
    cout << "OOP1 : ";
    cin >> num1 >> num2;
    
    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;
            
        case '-':
            cout << num1-num2;
            break;
            
        case '*':
            cout << num1*num2;
            break;
            
        case '/':
            cout << num1/num2;
            break;
            
        default
            cout << "OPERATION NOT CORRECT ! ";
            break;
    }
    
    return 0;
}
