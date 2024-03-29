// Copyright (c) 2011-2013 The Bitcoin Core developers
// Copyright (c) 2018 The AardvarkCoin Core Developers

#ifndef ARKMINT_QT_MACNOTIFICATIONHANDLER_H
#define ARKMINT_QT_MACNOTIFICATIONHANDLER_H

#include <QObject>

/** Macintosh-specific notification handler (supports UserNotificationCenter and Growl).
 */
class MacNotificationHandler : public QObject
{
    Q_OBJECT

public:
    /** shows a 10.8+ UserNotification in the UserNotificationCenter
     */
    void showNotification(const QString &title, const QString &text);

    /** executes AppleScript */
    void sendAppleScript(const QString &script);

    /** check if OS can handle UserNotifications */
    bool hasUserNotificationCenterSupport(void);
    static MacNotificationHandler *instance();
};


#endif // ARKMINT_QT_MACNOTIFICATIONHANDLER_H
