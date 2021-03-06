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

#include "OAILocation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILocation::OAILocation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILocation::OAILocation() {
    this->initializeModel();
}

OAILocation::~OAILocation() {}

void OAILocation::initializeModel() {

    m_distance_isSet = false;
    m_distance_isValid = false;

    m_place_id_isSet = false;
    m_place_id_isValid = false;

    m_licence_isSet = false;
    m_licence_isValid = false;

    m_osm_type_isSet = false;
    m_osm_type_isValid = false;

    m_osm_id_isSet = false;
    m_osm_id_isValid = false;

    m_boundingbox_isSet = false;
    m_boundingbox_isValid = false;

    m_lat_isSet = false;
    m_lat_isValid = false;

    m_lon_isSet = false;
    m_lon_isValid = false;

    m_display_name_isSet = false;
    m_display_name_isValid = false;

    m__class_isSet = false;
    m__class_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_importance_isSet = false;
    m_importance_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_namedetails_isSet = false;
    m_namedetails_isValid = false;

    m_matchquality_isSet = false;
    m_matchquality_isValid = false;
}

void OAILocation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILocation::fromJsonObject(QJsonObject json) {

    m_distance_isValid = ::OpenAPI::fromJsonValue(distance, json[QString("distance")]);
    m_distance_isSet = !json[QString("distance")].isNull() && m_distance_isValid;

    m_place_id_isValid = ::OpenAPI::fromJsonValue(place_id, json[QString("place_id")]);
    m_place_id_isSet = !json[QString("place_id")].isNull() && m_place_id_isValid;

    m_licence_isValid = ::OpenAPI::fromJsonValue(licence, json[QString("licence")]);
    m_licence_isSet = !json[QString("licence")].isNull() && m_licence_isValid;

    m_osm_type_isValid = ::OpenAPI::fromJsonValue(osm_type, json[QString("osm_type")]);
    m_osm_type_isSet = !json[QString("osm_type")].isNull() && m_osm_type_isValid;

    m_osm_id_isValid = ::OpenAPI::fromJsonValue(osm_id, json[QString("osm_id")]);
    m_osm_id_isSet = !json[QString("osm_id")].isNull() && m_osm_id_isValid;

    m_boundingbox_isValid = ::OpenAPI::fromJsonValue(boundingbox, json[QString("boundingbox")]);
    m_boundingbox_isSet = !json[QString("boundingbox")].isNull() && m_boundingbox_isValid;

    m_lat_isValid = ::OpenAPI::fromJsonValue(lat, json[QString("lat")]);
    m_lat_isSet = !json[QString("lat")].isNull() && m_lat_isValid;

    m_lon_isValid = ::OpenAPI::fromJsonValue(lon, json[QString("lon")]);
    m_lon_isSet = !json[QString("lon")].isNull() && m_lon_isValid;

    m_display_name_isValid = ::OpenAPI::fromJsonValue(display_name, json[QString("display_name")]);
    m_display_name_isSet = !json[QString("display_name")].isNull() && m_display_name_isValid;

    m__class_isValid = ::OpenAPI::fromJsonValue(_class, json[QString("class")]);
    m__class_isSet = !json[QString("class")].isNull() && m__class_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_importance_isValid = ::OpenAPI::fromJsonValue(importance, json[QString("importance")]);
    m_importance_isSet = !json[QString("importance")].isNull() && m_importance_isValid;

    m_address_isValid = ::OpenAPI::fromJsonValue(address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_namedetails_isValid = ::OpenAPI::fromJsonValue(namedetails, json[QString("namedetails")]);
    m_namedetails_isSet = !json[QString("namedetails")].isNull() && m_namedetails_isValid;

    m_matchquality_isValid = ::OpenAPI::fromJsonValue(matchquality, json[QString("matchquality")]);
    m_matchquality_isSet = !json[QString("matchquality")].isNull() && m_matchquality_isValid;
}

QString OAILocation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILocation::asJsonObject() const {
    QJsonObject obj;
    if (m_distance_isSet) {
        obj.insert(QString("distance"), ::OpenAPI::toJsonValue(distance));
    }
    if (m_place_id_isSet) {
        obj.insert(QString("place_id"), ::OpenAPI::toJsonValue(place_id));
    }
    if (m_licence_isSet) {
        obj.insert(QString("licence"), ::OpenAPI::toJsonValue(licence));
    }
    if (m_osm_type_isSet) {
        obj.insert(QString("osm_type"), ::OpenAPI::toJsonValue(osm_type));
    }
    if (m_osm_id_isSet) {
        obj.insert(QString("osm_id"), ::OpenAPI::toJsonValue(osm_id));
    }
    if (boundingbox.size() > 0) {
        obj.insert(QString("boundingbox"), ::OpenAPI::toJsonValue(boundingbox));
    }
    if (m_lat_isSet) {
        obj.insert(QString("lat"), ::OpenAPI::toJsonValue(lat));
    }
    if (m_lon_isSet) {
        obj.insert(QString("lon"), ::OpenAPI::toJsonValue(lon));
    }
    if (m_display_name_isSet) {
        obj.insert(QString("display_name"), ::OpenAPI::toJsonValue(display_name));
    }
    if (m__class_isSet) {
        obj.insert(QString("class"), ::OpenAPI::toJsonValue(_class));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_importance_isSet) {
        obj.insert(QString("importance"), ::OpenAPI::toJsonValue(importance));
    }
    if (address.isSet()) {
        obj.insert(QString("address"), ::OpenAPI::toJsonValue(address));
    }
    if (namedetails.isSet()) {
        obj.insert(QString("namedetails"), ::OpenAPI::toJsonValue(namedetails));
    }
    if (matchquality.isSet()) {
        obj.insert(QString("matchquality"), ::OpenAPI::toJsonValue(matchquality));
    }
    return obj;
}

double OAILocation::getDistance() const {
    return distance;
}
void OAILocation::setDistance(const double &distance) {
    this->distance = distance;
    this->m_distance_isSet = true;
}

QString OAILocation::getPlaceId() const {
    return place_id;
}
void OAILocation::setPlaceId(const QString &place_id) {
    this->place_id = place_id;
    this->m_place_id_isSet = true;
}

QString OAILocation::getLicence() const {
    return licence;
}
void OAILocation::setLicence(const QString &licence) {
    this->licence = licence;
    this->m_licence_isSet = true;
}

QString OAILocation::getOsmType() const {
    return osm_type;
}
void OAILocation::setOsmType(const QString &osm_type) {
    this->osm_type = osm_type;
    this->m_osm_type_isSet = true;
}

QString OAILocation::getOsmId() const {
    return osm_id;
}
void OAILocation::setOsmId(const QString &osm_id) {
    this->osm_id = osm_id;
    this->m_osm_id_isSet = true;
}

QList<QString> OAILocation::getBoundingbox() const {
    return boundingbox;
}
void OAILocation::setBoundingbox(const QList<QString> &boundingbox) {
    this->boundingbox = boundingbox;
    this->m_boundingbox_isSet = true;
}

QString OAILocation::getLat() const {
    return lat;
}
void OAILocation::setLat(const QString &lat) {
    this->lat = lat;
    this->m_lat_isSet = true;
}

QString OAILocation::getLon() const {
    return lon;
}
void OAILocation::setLon(const QString &lon) {
    this->lon = lon;
    this->m_lon_isSet = true;
}

QString OAILocation::getDisplayName() const {
    return display_name;
}
void OAILocation::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

QString OAILocation::getClass() const {
    return _class;
}
void OAILocation::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString OAILocation::getType() const {
    return type;
}
void OAILocation::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

double OAILocation::getImportance() const {
    return importance;
}
void OAILocation::setImportance(const double &importance) {
    this->importance = importance;
    this->m_importance_isSet = true;
}

OAIAddress OAILocation::getAddress() const {
    return address;
}
void OAILocation::setAddress(const OAIAddress &address) {
    this->address = address;
    this->m_address_isSet = true;
}

OAINamedetails OAILocation::getNamedetails() const {
    return namedetails;
}
void OAILocation::setNamedetails(const OAINamedetails &namedetails) {
    this->namedetails = namedetails;
    this->m_namedetails_isSet = true;
}

OAIMatchquality OAILocation::getMatchquality() const {
    return matchquality;
}
void OAILocation::setMatchquality(const OAIMatchquality &matchquality) {
    this->matchquality = matchquality;
    this->m_matchquality_isSet = true;
}

bool OAILocation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_distance_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_place_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_licence_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_osm_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_osm_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (boundingbox.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_lat_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m__class_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_importance_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (address.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (namedetails.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (matchquality.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILocation::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
