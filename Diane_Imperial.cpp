#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int Day = 0;
int Month = 0;
int Year = 0;
bool leapYear (int);


int main()
{
    cout << "Enter month: " << endl;
    cin >> Month;
    cout << "Enter day: " << endl;
    cin >> Day;
    cout << "Enter year: " << endl;
    cin >> Year;
    
    
    switch(Month)
{
       case 1:
            if (Day>=1 && Day<=31)
               cout << "January " << Day << ", " << Year << endl;
            break;
       case 2:
            if (Day>=1 && Day<=28)
               cout << "February " << Day << ", " << Year << endl;
            else if (Day == 29)
              { 
               leapYear(Year);  
               cout << "February " << Day << ", " << Year << endl;
              } 
               else
               cout << "Invalid date." << endl;
            break;
       case 3:
            if (Day>=1 && Day<=31)
               cout << "March " << Day << ", " << Year << endl;
            break;
       case 4:
            if (Day>=1 && Day<=30)
               cout << "April " << Day << ", " << Year << endl;
            break;
       case 5:
            if (Day>=1 && Day<=31)
               cout << "May " << Day << ", " << Year << endl;
            break;
       case 6:
            if (Day>=1 && Day<=30)
               cout << "June " << Day << ", " << Year << endl;
            break;
       case 7:
            if (Day>=1 && Day<=31)
               cout << "July " << Day << ", " << Year << endl;
            break;
       case 8:
            if (Day>=1 && Day<=31)
               cout << "August " << Day << ", " << Year << endl;
            break;
       case 9:
            if (Day>=1 && Day<=30)
               cout << "September " << Day << ", " << Year << endl;
            break;
       case 10:
            if (Day>=1 && Day<=31)
               cout << "October " << Day << ", " << Year << endl;
            break;
       case 11:
            if (Day>=1 && Day<=30)
               cout << "November " << Day << ", " << Year << endl;
            break;
       case 12:
            if (Day>=1 && Day<=31)
               cout << "December " << Day << ", " << Year << endl;
            break;
       default:
               cout << "Invalid date." << endl;
               break;
}
    
    _getch();
    return 0;
}



// leap year bool
bool leapYear (int)
{
    if ((( Year % 4 == 0) && (! ( Year % 100 == 0))) || (( Year % 4 == 0) && (! ( Year % 100 == 0))&&( Year % 400 == 0))) 
     return true;
      
    else
        return false;
        }
