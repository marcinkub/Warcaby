#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    //ui->setupUi(this);
    this->setFixedSize(800,600);
    window_layout = new QGridLayout();

    QLabel* title_label = new QLabel("WARCABY", this);
    QFont title_font;
    title_font.setBold(true);
    title_font.setPointSize(20);
    title_label->setFont(title_font);
    window_layout->addWidget(title_label,0,0);
    pte_log = new QPlainTextEdit();
    window_layout->addWidget(pte_log,1,1);
    this->setLayout(window_layout);

    zaladuj_interfejs();
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::zaladuj_interfejs()
{
    QGridLayout* board_layout= new QGridLayout();

    window_layout->addLayout(board_layout,1,0);
    board_layout->setSpacing(0);

    QSpacerItem* verticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);
    board_layout->addItem(verticalSpacer, 0, 0, Qt::AlignTop);

    for(int i=1;i<9;i++)
        for(int j=1;j<9;j++)
        {
            QPushButton* btn = new QPushButton(this);
            btn->setMinimumHeight(57);
            btn->setMinimumWidth(57);
            btn->setMaximumHeight(57);
            btn->setMaximumWidth(57);
            btn->setIcon(QIcon(":/damka_bialy_czarny.png"));
            btn->setIconSize(QSize(57,57));
            board_layout->addWidget(btn,i,j);

        }



}
