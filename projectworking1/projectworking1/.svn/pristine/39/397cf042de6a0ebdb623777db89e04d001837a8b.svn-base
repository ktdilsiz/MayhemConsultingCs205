#ifndef GROUPSETTINGS_H
#define GROUPSETTINGS_H

#include <QWidget>
#include "profile.h"
#include "grouppage.h"

namespace Ui {
class GroupSettings;
}
class GroupPage;
class Profile;
class GroupSettings : public QWidget
{
    Q_OBJECT

public:
    explicit GroupSettings(QWidget *parent = 0);
    ~GroupSettings();

private slots:
    void on_pushButton_username_clicked();

    void on_pushButton_groupfeed_clicked();

    void on_pushButton_groupmessages_clicked();

    void on_pushButton_groupsettings_clicked();

private:
    Ui::GroupSettings *ui;
    GroupPage *grouppage;
    Profile *profile;
};

#endif // GROUPSETTINGS_H
