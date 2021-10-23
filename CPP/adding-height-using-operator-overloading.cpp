#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet, inches;
    public:
        void set_data(int f,int i)
        {
            feet=f;
            inches=i;
            if(inches>=12)
            {
                feet=feet+(inches/12);
                inches=inches%12;
            }
        }
        Distance operator+(Distance b)
        {
            Distance temp;

            feet=feet+b.feet;
            inches=inches+b.inches;
            if(inches>=12)
            {
                feet=feet+(inches/12);
                inches=inches%12;
            }

            temp.feet=feet;
            temp.inches=inches;
            return temp;
        }
        void display()
        {
            cout<<"Feet: "<<feet<<" Inches: "<<inches<<endl;
        }
};

int main()
{
    Distance d1,d2,d3;
    d1.set_data(2,9);
    cout<<"First Distance is: ";
    d1.display();
    d2.set_data(4,9);
    cout<<"Second Distance is: ";
    d2.display();
    cout<<"After Adding  Distance is: ";
    d3 =d1+d2;
    d3.display();
    return 0;
}
