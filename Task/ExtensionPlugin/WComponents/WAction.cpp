#include "WAction.h"

WAction::WAction(QObject *parent)
    : QObject{parent}
{
    qDebug()<<Q_FUNC_INFO<<"Constructor called";
}

WAction::~WAction()
{
    qDebug()<<Q_FUNC_INFO<<"Destructor called";
}
