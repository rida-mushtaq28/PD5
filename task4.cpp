#include <iostream>
using namespace std;
float hours();
main()
{
 hours();
}

float hours()
{
float hours,days,workers,individualhours,totalhours,display1,display2;
float workinghours=10;
cout << "enter no of hours:";
cin >> hours;
cout << "enter no of the days :";
cin >> days;
cout << "enter no of workers :";
cin>> workers;

individualhours=workinghours-(workinghours*0.1);
totalhours=individualhours*days*workers;
display1=totalhours-hours;
display2=-display1;


if(totalhours>hours)
{
       cout<< "yes!!!!"<<display1<<"hours left.";


}

if (totalhours<hours)
{
       cout << "not enough time!!"<<display2<<"hours needed.";
}


}