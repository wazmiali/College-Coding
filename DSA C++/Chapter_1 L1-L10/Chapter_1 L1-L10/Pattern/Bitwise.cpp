#include <iostream>
using namespace std;

int main()
{
      // int a = 4;
      // int b = 6;

      // cout << "a&b " << (a & b) << endl;
      // cout << "a|b " << (a | b) << endl;
      // cout << "~a " << ~a << endl;
      // cout << "a^b " << (a ^ b) << endl;

      // cout << endl;

      // cout << (17 >> 1) << endl;
      // cout << (17 >> 2) << endl;
      // cout << (19 << 1) << endl;
      // cout << (19 << 2) << endl;7
      

      // cout << endl;

      // int i = 7;
      // cout << (++i) << endl;
      // cout << (i++) << endl;
      // cout << (i--) << endl;
      // cout << (--i) << endl;


      int n;
      cout<<"Enter number: ";
      cin>>n;
      cout<<"printing count from 1 to n \n";

      int i = 1;
      for(;;){
            if (i<=n)
            {
                  cout<< i <<endl;

            }else{
                  break;
            }
            i++;
            
      }
}