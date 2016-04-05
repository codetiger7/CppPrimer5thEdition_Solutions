#ifndef YCLASS
#define YCLASS

struct Y;

struct X
{
    Y* y{nullptr};
};

struct Y
{
    X x;
};

#endif // YCLASS

