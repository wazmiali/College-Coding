// #include<iostream>
// using namespace std;

// int main() {
//       int n;
//       cout<< "Enter the Number: ";
//       cin >> n;

//       int i = 1;  

//       while (i<=n) { 
//             int j = 1;
//             while (j <= n) {
//                   cout << n-j+1;
//                   j = j + 1;
//             }
//             cout << endl;
//             i = i + 1; 
//       }
     
// }


#include<iostream>
using namespace std;

int main(){
      int n;
      cin>>n;

      int i = 1;
      int count = 1;
      while(i<=n){
            
            int j=1;
            while(j<=n){
                  cout<<count<<" ";
                  count = count + 1;
                  j = j + 1;

            }
            cout<<endl;
            i = i +1;
      }
}

