#include "initiatelistener.h"
#include"iostream"
initiateListener::initiateListener(QObject *parent) : QObject(parent)
{

}
void initiateListener::announceUser(){
    std::cout<< "Somthing is added"<<std::endl;
}
