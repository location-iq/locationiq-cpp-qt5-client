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

#include "OAIReverseApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIReverseApi::OAIReverseApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
    : _scheme(scheme),
      _host(host),
      _port(port),
      _basePath(basePath),
      _timeOut(timeOut),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {}

OAIReverseApi::~OAIReverseApi() {
}

void OAIReverseApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIReverseApi::setHost(const QString &host) {
    _host = host;
}

void OAIReverseApi::setPort(int port) {
    _port = port;
}

void OAIReverseApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIReverseApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIReverseApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIReverseApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIReverseApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIReverseApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIReverseApi::abortRequests(){
    emit abortRequestsSignal();
}

void OAIReverseApi::reverse(const double &lat, const double &lon, const QString &format, const qint32 &normalizecity, const qint32 &addressdetails, const QString &accept_language, const qint32 &namedetails, const qint32 &extratags, const qint32 &statecode, const qint32 &showdistance, const qint32 &postaladdress) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/reverse.php");

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lat")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(lat)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lon")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(lon)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("format")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(format)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("normalizecity")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(normalizecity)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("addressdetails")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(addressdetails)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accept-language")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(accept_language)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("namedetails")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(namedetails)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("extratags")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(extratags)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("statecode")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(statecode)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("showdistance")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(showdistance)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("postaladdress")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(postaladdress)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIReverseApi::reverseCallback);
    connect(this, &OAIReverseApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIReverseApi::reverseCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAILocation output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit reverseSignal(output);
        emit reverseSignalFull(worker, output);
    } else {
        emit reverseSignalE(output, error_type, error_str);
        emit reverseSignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI