#pragma once 
#include <iostream>
#include <map>
#include <fstream>
#include <string.h>
#include <stdbool.h>

using namespace std;

namespace ariel{

    class NumberWithUnits{

        const map<std::string ,map<std::string ,double>> Unit_map;

        private:
            string unit_type;
            double unit_val;
            

        public:
            NumberWithUnits(double val, std::string typeV) : unit_val(val), unit_type(typeV) {};
            ~NumberWithUnits(){};
           
            static void read_units(istream& filename);
            NumberWithUnits operator +(const NumberWithUnits &N);
            NumberWithUnits& operator +=(const NumberWithUnits &N);
            NumberWithUnits operator +();//unary plus
            NumberWithUnits operator -(const NumberWithUnits &N);
            NumberWithUnits& operator -=(const NumberWithUnits &N);
            NumberWithUnits operator -();//unary minus

            bool operator >(const NumberWithUnits &N) const;
            bool operator >=(const NumberWithUnits &N) const;
            bool operator <(const NumberWithUnits &N) const;
            bool operator <=(const NumberWithUnits &N) const;
            bool operator ==(const NumberWithUnits &N) const;
            bool operator !=(const NumberWithUnits &N) const;

            NumberWithUnits &operator ++();
            NumberWithUnits operator ++(int x);
            NumberWithUnits &operator --();
            NumberWithUnits operator --(int x);

            friend NumberWithUnits operator*(double num, NumberWithUnits &N);

            friend std::ostream& operator<<(std::ostream& os, const NumberWithUnits& N);
            friend std::istream& operator>>(std::istream& is, NumberWithUnits& N);
            

            
            
    };
};