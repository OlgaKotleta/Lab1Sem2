#pragma once
#include <iostream>
#include "Header1.h"
using namespace std;
Tcountries Info;
answer fo;
Eurasia Eu;
Australia Au;
Africa Af;
America Am;
Number_of_continent Num;
void Continent_1() 
{ 
Number_of_continent* num = &Eu;
num->Number_of_continent1();   
switch (fo.answer1()) {
  case 1:
    cout << "Great Britain:" << endl;
    Info.set(68992721, 243809, 194);
    Info.get();
    break;
  case 2:
    cout << "Russia:" << endl;
    Info.set(1454788, 17125191, 1117);
    Info.get();
    break;
  case 3:
    cout << "China:" << endl;
    Info.set(1402500035, 9569960, 787);
    Info.get();
    break;
  case 4:
    cout << "Germay:" << endl;
    Info.set(83149300, 357578, 2054);
    Info.get();
    break;
  default:
    cout << "Countries is unknown";    
  };
};
void Continent_2() 
{
 Number_of_continent* num = &Af;
 num->Number_of_continent1();    
 switch (fo.answer1()) {
   case 1:
     cout << "Nigeria:" << endl;
     Info.set(206463745, 923768, 40);
     Info.get();
     break;
   case 2:
     cout << "Chana:" << endl;
     Info.set(30418054, 238533, 19);
     Info.get();
     break;
   case 3:
     cout << "Morocco:" << endl;
     Info.set(35876060, 446550, 70);
     Info.get();
     break;
   case 4:
     cout << "Ethiopia:" << endl;
     Info.set(102862364, 1104300, 40);
     Info.get();
     break;
   default:
     cout << "Countries is unknown";    
  };
};
void Continent_3()
{
Number_of_continent* num = &Af;
num->Number_of_continent1(); 
switch (fo.answer1()) {
  case 1:
    cout << "New Zealand:" << endl;
    Info.set(4906805, 268680, 44);
    Info.get();
    break;
  case 2:
    cout << "New Guinea:" << endl;
    Info.set(9122994, 786000, 41);
    Info.get();
    break;
  case 3:
    cout << "Fiji:" << endl;
    Info.set(852000, 50, 25);
    Info.get();
    break;
  case 4:
    cout << "Kiribati:" << endl;
    Info.set(119438, 812, 10);
    Info.get();
    break;
  default:
    cout << "Countries is unknown";      
   };
};
void Continent_4() 
{
 Number_of_continent* num = &Am;
 num->Number_of_continent1();
 switch (fo.answer1()) 
 {
   case 1:
     cout << "USA:" << endl;
     Info.set(332278200, 9826675, 30000);
     Info.get();
     break;
   case 2:
     cout << "Canada:" << endl;
     Info.set(38756402, 9984670, 100);
     Info.get();
     break;
   case 3:
     cout << "Mexico:" << endl;
     Info.set(133593887, 1972550, 34);
     Info.get();
     break;
   case 4:
     cout << "Cuba:" << endl;
     Info.set(11187532, 110860, 34);
     Info.get();
     break;
   default:
     cout << "Countries is unknown";      
  };
};

void Number_of_countrie() 
{
Num.Number_of_continent1();
switch (fo.answer1())
{
  case 1:
    cout << "Eurasian countries(Choose a number(1-4)):" << endl;
    Continent_1();
    break;
  case 2:
    cout << "African countries(Choose a number(1-4)):" << endl;
    Continent_2();
    break;
  case 3:
    cout << "Australian countries(Choose a number(1-4)):" << endl;
    Continent_3();
    break;
  case 4:
    cout << "American countries(Choose a number(1-4)):" << endl;
    Continent_4();
    break;
  default:
    cout << "Continent is unknown" << endl;  
  };
};
