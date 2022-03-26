#include <iostream>
using namespace std;
#pragma once
class answer {
public:
   int answer1() {
    int num;
    cout << "Your answer: ";
    cin >> num;
    return num;
    };
};
class Tcountries {
private:
    int population, square, count_of_city;
public:
    void set(int population, int square, int count_of_city){
    this->population = population;
    this->square = square;
    this->count_of_city = count_of_city;
    };
    void get() {
        cout << "Population is " << population<< endl;
        cout << "Square is " << square << endl;
        cout << "Count of city is " << count_of_city << endl;
    };
};
class Number_of_continent {
public:
    virtual void Number_of_continent1() {
        cout << "Choose a number(1-4):" << endl;
        cout << "1.Eurasia" << endl;
        cout << "2.Africa" << endl;
        cout << "3.Australia" << endl;
        cout << "4.America" << endl;
    };
};
class Eurasia: public Number_of_continent {
    void Number_of_continent1() override {
        cout << "1.Great Britain" << endl;
        cout << "2.Russia" << endl;
        cout << "3.China" << endl;
        cout << "4.Germany" << endl;
    };
};
class Africa : public Number_of_continent {
    void Number_of_continent1() override {
        cout << "1.Nigeria" << endl;
        cout << "2.Chana" << endl;
        cout << "3.Morocco" << endl;
        cout << "4.Ethiopia" << endl;
    };
};
class Australia : public Number_of_continent {
    void Number_of_continent1() override {
        cout << "1.New Zealand" << endl;
        cout << "2.New Guinea" << endl;
        cout << "3.Fiji" << endl;
        cout << "4.Kiribati" << endl;
    };
};
class America : public Number_of_continent {
    void Number_of_continent1() override {
        cout << "1.USA" << endl;
        cout << "2.Canada" << endl;
        cout << "3.Mexico" << endl;
        cout << "4.Cuba" << endl;
    };
};
