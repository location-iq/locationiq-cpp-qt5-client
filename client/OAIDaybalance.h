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
 * OAIDaybalance.h
 *
 * 
 */

#ifndef OAIDaybalance_H
#define OAIDaybalance_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDaybalance : public OAIObject {
public:
    OAIDaybalance();
    OAIDaybalance(QString json);
    ~OAIDaybalance() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getDay() const;
    void setDay(const qint32 &day);

    qint32 getBonus() const;
    void setBonus(const qint32 &bonus);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 day;
    bool m_day_isSet;
    bool m_day_isValid;

    qint32 bonus;
    bool m_bonus_isSet;
    bool m_bonus_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDaybalance)

#endif // OAIDaybalance_H
