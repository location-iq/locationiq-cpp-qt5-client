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

#ifndef OAI_OAIAutocompleteApi_H
#define OAI_OAIAutocompleteApi_H

#include "OAIHttpRequest.h"

#include "OAIError.h"
#include "OAIObject.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIAutocompleteApi : public QObject {
    Q_OBJECT

public:
    OAIAutocompleteApi(const QString &scheme = "https", const QString &host = "eu1.locationiq.com", int port = 0, const QString &basePath = "/v1", const int timeOut = 0);
    ~OAIAutocompleteApi();

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

    void autocomplete(const QString &q, const qint32 &normalizecity, const qint32 &limit, const QString &viewbox, const qint32 &bounded, const QString &countrycodes, const QString &accept_language, const QString &tag);

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
    int _timeOut;
    QString _workingDirectory;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void autocompleteCallback(OAIHttpRequestWorker *worker);

signals:

    void autocompleteSignal(QList<OAIObject> summary);

    void autocompleteSignalFull(OAIHttpRequestWorker *worker, QList<OAIObject> summary);

    void autocompleteSignalE(QList<OAIObject> summary, QNetworkReply::NetworkError error_type, QString error_str);

    void autocompleteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
