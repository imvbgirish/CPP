#ifndef MYCOMBOMODEL_H
#define MYCOMBOMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QTimer>

class MyComboModel : public QAbstractListModel
{
    Q_OBJECT
public:
    MyComboModel();

    enum roles{
        ITEMS = 1
    };

    // QAbstractItemModel interface
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

private:
    QStringList m_list;
    QStringList m_sourceList;
    QTimer m_timer;
    int m_index = 0;

private slots:
    void addNextItem();

};

#endif // MYCOMBOMODEL_H
