#include<bits/stdc++.h>

class Dynamic
{
private:
    int size;
    double *ptr;
public:
    explicit Dynamic(int n = 8);
    explicit Dynamic(const Dynamic& dy);
    Dynamic(int a[], int n);
    ~Dynamic();

    const Dynamic operator=(const Dynamic& dy);
    Dynamic& operator=(int n);
    bool operator==(const Dynamic& dy) const;
    bool operator!=(const Dynamic& dy) const;

    int operator[](int n);

    friend std::ostream& operator<<(std::ostream& out, const Dynamic& dy);
    friend std::istream& operator>>(std::istream& in,Dynamic& dy );
};

