/**
 * LocationIQ
 * LocationIQ provides flexible enterprise-grade location based solutions. We work with developers, startups and enterprises worldwide serving billions of requests everyday. This page provides an overview of the technical aspects of our API and will help you get started.
 *
 * The version of the OpenAPI document: 1.1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBalance.h
 *
 * 
 */

#ifndef OAIBalance_H
#define OAIBalance_H

#include <QJsonObject>

#include "OAIDaybalance.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBalance : public OAIObject {
public:
    OAIBalance();
    OAIBalance(QString json);
    ~OAIBalance() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getStatus() const;
    void setStatus(const QString &status);

    OAIDaybalance getBalance() const;
    void setBalance(const OAIDaybalance &balance);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString status;
    bool m_status_isSet;
    bool m_status_isValid;

    OAIDaybalance balance;
    bool m_balance_isSet;
    bool m_balance_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBalance)

#endif // OAIBalance_H
