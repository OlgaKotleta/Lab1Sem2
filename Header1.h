#include <iostream>
#include "answer.cpp"
//#include "Tcountries.cpp"
using namespace std;
#pragma once
class answer 
{
public:
  int answer1(); 
};
class Tcountries 
{
private:
  int population, square, count_of_city;
public:
  void set();
  void get();
};
class Number_of_continent 
{
public:
  virtual void Number_of_continent1();
};
class Eurasia: public Number_of_continent 
{
  void Number_of_continent1() override;
};
class Africa : public Number_of_continent 
{
  void Number_of_continent1() override;
};
class Australia : public Number_of_continent 
{
  void Number_of_continent1() override;
};
class America : public Number_of_continent 
{
  void Number_of_continent1() override;
};
