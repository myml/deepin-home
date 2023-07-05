/**
 * Deepin官网
 * deepin的官方网站后台接口
 *
 * The version of the OpenAPI document: 1.0
 * Contact: wurongjie@deepin.org
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIHandlers_BBSURLResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIHandlers_BBSURLResponse::OAIHandlers_BBSURLResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIHandlers_BBSURLResponse::OAIHandlers_BBSURLResponse() {
    this->initializeModel();
}

OAIHandlers_BBSURLResponse::~OAIHandlers_BBSURLResponse() {}

void OAIHandlers_BBSURLResponse::initializeModel() {

    m_url_isSet = false;
    m_url_isValid = false;
}

void OAIHandlers_BBSURLResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIHandlers_BBSURLResponse::fromJsonObject(QJsonObject json) {

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;
}

QString OAIHandlers_BBSURLResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIHandlers_BBSURLResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    return obj;
}

QString OAIHandlers_BBSURLResponse::getUrl() const {
    return url;
}
void OAIHandlers_BBSURLResponse::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool OAIHandlers_BBSURLResponse::is_url_Set() const{
    return m_url_isSet;
}

bool OAIHandlers_BBSURLResponse::is_url_Valid() const{
    return m_url_isValid;
}

bool OAIHandlers_BBSURLResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIHandlers_BBSURLResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
