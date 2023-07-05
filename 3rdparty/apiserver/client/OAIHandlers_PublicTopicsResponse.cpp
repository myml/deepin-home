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

#include "OAIHandlers_PublicTopicsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIHandlers_PublicTopicsResponse::OAIHandlers_PublicTopicsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIHandlers_PublicTopicsResponse::OAIHandlers_PublicTopicsResponse() {
    this->initializeModel();
}

OAIHandlers_PublicTopicsResponse::~OAIHandlers_PublicTopicsResponse() {}

void OAIHandlers_PublicTopicsResponse::initializeModel() {

    m_refresh_time_isSet = false;
    m_refresh_time_isValid = false;

    m_topics_isSet = false;
    m_topics_isValid = false;
}

void OAIHandlers_PublicTopicsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIHandlers_PublicTopicsResponse::fromJsonObject(QJsonObject json) {

    m_refresh_time_isValid = ::OpenAPI::fromJsonValue(refresh_time, json[QString("refresh_time")]);
    m_refresh_time_isSet = !json[QString("refresh_time")].isNull() && m_refresh_time_isValid;

    m_topics_isValid = ::OpenAPI::fromJsonValue(topics, json[QString("topics")]);
    m_topics_isSet = !json[QString("topics")].isNull() && m_topics_isValid;
}

QString OAIHandlers_PublicTopicsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIHandlers_PublicTopicsResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_refresh_time_isSet) {
        obj.insert(QString("refresh_time"), ::OpenAPI::toJsonValue(refresh_time));
    }
    if (topics.size() > 0) {
        obj.insert(QString("topics"), ::OpenAPI::toJsonValue(topics));
    }
    return obj;
}

qint32 OAIHandlers_PublicTopicsResponse::getRefreshTime() const {
    return refresh_time;
}
void OAIHandlers_PublicTopicsResponse::setRefreshTime(const qint32 &refresh_time) {
    this->refresh_time = refresh_time;
    this->m_refresh_time_isSet = true;
}

bool OAIHandlers_PublicTopicsResponse::is_refresh_time_Set() const{
    return m_refresh_time_isSet;
}

bool OAIHandlers_PublicTopicsResponse::is_refresh_time_Valid() const{
    return m_refresh_time_isValid;
}

QList<OAIHandlers_Topic> OAIHandlers_PublicTopicsResponse::getTopics() const {
    return topics;
}
void OAIHandlers_PublicTopicsResponse::setTopics(const QList<OAIHandlers_Topic> &topics) {
    this->topics = topics;
    this->m_topics_isSet = true;
}

bool OAIHandlers_PublicTopicsResponse::is_topics_Set() const{
    return m_topics_isSet;
}

bool OAIHandlers_PublicTopicsResponse::is_topics_Valid() const{
    return m_topics_isValid;
}

bool OAIHandlers_PublicTopicsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_refresh_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (topics.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIHandlers_PublicTopicsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
