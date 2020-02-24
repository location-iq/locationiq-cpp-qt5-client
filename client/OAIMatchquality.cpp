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

#include "OAIMatchquality.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMatchquality::OAIMatchquality(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMatchquality::OAIMatchquality() {
    this->initializeModel();
}

OAIMatchquality::~OAIMatchquality() {}

void OAIMatchquality::initializeModel() {

    m_matchcode_isSet = false;
    m_matchcode_isValid = false;

    m_matchtype_isSet = false;
    m_matchtype_isValid = false;

    m_matchlevel_isSet = false;
    m_matchlevel_isValid = false;
}

void OAIMatchquality::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMatchquality::fromJsonObject(QJsonObject json) {

    m_matchcode_isValid = ::OpenAPI::fromJsonValue(matchcode, json[QString("matchcode")]);
    m_matchcode_isSet = !json[QString("matchcode")].isNull() && m_matchcode_isValid;

    m_matchtype_isValid = ::OpenAPI::fromJsonValue(matchtype, json[QString("matchtype")]);
    m_matchtype_isSet = !json[QString("matchtype")].isNull() && m_matchtype_isValid;

    m_matchlevel_isValid = ::OpenAPI::fromJsonValue(matchlevel, json[QString("matchlevel")]);
    m_matchlevel_isSet = !json[QString("matchlevel")].isNull() && m_matchlevel_isValid;
}

QString OAIMatchquality::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMatchquality::asJsonObject() const {
    QJsonObject obj;
    if (m_matchcode_isSet) {
        obj.insert(QString("matchcode"), ::OpenAPI::toJsonValue(matchcode));
    }
    if (m_matchtype_isSet) {
        obj.insert(QString("matchtype"), ::OpenAPI::toJsonValue(matchtype));
    }
    if (m_matchlevel_isSet) {
        obj.insert(QString("matchlevel"), ::OpenAPI::toJsonValue(matchlevel));
    }
    return obj;
}

QString OAIMatchquality::getMatchcode() const {
    return matchcode;
}
void OAIMatchquality::setMatchcode(const QString &matchcode) {
    this->matchcode = matchcode;
    this->m_matchcode_isSet = true;
}

QString OAIMatchquality::getMatchtype() const {
    return matchtype;
}
void OAIMatchquality::setMatchtype(const QString &matchtype) {
    this->matchtype = matchtype;
    this->m_matchtype_isSet = true;
}

QString OAIMatchquality::getMatchlevel() const {
    return matchlevel;
}
void OAIMatchquality::setMatchlevel(const QString &matchlevel) {
    this->matchlevel = matchlevel;
    this->m_matchlevel_isSet = true;
}

bool OAIMatchquality::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_matchcode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_matchtype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_matchlevel_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMatchquality::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
