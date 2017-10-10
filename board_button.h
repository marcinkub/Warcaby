#ifndef BOARD_BUTTON_H
#define BOARD_BUTTON_H

#include <QObject>
#include <QPushButton>

class board_button : public QPushButton
{
    Q_OBJECT
public:
    int nrPola;
    board_button(QWidget* parent) : QPushButton(parent){}
    ~board_button(){}
};


#endif // BOARD_BUTTON_H
