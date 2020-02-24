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

#include "OAIDirections_matrix_sources.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDirections_matrix_sources::OAIDirections_matrix_sources(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDirections_matrix_sources::OAIDirections_matrix_sources() {
    this->initializeModel();
}

OAIDirections_matrix_sources::~OAIDirections_matrix_sources() {}

void OAIDirections_matrix_sources::initializeModel() {

    m_distance_isSet = false;
    m_distance_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;
}

void OAIDirections_matrix_sources::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDirections_matrix_sources::fromJsonObject(QJsonObject json) {

    m_distance_isValid = ::OpenAPI::fromJsonValue(distance, json[QString("distance")]);
    m_distance_isSet = !json[QString("distance")].isNull() && m_distance_isValid;

    m_location_isValid = ::OpenAPI::fromJsonValue(location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;
}

QString OAIDirections_matrix_sources::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDirections_matrix_sources::asJsonObject() const {
    QJsonObject obj;
    if (m_distance_isSet) {
        obj.insert(QString("distance"), ::OpenAPI::toJsonValue(distance));
    }
    if (location.size() > 0) {
        obj.insert(QString("location"), ::OpenAPI::toJsonValue(location));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    return obj;
}

double OAIDirections_matrix_sources::getDistance() const {
    return distance;
}
void OAIDirections_matrix_sources::setDistance(const double &distance) {
    this->distance = distance;
    this->m_distance_isSet = true;
}

QList<double> OAIDirections_matrix_sources::getLocation() const {
    return location;
}
void OAIDirections_matrix_sources::setLocation(const QList<double> &location) {
    this->location = location;
    this->m_location_isSet = true;
}

QString OAIDirections_matrix_sources::getName() const {
    return name;
}
void OAIDirections_matrix_sources::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIDirections_matrix_sources::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_distance_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (location.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDirections_matrix_sources::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
