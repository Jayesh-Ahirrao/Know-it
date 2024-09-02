
class Date
{
private:
    int day, month, year;

public:
    void setDate(int, int, int);
    void showDate();

    // getters
    int getDay();
    int getMonth();
    int getYear();
    
    // setters
    void setMonth(int);
    void setYear(int);
    void setDay(int);
};