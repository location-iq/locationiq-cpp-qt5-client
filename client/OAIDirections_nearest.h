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
 * OAIDirections_nearest.h
 *
 * 
 */

#ifndef OAIDirections_nearest_H
#define OAIDirections_nearest_H

#include <QJsonObject>

#include "OAIDirections_nearest_waypoints.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDirections_nearest : public OAIObject {
public:
    OAIDirections_nearest();
    OAIDirections_nearest(QString json);
    ~OAIDirections_nearest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCode() const;
    void setCode(const QString &code);

    QList<OAIDirections_nearest_waypoints> getWaypoints() const;
    void setWaypoints(const QList<OAIDirections_nearest_waypoints> &waypoints);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString code;
    bool m_code_isSet;
    bool m_code_isValid;

    QList<OAIDirections_nearest_waypoints> waypoints;
    bool m_waypoints_isSet;
    bool m_waypoints_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDirections_nearest)

#endif // OAIDirections_nearest_H