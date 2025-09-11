#include "mycombomodel.h"

MyComboModel::MyComboModel() {
    m_sourceList << "Banana" << "Apple" << "Coco";

    // m_list.append("B");
    // m_list.append("C");

    m_timer.setInterval(2000);
    connect(&m_timer, &QTimer::timeout, this, &MyComboModel::addNextItem);
    m_timer.start();
}


int MyComboModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_list.size();
}

QVariant MyComboModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid() || index.row() >= m_list.size())
        return QVariant();

    if(role == ITEMS)
        return m_list.at(index.row());

    return QVariant();
}

QHash<int, QByteArray> MyComboModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[ITEMS] = "item";
    return roles;
}

void MyComboModel::addNextItem()
{
    if (m_index >= m_sourceList.size()) {
        m_timer.stop();
        return;
    }

    beginInsertRows(QModelIndex(), m_list.size(), m_list.size());
    m_list.append(m_sourceList.at(m_index));
    endInsertRows();

    m_index++;
}
