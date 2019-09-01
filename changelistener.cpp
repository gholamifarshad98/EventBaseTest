#include "changelistener.h"
#include "iostream"
ChangeListener::ChangeListener(QObject *parent) : QObject(parent)
{

}
void ChangeListener::announceUser(){

    std::cout<<"Somthing is changed"<<std::endl;
}
