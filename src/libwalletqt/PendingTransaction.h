#ifndef PENDINGTRANSACTION_H
#define PENDINGTRANSACTION_H

#include <QObject>
#include <QList>
#include <QVariant>

#include <wallet/api/wallet2_api.h>

//namespace Flurbo {
//class PendingTransaction;
//}

class PendingTransaction : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Status status READ status)
    Q_PROPERTY(QString errorString READ errorString)
    Q_PROPERTY(quint64 amount READ amount)
    Q_PROPERTY(quint64 dust READ dust)
    Q_PROPERTY(quint64 fee READ fee)
    Q_PROPERTY(QStringList txid READ txid)
    Q_PROPERTY(quint64 txCount READ txCount)
    Q_PROPERTY(QList<QVariant> subaddrIndices READ subaddrIndices)

public:
    enum Status {
        Status_Ok       = Flurbo::PendingTransaction::Status_Ok,
        Status_Error    = Flurbo::PendingTransaction::Status_Error,
        Status_Critical    = Flurbo::PendingTransaction::Status_Critical
    };
    Q_ENUM(Status)

    enum Priority {
        Priority_Low    = Flurbo::PendingTransaction::Priority_Low,
        Priority_Medium = Flurbo::PendingTransaction::Priority_Medium,
        Priority_High   = Flurbo::PendingTransaction::Priority_High
    };
    Q_ENUM(Priority)


    Status status() const;
    QString errorString() const;
    Q_INVOKABLE bool commit();
    quint64 amount() const;
    quint64 dust() const;
    quint64 fee() const;
    QStringList txid() const;
    quint64 txCount() const;
    QList<QVariant> subaddrIndices() const;
    Q_INVOKABLE void setFilename(const QString &fileName);

private:
    explicit PendingTransaction(Flurbo::PendingTransaction * pt, QObject *parent = 0);

private:
    friend class Wallet;
    Flurbo::PendingTransaction * m_pimpl;
    QString m_fileName;
};

#endif // PENDINGTRANSACTION_H
