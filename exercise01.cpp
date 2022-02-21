#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
  
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 cout << setw(5)<<"No"<<"\t"<< setw(17)<< "Name"<<setw(12)<<setiosflags(ios::fixed)<<setprecision(2)  <<"marks"<< endl;
  
     for (int r = 0; r < 5; r++)
       {
           cout <<setw(5)<<  r+1 <<"\t\t\t"
              << setw(9)<< names[r]<<"\t\t"
          << setiosflags(ios::fixed)<<setprecision(2) <<marks[r] << endl;
       
       }
}