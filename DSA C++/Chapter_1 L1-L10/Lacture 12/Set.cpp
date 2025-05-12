// Set is only show a single value not print a double value
#include <iostream>
#include <set>
using namespace std;
int main()
{

      set<int> s;

      s.insert(5);
      s.insert(5);
      s.insert(5);
      s.insert(1);
      s.insert(6);
      s.insert(6);
      s.insert(0);
      s.insert(0);
      s.insert(0);

      for (auto i : s)
      {
            cout << i << endl;
      }cout<<endl;

      set<int>::iterator it = s.begin();
      it++;

      s.erase(it);

      for (auto i : s)
      {
            cout << i << endl;
      }
      cout<<endl;

      cout<<"5 is present or not-> "<<s.count(-5)<<endl;
}
