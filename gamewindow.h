#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QSpacerItem>


class GameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

private:

    QGridLayout* window_layout;
    QPlainTextEdit* pte_log;

    void zaladuj_interfejs();
};

#endif // GAMEWINDOW_H
