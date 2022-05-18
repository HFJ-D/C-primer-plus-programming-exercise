#include <iostream>
#include <string>
struct patrons{
     std::string name;
     double donation;
};

int main()
{
     using namespace std;
     cout << "Enter the amount of patrons: ";
     int number;
     cin >> number;
     cin.get();
     patrons *patron = new patrons[number];
     for (int i=0; i<number; i++)
     {
          cout << i+1 << "#:\n";
          cout << "Enter the name of patron: ";
          getline(cin, patron[i].name);
          cout << "Enter the amount of the donation: ";
          cin >> patron[i].donation;
          cin.get();
     }
     cout << "Grand Patrons\n";
     int count = 0;
     for (int i = 0; i < number; i++)
     {
          if(patron[i].donation > 10000)
          {
               cout << patron[i].name << " " << patron[i].donation << endl;
               count ++;
          }

     }
     if(count == 0)
          cout << "none\n";
     cout << "Patrons\n";
     if(count == number)
          cout << "none\n";
     else
     {
          for (int i = 0; i < number; i++)
          {
               if(patron[i].donation <= 10000)
                    cout << patron[i].name << " " << patron[i].donation << endl;
          }
     }
     
     delete [] patron;
     return 0;
}