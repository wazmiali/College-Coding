// Map are Stored the data in Key and Value form
//  Time complexity o(n)

#include <iostream>
#include <map>
using namespace std;
int main()
{
      map<int, string> m;

      m[1] = "babbar";
      m[13] = "love";
      m[2] = "kumar";

      m.insert({5, "bheen"});

      cout << "before erase " << endl;
      for (auto i : m)
      {
            cout << i.first << " " << i.second << endl;
      }

      cout << "Finding 13 is present are not -> " << m.count(-13) << endl;

      m.erase(13);
      cout << "After erase " << endl;
      for (auto i : m)
      {
            cout << i.first << " " << i.second << endl;
      }cout<<endl;

      auto it = m.find(5);

      for (auto i = it; i != m.end(); i++)
      {
            cout << (*i).first << endl;
      }
}