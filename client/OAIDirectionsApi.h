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

#ifndef OAI_OAIDirectionsApi_H
#define OAI_OAIDirectionsApi_H

#include "OAIHttpRequest.h"

#include "OAIDirections_directions.h"
#include "OAIError.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIDirectionsApi : public QObject {
    Q_OBJECT

public:
    OAIDirectionsApi(const QString &scheme = "https", const QString &host = "eu1.locationiq.com", int port = 0, const QString &basePath = "/v1", const int timeOut = 0);
    ~OAIDirectionsApi();

    void setScheme(const QString &scheme);
    void setHost(const QString &host);
    void setPort(int port);
    void setBasePath(const QString &basePath);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();

    void directions(const QString &coordinates, const QString &bearings, const QString &radiuses, const QString &generate_hints, const QString &approaches, const QString &exclude, const double &alternatives, const QString &steps, const QString &annotations, const QString &geometries, const QString &overview, const QString &continue_straight);

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
    int _timeOut;
    QString _workingDirectory;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void directionsCallback(OAIHttpRequestWorker *worker);

signals:

    void directionsSignal(OAIDirections_directions summary);

    void directionsSignalFull(OAIHttpRequestWorker *worker, OAIDirections_directions summary);

    void directionsSignalE(OAIDirections_directions summary, QNetworkReply::NetworkError error_type, QString error_str);

    void directionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
