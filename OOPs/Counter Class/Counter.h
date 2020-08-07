class Counter{
private:
    int count;
public:
    Counter(int c = 0): count(c) {};
    void getCount() const;
    const Counter operator++(int dummy);
    Counter& operator++(); 
};