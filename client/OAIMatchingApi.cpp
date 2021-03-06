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

#include "OAIMatchingApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIMatchingApi::OAIMatchingApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
    : _scheme(scheme),
      _host(host),
      _port(port),
      _basePath(basePath),
      _timeOut(timeOut),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {}

OAIMatchingApi::~OAIMatchingApi() {
}

void OAIMatchingApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIMatchingApi::setHost(const QString &host) {
    _host = host;
}

void OAIMatchingApi::setPort(int port) {
    _port = port;
}

void OAIMatchingApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIMatchingApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIMatchingApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIMatchingApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIMatchingApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIMatchingApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIMatchingApi::abortRequests(){
    emit abortRequestsSignal();
}

void OAIMatchingApi::matching(const QString &coordinates, const QString &generate_hints, const QString &approaches, const QString &exclude, const QString &bearings, const QString &radiuses, const QString &steps, const QString &annotations, const QString &geometries, const QString &overview, const QString &timestamps, const QString &gaps, const QString &tidy, const QString &waypoints) {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/matching/driving/{coordinates}");
    QString coordinatesPathParam("{");
    coordinatesPathParam.append("coordinates").append("}");
    fullPath.replace(coordinatesPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(coordinates)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("generate_hints")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(generate_hints)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("approaches")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(approaches)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("exclude")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(exclude)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("bearings")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(bearings)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("radiuses")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(radiuses)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("steps")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(steps)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("annotations")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(annotations)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("geometries")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(geometries)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("overview")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(overview)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("timestamps")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(timestamps)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("gaps")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(gaps)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("tidy")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(tidy)));

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("waypoints")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(waypoints)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIMatchingApi::matchingCallback);
    connect(this, &OAIMatchingApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIMatchingApi::matchingCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIDirections_matching output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit matchingSignal(output);
        emit matchingSignalFull(worker, output);
    } else {
        emit matchingSignalE(output, error_type, error_str);
        emit matchingSignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
