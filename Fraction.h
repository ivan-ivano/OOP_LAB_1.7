// Fraction.h
#include "LongLong.h"

class Fraction {
private:
    LongLong integerPart;
    unsigned short int fractionalPart;

public:
    Fraction();
    Fraction(const LongLong& intPart, unsigned short fracPart);

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    bool operator==(const Fraction& other) const;

    void Display() const;
    void Read();
    void Init(LongLong intPart, unsigned short fracPart);
    std::string ToString(Fraction& a);

    LongLong GetIntegerPart() const;
    unsigned short GetFractionalPart() const;
    void SetIntegerPart(const LongLong& a);
    void SetFractionalPart(unsigned short a);
};
