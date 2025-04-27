#include <iostream>
using namespace std;

int main()
{

      // int num = 2;
      // switch (num)
      // {
      // case 1:
      //       cout << "First" << endl;
      //       break;

      // case 2:
      //       cout << "Second" << endl;
      //       break;

      // default:
      //       cout << "It is a default case" << endl;
      // }
      // cout<<endl;

      int a, b;

      cout << "Enter the value of a: ";
      cin >> a;

      cout << "Enter the value of b: ";
      cin >> b;

      char op;
      cout << "Enter the Operation you want to perform: ";
      cin >> op;

      switch (op)
      {

      case '+':
            cout << (a + b) << endl;
            break;
      case '-':
            cout << (a - b) << endl;
            break;
      case '*':
            cout << (a * b) << endl;
            break;
      case '/':
            cout << (a / b) << endl;
            break;
      case '%':
            cout << (a % b) << endl;
            break;

      default:
            cout << "Enter the valid Operation." << endl;
      }
}