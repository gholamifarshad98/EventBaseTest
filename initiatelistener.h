#ifndef INITIATELISTENER_H
#define INITIATELISTENER_H

#include <QObject>
class initiateListener : public QObject
{
    Q_OBJECT
public:
    explicit initiateListener(QObject *parent = 0);

signals:

public slots:
    void announceUser();
};

#endif // INITIATELISTENER_H
