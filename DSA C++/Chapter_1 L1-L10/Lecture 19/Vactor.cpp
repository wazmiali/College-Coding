#include<iostream>
#include<vector>
using namespace std;

int main(){

      vector<int> v; 

      cout<<"capacity->"<<v.capacity()<<endl;

      v.push_back(1);
      cout<<"capacity->"<<v.capacity()<<endl;

      v.push_back(2);
      cout<<"capacity->"<<v.capacity()<<endl;

      v.push_back(3);
      cout<<"capacity->"<<v.capacity()<<endl;
      cout<<"Size->"<<v.size()<<endl;

      cout<<"Element at 2nd Index "<<v.at(2)<<endl;  

      cout<<"Front "<<v.front()<<endl;    
      cout<<"Back "<<v.back()<<endl;    

}