#include <iostream>
#include <fstream>
#include <string>
struct patrons{
     std::string name;
     double donation;
};

int main()
{
     using namespace std;
     ifstream inFile;
     inFile.open("exercise9.txt");
     int number;
     inFile >> number;
     inFile.get();
     cout << "The amount of patrons is " << number <<endl;
     patrons *patron = new patrons[number];
     for (int i=0; i<number; i++)
     {
          getline(inFile, patron[i].name);
          inFile >> patron[i].donation;
          inFile.get();
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