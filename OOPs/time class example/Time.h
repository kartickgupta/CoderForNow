class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h, int m, int s);
    void setHours(int h);
    int getHours() const;           //const is used for seperation btw getter and setter
    void setMinutes(int m);         // const member functions cannot modify the values
    int getMinutes() const;
    void setSeconds(int s);
    int getSeconds() const;
    void print() const;
    void setTime(int h, int m, int s);
    void nextSecond();   
};

