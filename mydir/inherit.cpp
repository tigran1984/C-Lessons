#include<iostream>
#include<string>

class Person {
public:
    std::string m_strName ;
    int m_nAge ;
    bool m_bMale ;

    std::string GetName() { return m_strName ; }
    int GetAge() { return m_nAge ; }
    bool  IsMale() { return m_bMale ; }

    Person (std::string strName = "", int nAge = 0, bool bMale = false)
        : m_strName(strName), m_nAge(nAge), m_bMale(bMale)  {
        }
};

class JudoFighter : public Person {
public :
    double m_dBattingAverage ;
    int m_nHomeRuns;

    JudoFighter ( double dBattingAverage = 0.0, int nHomeRuns = 0 )
        : m_dBattingAverage(dBattingAverage), m_nHomeRuns(nHomeRuns) {
        }
};

int main () {
    JudoFighter cDoe;
    cDoe.m_strName = "Joe";
    std::cout << cDoe.GetName() << std::endl;
    return 0;
}


