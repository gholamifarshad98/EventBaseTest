#ifndef FINISHALIZATIONLISTENER_H
#define FINISHALIZATIONLISTENER_H

#include <QObject>

class finishalizationListener : public QObject
{
    Q_OBJECT
public:
    explicit finishalizationListener(QObject *parent = 0);

signals:

public slots:
    void announceUser();

};

#endif // FINISHALIZATIONLISTENER_H
