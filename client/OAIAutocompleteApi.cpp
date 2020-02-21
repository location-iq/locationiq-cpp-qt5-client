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

#include "OAIAutocompleteApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIAutocompleteApi::OAIAutocompleteApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
    : _scheme(scheme),
      _host(host),
      _port(port),
      _basePath(basePath),
      _timeOut(timeOut),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {}

OAIAutocompleteApi::~OAIAutocompleteApi() {
}

void OAIAutocompleteApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIAutocompleteApi::setHost(const QString &host) {
    _host = host;
}

void OAIAutocompleteApi::setPort(int port) {
    _port = port;
}

void OAIAutocompleteApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIAutocompleteApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIAutocompleteApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIAutocompleteApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIAutocompleteApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIAutocompleteApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIAutocompleteApi::abortRequests(){
    emit abortRequestsSignal();
}

void OAIAutocompleteApi::autocomplete(const QString &q, const qint32 &normalizecity, const qint32 &limit, const QString &viewbox, const qint32 &bounded, const QString &countrycodes, const QString &accept_language, const QString &tag) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/autocomplete.php");

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("q")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(q)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(limit)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("viewbox")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(viewbox)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("bounded")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(bounded)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("countrycodes")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(countrycodes)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("normalizecity")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(normalizecity)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accept-language")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(accept_language)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("tag")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(tag)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIAutocompleteApi::autocompleteCallback);
    connect(this, &OAIAutocompleteApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIAutocompleteApi::autocompleteCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    QList<OAIObject> output;
    QString json(worker->response);
    QByteArray array(json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    foreach (QJsonValue obj, jsonArray) {
        OAIObject val;
        ::OpenAPI::fromJsonValue(val, obj);
        output.append(val);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit autocompleteSignal(output);
        emit autocompleteSignalFull(worker, output);
    } else {
        emit autocompleteSignalE(output, error_type, error_str);
        emit autocompleteSignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
