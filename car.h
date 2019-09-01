#ifndef CAR_H
#define CAR_H

#include <QObject>
#include "initiatelistener.h"
#include"finishalizationlistener.h"
#include"changelistener.h"
class car : public QObject
{
    Q_OBJECT
public:
    explicit car(QObject *parent = 0);
    int age;
    double weight;
    double height;
    void setWeight(double weight);
    void setAge(int age);
    void setHeight(double height);
    ~car();
signals:
    void somthingChanged();
    void somthingIsAdded();
    void somthingIsDeleted();
public slots:
};

#endif // CAR_H
