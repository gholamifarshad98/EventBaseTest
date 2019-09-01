#include "finishalizationlistener.h"
#include"iostream"
finishalizationListener::finishalizationListener(QObject *parent) : QObject(parent)
{

}
void finishalizationListener::announceUser(){
    std::cout<<"an object is deleted"<<std::endl;
}
