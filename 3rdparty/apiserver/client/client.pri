QT += network

HEADERS += \
# Models
    $${PWD}/OAIHandlers_BBSURLRequest.h \
    $${PWD}/OAIHandlers_BBSURLResponse.h \
    $${PWD}/OAIHandlers_ClientBBSTokenRequest.h \
    $${PWD}/OAIHandlers_ClientBBSTokenResponse.h \
    $${PWD}/OAIHandlers_ClientConfigResponse.h \
    $${PWD}/OAIHandlers_ClientNotifyListResponse.h \
    $${PWD}/OAIHandlers_ClientQuestionnaireListResponse.h \
    $${PWD}/OAIHandlers_NodeSelectResponse.h \
    $${PWD}/OAIHandlers_PublicTopicsResponse.h \
    $${PWD}/OAIHandlers_Topic.h \
# APIs
    $${PWD}/OAIClientApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h \
    $${PWD}/OAIServerConfiguration.h \
    $${PWD}/OAIServerVariable.h \
    $${PWD}/OAIOauth.h

SOURCES += \
# Models
    $${PWD}/OAIHandlers_BBSURLRequest.cpp \
    $${PWD}/OAIHandlers_BBSURLResponse.cpp \
    $${PWD}/OAIHandlers_ClientBBSTokenRequest.cpp \
    $${PWD}/OAIHandlers_ClientBBSTokenResponse.cpp \
    $${PWD}/OAIHandlers_ClientConfigResponse.cpp \
    $${PWD}/OAIHandlers_ClientNotifyListResponse.cpp \
    $${PWD}/OAIHandlers_ClientQuestionnaireListResponse.cpp \
    $${PWD}/OAIHandlers_NodeSelectResponse.cpp \
    $${PWD}/OAIHandlers_PublicTopicsResponse.cpp \
    $${PWD}/OAIHandlers_Topic.cpp \
# APIs
    $${PWD}/OAIClientApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp \
    $${PWD}/OAIOauth.cpp
