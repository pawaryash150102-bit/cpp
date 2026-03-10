#include<iostream>
using namespace std;
struct Date{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate(){
        day=10;
        month=3;
        year=2026;
    }
    void printDateOnConsole(){
        cout<<"DAY : "<<day<<" MONTH : "<<month<<" YEAR : "<<year;
    } 
    void acceptDateFromConsole(){
        cout<<"ENTER the day :";
        cin>>day;
        cout<<"ENTER the month :";
        cin>>month;
        cout<<"ENTER the year:";
        cin>>year;

    } 
    bool isLeapYear(){
        if((year %4==0 && year%100 !=0) || year%400==0)
        {
            return true;
        }
        return false;
    }

};
void menu()
{
     cout<<endl<<" PRESS 0 : EXIT :"<<endl;
    cout<<"PRESS 1 : ACCEPT DATE :"<<endl;
    cout<<"PRESS 2 : DISPLAY DATE :"<<endl;
    cout<<"PRESS 3 : LEAP YEAR :"<<endl;

}
int main()
{
    int choice;
    cout<<"Enter the choice :";
    struct Date d;
    d.initDate();
    do{
        menu();
        
        
        cin>>choice;
        switch (choice)
        {
        case 1:
            d.acceptDateFromConsole();            
            break;
        case 2:
             d.printDateOnConsole();
             break;
        case 3:
            bool leap;
            leap=d.isLeapYear();
             cout<<"This year is (Leap=1/not leap=0) :"<<leap;
             break;
        case 0:
            cout<<"EXITING"<<endl;
            break;
        default:
            cout<<"Invalid choice<<endl";
            break;
        }

    }while(choice!=0);

    return 0;
}