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

/*
 * OAIHandlers_ClientBBSTokenRequest.h
 *
 * 
 */

#ifndef OAIHandlers_ClientBBSTokenRequest_H
#define OAIHandlers_ClientBBSTokenRequest_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIHandlers_ClientBBSTokenRequest : public OAIObject {
public:
    OAIHandlers_ClientBBSTokenRequest();
    OAIHandlers_ClientBBSTokenRequest(QString json);
    ~OAIHandlers_ClientBBSTokenRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getSecret() const;
    void setSecret(const QString &secret);
    bool is_secret_Set() const;
    bool is_secret_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString secret;
    bool m_secret_isSet;
    bool m_secret_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIHandlers_ClientBBSTokenRequest)

#endif // OAIHandlers_ClientBBSTokenRequest_H
