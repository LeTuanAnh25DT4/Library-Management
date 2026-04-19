#ifndef LIB
#define LIB
#include <iostream>
#include <string>
using namespace std;

class date{
    private:
        int day;
        int month;
        int year;
    public:
        date(): day(1), month(1), year(2000){}
        date(int d, int m, int y): day(d), month(m), year(y){}
        void display(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
};

#endif