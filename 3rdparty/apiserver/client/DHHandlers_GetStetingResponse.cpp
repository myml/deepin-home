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

#include "DHHandlers_GetStetingResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "DHHelpers.h"

namespace DeepinHomeAPI {

DHHandlers_GetStetingResponse::DHHandlers_GetStetingResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

DHHandlers_GetStetingResponse::DHHandlers_GetStetingResponse() {
    this->initializeModel();
}

DHHandlers_GetStetingResponse::~DHHandlers_GetStetingResponse() {}

void DHHandlers_GetStetingResponse::initializeModel() {

    m_key_isSet = false;
    m_key_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;
}

void DHHandlers_GetStetingResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void DHHandlers_GetStetingResponse::fromJsonObject(QJsonObject json) {

    m_key_isValid = ::DeepinHomeAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_value_isValid = ::DeepinHomeAPI::fromJsonValue(value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;
}

QString DHHandlers_GetStetingResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject DHHandlers_GetStetingResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_key_isSet) {
        obj.insert(QString("key"), ::DeepinHomeAPI::toJsonValue(key));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::DeepinHomeAPI::toJsonValue(value));
    }
    return obj;
}

QString DHHandlers_GetStetingResponse::getKey() const {
    return key;
}
void DHHandlers_GetStetingResponse::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool DHHandlers_GetStetingResponse::is_key_Set() const{
    return m_key_isSet;
}

bool DHHandlers_GetStetingResponse::is_key_Valid() const{
    return m_key_isValid;
}

QString DHHandlers_GetStetingResponse::getValue() const {
    return value;
}
void DHHandlers_GetStetingResponse::setValue(const QString &value) {
    this->value = value;
    this->m_value_isSet = true;
}

bool DHHandlers_GetStetingResponse::is_value_Set() const{
    return m_value_isSet;
}

bool DHHandlers_GetStetingResponse::is_value_Valid() const{
    return m_value_isValid;
}

bool DHHandlers_GetStetingResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool DHHandlers_GetStetingResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace DeepinHomeAPI
