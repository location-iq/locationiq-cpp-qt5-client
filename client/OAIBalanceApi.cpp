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

#include "OAIBalanceApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIBalanceApi::OAIBalanceApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
    : _scheme(scheme),
      _host(host),
      _port(port),
      _basePath(basePath),
      _timeOut(timeOut),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {}

OAIBalanceApi::~OAIBalanceApi() {
}

void OAIBalanceApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIBalanceApi::setHost(const QString &host) {
    _host = host;
}

void OAIBalanceApi::setPort(int port) {
    _port = port;
}

void OAIBalanceApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIBalanceApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIBalanceApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIBalanceApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIBalanceApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIBalanceApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIBalanceApi::abortRequests(){
    emit abortRequestsSignal();
}

void OAIBalanceApi::balance() {
    QString fullPath = QString("%1://%2%3%4%5")
                           .arg(_scheme)
                           .arg(_host)
                           .arg(_port ? ":" + QString::number(_port) : "")
                           .arg(_basePath)
                           .arg("/balance.php");

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIBalanceApi::balanceCallback);
    connect(this, &OAIBalanceApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIBalanceApi::balanceCallback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIBalance output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit balanceSignal(output);
        emit balanceSignalFull(worker, output);
    } else {
        emit balanceSignalE(output, error_type, error_str);
        emit balanceSignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
