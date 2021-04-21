#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>

using namespace ariel;

TEST_CASE("normal units set")
{
    CHECK_NOTHROW(NumberWithUnits U1(5, "g"));
    CHECK_NOTHROW(NumberWithUnits U2(7.5, "kg"));
    CHECK_NOTHROW(NumberWithUnits U3(3, "m"));
    CHECK_NOTHROW(NumberWithUnits U4(32, "cm"));
    CHECK_NOTHROW(NumberWithUnits U5(200, "ILS"));
}

TEST_CASE("bad unit call")
{
    CHECK_THROWS(NumberWithUnits U1(14, "second"));
    CHECK_THROWS(NumberWithUnits U2(90, "Min"));
    CHECK_THROWS(NumberWithUnits U3(1.5, "Usd"));
    CHECK_THROWS(NumberWithUnits U4(8, "Cm"));
    CHECK_THROWS(NumberWithUnits U5(4, "Ton"));    
}

TEST_CASE("good operators test"){
    NumberWithUnits U1(1,"km");
    NumberWithUnits U2(2,"km");
    CHECK(U1+U2==NumberWithUnits{3, "km"});
    CHECK(NumberWithUnits{2,"km"}==NumberWithUnits{2000, "m"});
    CHECK(NumberWithUnits{1,"m"}!=NumberWithUnits{700, "cm"});
    CHECK(NumberWithUnits{1,"m"}>NumberWithUnits{50, "cm"});
    CHECK(NumberWithUnits{1,"m"}<NumberWithUnits{1, "km"});
}

TEST_CASE("bad operators comparision"){
    NumberWithUnits U1(2,"km");
    NumberWithUnits U2(200,"g");
    NumberWithUnits U3(500,"m");
    NumberWithUnits U4(3,"USD");
    NumberWithUnits U5(500,"hour");
    NumberWithUnits U6(3,"min");
    CHECK_THROWS(cout << (U1==U2));
    CHECK_THROWS(cout << (U3==U4));
    CHECK_THROWS(cout << (U1>U4));
    CHECK_THROWS(cout << (U2<U5));
    CHECK_THROWS(cout << (U6+U4));
    

}