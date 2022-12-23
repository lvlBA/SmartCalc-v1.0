#include "mainwindow.h"
#include "./ui_mainwindow.h"

extern "C" {
#include "s21_smart.h"
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_zero, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_one, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_two, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_three, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_four, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_five, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_six, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_seven, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_eight, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_nine, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_leftScobe, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_rightScobe, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(operations()));




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: digits_numbers()
{
QPushButton *button = (QPushButton *)sender();
double all_numbers;
QString new_label;
all_numbers = (ui->label_show->text() + button->text()).toDouble();
new_label = QString::number(all_numbers, 'g', 15);
ui->label_show->setText(new_label);
}

void MainWindow::on_pushButton_dot_clicked()
{
    if (!(ui->label_show->text().contains('.')))
        ui->label_show->setText(ui->label_show->text() + ".");
}

void MainWindow:: operations()
{
QPushButton *button = (QPushButton *)sender();
double all_numbers;
QString new_label;

if(button->text() == "+") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "+");
} else if (button->text() == "-") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "-");
} else if (button->text() == "*") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "*");
} else if (button->text() == "÷") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "÷");
} else if (button->text() == "%") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "%");
}else if (button->text() == "√") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "√");
}else if (button->text() == "^") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "^");
} else if (button->text() == "ln") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "ln");
} else if (button->text() == "log") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "log");
} else if (button->text() == "sin") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "sin");
} else if (button->text() == "asin") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "asin");
} else if (button->text() == "tan") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "tan");
} else if (button->text() == "atan") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "atan");
} else if (button->text() == "cos") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "cos");
} else if (button->text() == "acos") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "acos");
} else if (button->text() == "(") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "(");
} else if (button->text() == ")") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + ")");
} else if (button->text() == "x") {
    all_numbers = (button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_show->setText(ui->label_show->text() + "x");
}
}

