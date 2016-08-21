#include <iostream>
 
class DateClass 
{
    int m_month; 
    int m_day; 
    int m_year; 
 
public:
    void setDate(int month, int day, int year) 
    {
        m_month = month;
        m_day = day;
        m_year = year;
    }
 
    void print() 
    {
        std::cout << m_month << "/" << m_day << "/" << m_year << std::endl   ;
    }
};
 
int main()
{
    DateClass date;
    date.setDate(20, 8, 2016); 
    date.print(); 
 
    return 0;
}
