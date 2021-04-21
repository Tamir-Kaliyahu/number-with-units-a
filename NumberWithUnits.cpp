#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "NumberWithUnits.hpp"

using namespace std;

namespace ariel{

    void NumberWithUnits::read_units(istream &file) {}

    NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits &num){
        NumberWithUnits num1(1, "km");
        return num1;
    }

    NumberWithUnits &NumberWithUnits::operator+=(const NumberWithUnits &num){
        
        return *this;
    }

    NumberWithUnits NumberWithUnits::operator+(){
        NumberWithUnits num1(1, "km");
        return num1;
    }

    NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits &num){
        NumberWithUnits num1(1, "km");
        return num1;
    }
    
    NumberWithUnits &NumberWithUnits::operator-=(const NumberWithUnits &num){
        
        return *this;
    }

    NumberWithUnits NumberWithUnits::operator-(){
        NumberWithUnits num1(1, "km");
        return num1;
    }

    bool NumberWithUnits::operator>(const NumberWithUnits &num) const
    {
        return false;
    }

    bool NumberWithUnits::operator>=(const NumberWithUnits &num) const
    {
        
        return false;
    }

    bool NumberWithUnits::operator<(const NumberWithUnits &num) const
    {
        
        return false;
    }

    bool NumberWithUnits::operator<=(const NumberWithUnits &num) const
    {
       
        return false;
    }

    bool NumberWithUnits::operator==(const NumberWithUnits &num) const
    {
        if(1)
        return false;
    }

    bool NumberWithUnits::operator!=(const NumberWithUnits &num) const
    {
        if(1)
        return false;
    }


    NumberWithUnits &NumberWithUnits::operator++(){
        unit_val++;
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator++(int){
        NumberWithUnits temp(unit_val, unit_type);
        unit_val++;
        return temp;
    }

    NumberWithUnits &NumberWithUnits::operator--(){
        unit_val--;
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator--(int){
        NumberWithUnits temp(unit_val, unit_type);
        unit_val--;
        return temp;
    }


    std::ostream &operator<<(std::ostream &os, const NumberWithUnits &N){
        return (os << N.unit_type);
    }
    std::istream &operator>>(std::istream &is, NumberWithUnits &N){
        int check = 0;
        return (is >> check);
    }
    NumberWithUnits operator*(double num, NumberWithUnits &N){
        NumberWithUnits check(2, "km");
        return check;
    }

    


}
