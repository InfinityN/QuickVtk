#pragma once

#include "quickQmlRegister.hpp"

#include <QObject>

namespace quick::SampleData {

    class Images : public QObject {
        Q_OBJECT
        Q_PROPERTY(QString lenaPNG READ getLenaPNG CONSTANT);
        Q_PROPERTY(QString lenaJPG READ getLenaJPG CONSTANT);
        Q_PROPERTY(QString aPNG READ getAPNG CONSTANT);
        Q_PROPERTY(QString aJPG READ getAJPG CONSTANT);
        Q_PROPERTY(QString bPNG READ getBPNG CONSTANT);
        Q_PROPERTY(QString bJPG READ getBJPG CONSTANT);
    private:
        auto makeDataPath(const QString&) -> QString;
        static Images* instance;
    public:
        static Qml::Register::Class<Images> Register;
        static auto Create() -> void;
        static auto GetInstance() -> Images*;
        auto getLenaPNG() -> QString;
        auto getLenaJPG() -> QString;
        auto getAPNG() -> QString;
        auto getAJPG() -> QString;
        auto getBPNG() -> QString;
        auto getBJPG() -> QString;
    };
}
