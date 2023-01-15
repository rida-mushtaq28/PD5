#include <iostream>
using namespace std;
float taxcalculator(char type ,float price);
main ()
{ 
char Type;
char type;
float price;
float finalprice;
finalprice=taxcalculator(type ,price);
cout << "the final price on a vehical of type "<<Type<<" after adding the tax is "<< finalprice;
}

 float taxcalculator(char type,float price)
  {
     char Type;
     float Price,taxrate,taxamount,finalprice;
     
    cout << "enter price:";
    cin >> Price ;
    cout << "enter type :";
    cin >> Type;    
      if (Type=='M')
        {
            taxrate=6;
        }

        if (Type=='E')
        {
         taxrate=8;
        }

        if (Type=='S')
        {
          taxrate=10;
        }

        if (Type=='V')
        {
           taxrate=12;
        }

        if (Type=='T')
        {
          taxrate=15;
        }
     taxamount=Price*(taxrate/100);
     finalprice=Price+taxamount;
     return finalprice;
    


  }