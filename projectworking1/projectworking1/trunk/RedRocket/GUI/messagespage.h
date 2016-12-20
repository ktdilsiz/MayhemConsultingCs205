#ifndef MESSAGESPAGE_H
#define MESSAGESPAGE_H

#include <QWidget>
#include "profile.h"

namespace Ui {
class MessagesPage;
}

class MessagesPage : public QWidget
{
    Q_OBJECT

public:
    explicit MessagesPage(QWidget *parent = 0);
    MessagesPage(SessionManager *sessionmanager);
    std::vector<std::vector<std::string> > direct_messages;
    ~MessagesPage();

private slots:
    void on_pushButton_sendmessage_clicked();

private:
    Ui::MessagesPage *ui;
    std::string getTime();
    SessionManager *session_manager;
    void addText();
};

#endif // MESSAGESPAGE_H
