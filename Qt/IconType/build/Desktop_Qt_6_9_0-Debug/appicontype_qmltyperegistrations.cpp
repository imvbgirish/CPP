/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<emoji.h>)
#  include <emoji.h>
#endif
#if __has_include(<message.h>)
#  include <message.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_IconType()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<Emoji>("IconType", 1);
    qmlRegisterTypesAndRevisions<Message>("IconType", 1);
    QT_WARNING_POP
    qmlRegisterModule("IconType", 1, 0);
}

static const QQmlModuleRegistration iconTypeRegistration("IconType", qml_register_types_IconType);
