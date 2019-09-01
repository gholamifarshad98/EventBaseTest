#ifndef CHANGELISTENER_H
#define CHANGELISTENER_H

#include <QObject>

class ChangeListener : public QObject
{
    Q_OBJECT
public:
    explicit ChangeListener(QObject *parent = 0);

signals:

public slots:
    void announceUser();

};

#endif // CHANGELISTENER_H
