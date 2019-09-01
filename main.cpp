#include <QCoreApplication>
#include"iostream"
#include"car.h"
#include "changelistener.h"
#include"initiatelistener.h"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    car* BlueCar= new car();
    car* RedCar=new car();
    BlueCar->setAge(2018);
    RedCar->setAge(2019);
    cout<<"Blue car age is "<<BlueCar->age<<" ,and Red car age is "<<RedCar->age<<endl;
    BlueCar->setAge(2020);
    RedCar->setAge(2020);
    delete BlueCar;
    delete RedCar;
    return a.exec();
}
