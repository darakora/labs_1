#include <iostream>

struct Integer
{
    int value;
    Integer () = default;
    /*Integer (int v)
    {
        value = v;
    }*/
    Integer (int v) : value(v) {};
    Integer operator= (/*Integer *this */Integer that)
    {
        std::cout << "operator=" << std::endl;
        this->value = that.value;
        return *this;
    }
};

int main()
{
    Integer a(4);
    Integer b = 5;
    Integer c{10};
    a = b = c;
    a.operator=(b.operator= (c));

    return 0;
}
