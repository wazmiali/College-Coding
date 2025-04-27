#include <iostream>
using namespace std;

int main()
{
      int n;
      cin>>n;

      int row = 1;
      while(row <= n){
            int col = 1;

            while(col <= n){

                  char ch = 'A' + row - 1;
                  cout<<ch;
                  col = col + 1;
            }
            cout<<endl;
            row = row + 1;
      }


      // for(int i=1; i<=n; i++){
      //       for(int j=1; j<=n; j++){
      //             char ch = 'A' + i - 1;
      //             cout<<ch;
      //       }
      //       cout<<endl;
      // }
      // return 0;


}

// output 
/*

AAAAA
BBBBB
CCCCC
DDDDD
EEEEE

*/