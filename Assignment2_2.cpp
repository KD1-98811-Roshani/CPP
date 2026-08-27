#include<iostream>
using namespace std;

class Volume
{
    private:
    int totalCars;
    double totalCash;

    public:

    Volume(void)
    {
        this->totalCars = 0;
        this->totalCash = 0;
    }

    void payingCar(void)
    {
        this->totalCars++;
        this->totalCash = this->totalCash + 0.50;
    }

    void nopayCar(void)
    {
        this->totalCars++;
    }

    void printOnConsole(void)
    {
        int payingCars;
        int nonPayingCars;

        payingCars = (int)(this->totalCash / 0.50);
        nonPayingCars = this->totalCars - payingCars;

        cout<<"Total Cars = "<<this->totalCars<<endl;
        cout<<"Total Cash = "<<this->totalCash<<endl;
        cout<<"Paying Cars = "<<payingCars<<endl;
        cout<<"Non Paying Cars = "<<nonPayingCars<<endl;
    }
};

int menulist(void)
{
    int choice;

    cout<<"0. Exit\n";
    cout<<"1. Paying Car\n";
    cout<<"2. Non Paying Car\n";
    cout<<"3. Display Details\n";

    cin>>choice;
    return choice;
}

int main()
{
    int choice;
    Volume v1;

    while((choice=menulist())!=0)
    {
        switch(choice)
        {
            case 1:
            {
                v1.payingCar();
                break;
            }

            case 2:
            {
                v1.nopayCar();
                break;
            }

            case 3:
            {
                v1.printOnConsole();
                break;
            }

            default:
            {
                cout<<"Enter only 0,1,2,3"<<endl;
                break;
            }
        }
    }

    return 0;
}