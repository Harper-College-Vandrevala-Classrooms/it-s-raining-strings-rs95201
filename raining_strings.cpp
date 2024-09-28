#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
using namespace std;

int main()
{
   vector <string> names;
   cout << "\t\t\nWelcome to the Business Sorting Program!\n\n";
   
   string temp;
   string ans = "Y";
   while(toupper(ans[0]) == 'Y')
   {
       cout << "Please enter the name of a business: ";
       getline(cin, temp);
       names.push_back(temp);
       
   
  
       sort(names.begin(), names.end());
       if(names.size() == 1)
       {
           cout << "Your business is: " << '\n';
       }
       else
       {
           cout << "Your businessess are: " << '\n';
       }
       
       for(string & name : names)
       {
           cout << '\t' <<name << '\n';
       }
      cout << "\nAnother business(Y/N): ";
      cin >> ans;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   
   }
   cout << "Thank you for using the Business Sorting Program!";


   

   
  

    return 0;
}
