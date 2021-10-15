

#include <iostream>
using namespace std;

class Shenq
{
protected:
    double erkar;
public:
    Shenq(double a)
    {

    }
    ~Shenq()
    {
        cout << "class Shenq finished:" << "\n";
    }
protected:
    void print_erkar()
    {
        cout << this->erkar << "\n";
    }
};

class Bace : public Shenq
{
    double layn;
public:
    double bardzr;
    Bace(double b, double c, double a) : Shenq(a)
    {
        this->erkar = a;
        this->layn = b;
        this->bardzr = c;
    }
    ~Bace()
    {
        cout << "classes finished:" << "\n";
    }
private:
    void print_layn()
    {
        cout << this->layn << "\n";
    }
public:
    void print_bardzr()
    {
        this->print_erkar();
        this->print_layn();
        cout << this->bardzr << "\n";
    }
};

int main()
{
    Bace txt(10.2, 5.3, 6.4);
    txt.print_bardzr();
    return 0;
}

