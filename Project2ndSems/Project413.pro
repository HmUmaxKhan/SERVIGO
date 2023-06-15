QT += core gui sql network location positioning webenginewidgets quickwidgets
//QT += webengine
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SignUp.cpp \
    editsp.cpp \
    editu.cpp \
    googlemaps.cpp \
    historysp.cpp \
    historyuser.cpp \
    main.cpp \
    profilesp.cpp \
    profileu.cpp \
    regcomplete.cpp \
    selection1.cpp \
    selection1.cpp \
    slogin.cpp \
    sp_inter.cpp \
    sql.cpp \
    task2.cpp \
    task_1.cpp \
    ulogin.cpp \
    userinter.cpp \
    usignup.cpp

HEADERS += \
    PolySP.h \
    SignUp.h \
    editsp.h \
    editu.h \
    googlemaps.h \
    historysp.h \
    historyuser.h \
    profilesp.h \
    profileu.h \
    regcomplete.h \
    selection1.h \
    selection1.h \
    slogin.h \
    sp_inter.h \
    sql.h \
    task2.h \
    task_1.h \
    ulogin.h \
    userinter.h \
    usignup.h

FORMS += \
    SignUp.ui \
    editsp.ui \
    editu.ui \
    googlemaps.ui \
    historysp.ui \
    historyuser.ui \
    profilesp.ui \
    profileu.ui \
    regcomplete.ui \
    selection1.ui \
    slogin.ui \
    sp_inter.ui \
    task2.ui \
    task_1.ui \
    ulogin.ui \
    userinter.ui \
    usignup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    googlemap.html \
    hmu logo.png

RESOURCES += \
    myresource.qrc \
    resources.qrc


HEADERS += \
    PolySP.h \
    SignUp.h \
    editsp.h \
    editu.h \
    googlemaps.h \
    historysp.h \
    historyuser.h \
    profilesp.h \
    profileu.h \
    regcomplete.h \
    selection1.h \
    slogin.h \
    sp_inter.h \
    sql.h \
    task2.h \
    task_1.h \
    ulogin.h \
    userinter.h \
    usignup.h

FORMS += \
    SignUp.ui \
    editsp.ui \
    editu.ui \
    googlemaps.ui \
    historysp.ui \
    historyuser.ui \
    profilesp.ui \
    profileu.ui \
    regcomplete.ui \
    selection1.ui \
    slogin.ui \
    sp_inter.ui \
    task2.ui \
    task_1.ui \
    ulogin.ui \
    userinter.ui \
    usignup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    googlemap.html \
    hmu logo.png

RESOURCES += \
    myresource.qrc \
    resources.qrc


SOURCES += \
    SignUp.cpp \
    editsp.cpp \
    editu.cpp \
    googlemaps.cpp \
    historysp.cpp \
    historyuser.cpp \
    main.cpp \
    profilesp.cpp \
    profileu.cpp \
    regcomplete.cpp \
    selection1.cpp \
    slogin.cpp \
    sp_inter.cpp \
    sql.cpp \
    task2.cpp \
    task_1.cpp \
    ulogin.cpp \
    userinter.cpp \
    usignup.cpp

HEADERS += \
    PolySP.h \
    SignUp.h \
    editsp.h \
    editu.h \
    googlemaps.h \
    historysp.h \
    historyuser.h \
    profilesp.h \
    profileu.h \
    regcomplete.h \
    selection1.h \
    selection1.h \
    slogin.h \
    sp_inter.h \
    sql.h \
    task2.h \
    task_1.h \
    ulogin.h \
    userinter.h \
    usignup.h

FORMS += \
    SignUp.ui \
    editsp.ui \
    editu.ui \
    googlemaps.ui \
    historysp.ui \
    historyuser.ui \
    profilesp.ui \
    profileu.ui \
    regcomplete.ui \
    selection1.ui \
    slogin.ui \
    sp_inter.ui \
    task2.ui \
    task_1.ui \
    ulogin.ui \
    userinter.ui \
    usignup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    googlemap.html \
    hmu logo.png

RESOURCES += \
    myresource.qrc \
    resources.qrc


HEADERS += \
    PolySP.h \
    SignUp.h \
    editsp.h \
    editu.h \
    googlemaps.h \
    historysp.h \
    historyuser.h \
    profilesp.h \
    profileu.h \
    regcomplete.h \
    selection1.h \
    slogin.h \
    sp_inter.h \
    sql.h \
    task2.h \
    task_1.h \
    ulogin.h \
    userinter.h \
    usignup.h

FORMS += \
    SignUp.ui \
    editsp.ui \
    editu.ui \
    googlemaps.ui \
    historysp.ui \
    historyuser.ui \
    profilesp.ui \
    profileu.ui \
    regcomplete.ui \
    selection1.ui \
    slogin.ui \
    sp_inter.ui \
    task2.ui \
    task_1.ui \
    ulogin.ui \
    userinter.ui \
    usignup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    googlemap.html \
    hmu logo.png

RESOURCES += \
    myresource.qrc \
    resources.qrc
