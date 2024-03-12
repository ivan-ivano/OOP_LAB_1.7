// LongLong.cpp
#include "LongLong.h"
#include <iostream>
#include <sstream>
#include <string>


LongLong::LongLong() : highPart(0), lowPart(0) {}

LongLong::LongLong(long high, unsigned long low) : highPart(high), lowPart(low) {}

LongLong LongLong::operator+(const LongLong& other) const {
    LongLong result;
    result.lowPart = lowPart + other.lowPart;
    result.highPart = highPart + other.highPart + (result.lowPart < lowPart);
    return result;
}

LongLong LongLong::operator-(const LongLong& other) const {
    LongLong result;
    result.lowPart = lowPart - other.lowPart;
    result.highPart = highPart - other.highPart - (result.lowPart > lowPart);
    return result;
}

LongLong LongLong::operator*(const LongLong& other) const {
    LongLong result;
    result.lowPart = lowPart * other.lowPart;
    result.highPart = highPart * other.highPart;
    return result;
}

bool LongLong::operator==(const LongLong& other) const {
    return (highPart == other.highPart) && (lowPart == other.lowPart);
}

LongLong LongLong::operator*(const int& other) const {
    LongLong result;
	result.lowPart = lowPart * other;
	result.highPart = highPart * other;
	return result;
}

LongLong LongLong::operator/(const int& other) const {
    LongLong result;
    result.lowPart = lowPart / other;
    result.highPart = highPart / other;
    result.lowPart += (ULONG_MAX + 1ull) / other * (result.highPart % other);
    return result;
}

long LongLong::GetHighPart() const
{
    return highPart;
}

unsigned long LongLong::GetLowPart() const
{
	return lowPart;
}

void LongLong::SetHighPart(long a)
{
	highPart = a;
}

void LongLong::SetLowPart(unsigned long a)
{
	lowPart = a;
}

void LongLong::Display() const {
    std::cout << "LongLong: " << highPart << " " << lowPart << std::endl;
}

void LongLong::Read() {
    std::cout << "Enter LongLong (highPart lowPart): ";
    std::cin >> highPart >> lowPart;
}

void LongLong::Init(long high, unsigned long low)
{
    highPart = high;
	lowPart = low;
}

std::string LongLong::ToString(LongLong& a)
{
	std::stringstream ss;
	ss << a.GetHighPart() << " " << a.GetLowPart();
	
    return ss.str();
}
