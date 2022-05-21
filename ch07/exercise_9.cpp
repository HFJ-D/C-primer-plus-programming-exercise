#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
     char fullname[SLEN];
     char hobby[SLEN];
     int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * pa);
void display3(const student pa[], int n);

int main()
{
     cout << "Enter class size: ";
     int class_size;
     cin >> class_size;
     while(cin.get() != '\n')
          continue;
     student * ptr_stu = new student[class_size];
     int entered = getinfo(ptr_stu, class_size);
     for (int i=0; i <entered; i++)
     {
          display1(ptr_stu[i]);
          display2(&ptr_stu[i]);
     }
     display3(ptr_stu, entered);
     delete [] ptr_stu;
     cout << "Done\n";
     return 0;
}

int getinfo(student pa[], int n)
{
     int count = 0;
     for (int i=0; i<n; i++)
     {
          cout << "Enter #" << i+1 << " student's fullname (blank line to quit): ";
          if(!(cin.get(pa[i].fullname, SLEN)))
               break;
          cout << "Enter #" << i+1 << " student's hobby: ";
          cin.get();
          cin.getline(pa[i].hobby, SLEN);
          cout << "Enter #" << i+1 << " student's ooplevel: ";
          while(!(cin >> pa[i].ooplevel))
          {
               cin.clear();
               while(cin.get() != '\n');
               cout << "Bad input; Enter a integer: ";
          }
          cin.get();
          count++;
     }
     return count;
}

void display1(student st)
{
     cout << "Student fullname: " << st.fullname << endl;
     cout << "Student hobby: " << st.hobby << endl;
     cout << "Student ooplevel: " << st.ooplevel << endl;
}

void display2(const student * pa)
{
     cout << "Student fullname: " << pa->fullname << endl;
     cout << "Student hobby: " << pa->hobby << endl;
     cout << "Student ooplevel: " << pa->ooplevel << endl;
}

void display3(const student pa[], int n)
{
     for(int i = 0; i < n; i++)
     {
          cout << "Student #" << i+1 << " fullname: " << pa->fullname << endl;
          cout << "Student #" << i+1 << " hobby: " << pa->hobby << endl;
          cout << "Student #" << i+1 << " ooplevel: " << pa->ooplevel << endl;  
     }
}