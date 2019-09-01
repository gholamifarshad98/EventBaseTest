#include "car.h"

car::car(QObject *parent) : QObject(parent)
{
    initiateListener* initiatelistener=new initiateListener();
    finishalizationListener* finishalizationlistener=new finishalizationListener();
    ChangeListener* changelidtener= new ChangeListener();
    QObject::connect(this, SIGNAL(somthingIsAdded()),initiatelistener,SLOT(announceUser()));
    QObject:: connect(this, SIGNAL(somthingIsDeleted()),finishalizationlistener,SLOT(announceUser()));
    QObject::connect(this, SIGNAL(somthingChanged()),changelidtener,SLOT(announceUser()));

    this->age=10;
    this->weight=750;
    this->height=1.65;
    emit somthingIsAdded();
}
void car::setAge(int age){
    this->age=age;
    emit somthingChanged();
}

void car::setHeight(double height){
    this->height=height;
    emit somthingChanged();
}

void car::setWeight(double weight){
    this->weight=weight;
    emit somthingChanged();
}
car::~car(){
    emit somthingIsDeleted();

}
