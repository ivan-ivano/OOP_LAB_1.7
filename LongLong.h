// LongLong.
#include <sstream>
#include <string>


class LongLong {
private:
    long highPart;
    unsigned long lowPart;

public:
    LongLong();
    LongLong(long high, unsigned long low);

    LongLong operator+(const LongLong& other) const;
    LongLong operator-(const LongLong& other) const;
    LongLong operator*(const LongLong& other) const;

    bool operator==(const LongLong& other) const;

    LongLong operator*(const int& other) const;

    LongLong operator/(const int& other) const;

    long GetHighPart() const;
    unsigned long GetLowPart() const;
    void SetHighPart(long a);
    void SetLowPart(unsigned long a);

    void Display() const;
    void Read();

    void Init(long high, unsigned long low);

    std::string ToString(LongLong& a);
};
