#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,5,0,0,0,1,0,0,0,
106,0,0,0,0,0,1,0,0,0,0,0,0,0,152,0,
0,0,0,0,1,0,0,0,0,0,0,0,8,0,0,0,
0,0,1,0,0,0,0,0,0,0,80,0,0,0,0,0,
1,0,0,0,0,0,0,0,42,0,0,0,0,0,1,0,
0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,14,10,176,90,28,0,83,0,
112,0,101,0,101,0,100,0,73,0,110,0,112,0,117,0,
116,0,46,0,113,0,109,0,108,0,16,12,18,163,124,0,
67,0,117,0,115,0,116,0,111,0,109,0,83,0,108,0,
105,0,100,0,101,0,114,0,46,0,113,0,109,0,108,0,
10,11,104,113,92,0,66,0,117,0,116,0,116,0,111,0,
110,0,46,0,113,0,109,0,108,0,20,0,148,24,156,0,
67,0,111,0,114,0,114,0,101,0,99,0,116,0,105,0,
118,0,101,0,70,0,97,0,99,0,116,0,111,0,114,0,
46,0,113,0,109,0,108,0,8,8,1,90,92,0,109,0,
97,0,105,0,110,0,46,0,113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _0x5f__main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__CorrectiveFactor_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Button_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__CustomSlider_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__SpeedInput_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/main.qml"), &QmlCacheGeneratedCode::_0x5f__main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/CorrectiveFactor.qml"), &QmlCacheGeneratedCode::_0x5f__CorrectiveFactor_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Button.qml"), &QmlCacheGeneratedCode::_0x5f__Button_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/CustomSlider.qml"), &QmlCacheGeneratedCode::_0x5f__CustomSlider_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/SpeedInput.qml"), &QmlCacheGeneratedCode::_0x5f__SpeedInput_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qml)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(qml_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qml))
int QT_MANGLE_NAMESPACE(qCleanupResources_qml)() {
    Q_CLEANUP_RESOURCE(qml_qmlcache);
    return 1;
}
