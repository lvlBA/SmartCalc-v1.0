#include "./mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window2 = new GraphWindow(this);


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
    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_leftScobe, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_rightScobe, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_ac, SIGNAL(clicked()), this, SLOT(on_pushButton_DELETE_clicked()));
    connect(ui->pushButton_equal, SIGNAL(clicked()), this, SLOT(on_pushButton_EQUAL_clicked()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: digits_numbers()
{
QPushButton *button = (QPushButton *)sender();
QString new_label = ui->label_show->text() + button->text();

ui->label_show->setText(new_label);

}


void MainWindow::on_pushButton_dot_clicked()
{
    if (!(ui->label_show->text().endsWith('.')))
        ui->label_show->setText(ui->label_show->text() + ".");
}

void MainWindow:: operations()
{
QPushButton *button = (QPushButton *)sender();
QString new_label;

new_label = ui->label_show->text();


if(button->text() == "+") {
    new_label += "+";
} else if (button->text() == "-") {
    new_label += "-";
} else if (button->text() == "*") {
    new_label += "*";
} else if (button->text() == "÷") {
    new_label += "/";
} else if (button->text() == "%") {
    new_label += "mod";
}else if (button->text() == "√") {
    new_label += "sqrt";
}else if (button->text() == "^") {
    new_label += "^";
} else if (button->text() == "ln") {
    new_label += "ln";
} else if (button->text() == "log") {
    new_label += "log";
} else if (button->text() == "sin") {
    new_label += "sin";
} else if (button->text() == "asin") {
    new_label += "asin";
} else if (button->text() == "tan") {
    new_label += "tan";
} else if (button->text() == "atan") {
    new_label += "atan";
} else if (button->text() == "cos") {
    new_label += "cos";
} else if (button->text() == "acos") {
    new_label += "acos";
} else if (button->text() == "(") {
    new_label += "(";
} else if (button->text() == ")") {
    new_label += ")";
} else if (button->text() == "x") {
    new_label += "x";
}
ui->label_show->setText(new_label);
}

void MainWindow::on_pushButton_equal_clicked()
{
        char* str = new char(ui->label_show->text().length());
        QByteArray barr = ui->label_show->text().toLatin1();
        strlcpy(str, barr, ui->label_show->text().length() + 1);

        if (s21_check_string(str) == 0) {
            ui->label_show->setText("Invalid Input");
        }
        else if (ui->label_show->text().contains("x")) {
            window2->on_to_draw_button_clicked(str);
            window2->show();
        } else {

            double result = s21_smart_calc(str, 0);

            QString numberResult = QString::number(result, 'g', 15);
            ui->label_show->setText(numberResult);
        }
        delete(str);
}


void MainWindow::on_pushButton_DELETE_clicked()
{
    ui->label_show->setText("");
}

void MainWindow::on_pushButton_X_clicked()
{
    QString new_label;

    if (!(ui->label_show->text().endsWith("x")))
        new_label = ui->label_show->text() + "x";

    ui->label_show->setText(new_label);
}

void MainWindow::functions()
{
    QPushButton *button = (QPushButton *)sender();

    QString new_label;

    new_label = ui->label_show->text() + button->text() + "(";

    ui->label_show->setText(new_label);
}

