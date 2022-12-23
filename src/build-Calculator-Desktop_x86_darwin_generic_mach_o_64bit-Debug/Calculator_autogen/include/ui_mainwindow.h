/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_show;
    QPushButton *pushButton_leftScobe;
    QPushButton *pushButton_x;
    QPushButton *pushButton_rightScobe;
    QPushButton *pushButton_div;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_four;
    QPushButton *pushButton_six;
    QPushButton *pushButton_five;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_one;
    QPushButton *pushButton_three;
    QPushButton *pushButton_two;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_zero;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_log;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_dot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(426, 365);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_show = new QLabel(centralwidget);
        label_show->setObjectName(QString::fromUtf8("label_show"));
        label_show->setEnabled(true);
        label_show->setGeometry(QRect(0, 10, 366, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(24);
        label_show->setFont(font);
        label_show->setToolTipDuration(-1);
        label_show->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_show->setWordWrap(false);
        pushButton_leftScobe = new QPushButton(centralwidget);
        pushButton_leftScobe->setObjectName(QString::fromUtf8("pushButton_leftScobe"));
        pushButton_leftScobe->setGeometry(QRect(122, 100, 61, 61));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(183, 100, 61, 61));
        pushButton_rightScobe = new QPushButton(centralwidget);
        pushButton_rightScobe->setObjectName(QString::fromUtf8("pushButton_rightScobe"));
        pushButton_rightScobe->setGeometry(QRect(244, 100, 61, 61));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(305, 100, 61, 61));
        pushButton_nine = new QPushButton(centralwidget);
        pushButton_nine->setObjectName(QString::fromUtf8("pushButton_nine"));
        pushButton_nine->setGeometry(QRect(244, 152, 61, 61));
        pushButton_nine->setStyleSheet(QString::fromUtf8("Qlabel {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border-bottom: 1px solid gray;\n"
"}\n"
"background-color : white;"));
        pushButton_eight = new QPushButton(centralwidget);
        pushButton_eight->setObjectName(QString::fromUtf8("pushButton_eight"));
        pushButton_eight->setGeometry(QRect(183, 152, 61, 61));
        pushButton_seven = new QPushButton(centralwidget);
        pushButton_seven->setObjectName(QString::fromUtf8("pushButton_seven"));
        pushButton_seven->setGeometry(QRect(122, 152, 61, 61));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(305, 152, 61, 61));
        pushButton_four = new QPushButton(centralwidget);
        pushButton_four->setObjectName(QString::fromUtf8("pushButton_four"));
        pushButton_four->setGeometry(QRect(122, 204, 61, 61));
        pushButton_six = new QPushButton(centralwidget);
        pushButton_six->setObjectName(QString::fromUtf8("pushButton_six"));
        pushButton_six->setGeometry(QRect(244, 204, 61, 61));
        pushButton_five = new QPushButton(centralwidget);
        pushButton_five->setObjectName(QString::fromUtf8("pushButton_five"));
        pushButton_five->setGeometry(QRect(183, 204, 61, 61));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(305, 204, 61, 61));
        pushButton_one = new QPushButton(centralwidget);
        pushButton_one->setObjectName(QString::fromUtf8("pushButton_one"));
        pushButton_one->setGeometry(QRect(122, 256, 61, 61));
        pushButton_three = new QPushButton(centralwidget);
        pushButton_three->setObjectName(QString::fromUtf8("pushButton_three"));
        pushButton_three->setGeometry(QRect(244, 256, 61, 61));
        pushButton_two = new QPushButton(centralwidget);
        pushButton_two->setObjectName(QString::fromUtf8("pushButton_two"));
        pushButton_two->setGeometry(QRect(183, 256, 61, 61));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(305, 256, 61, 61));
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(244, 308, 61, 61));
        pushButton_zero = new QPushButton(centralwidget);
        pushButton_zero->setObjectName(QString::fromUtf8("pushButton_zero"));
        pushButton_zero->setGeometry(QRect(122, 308, 122, 61));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(61, 204, 61, 61));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(61, 100, 61, 61));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(61, 256, 61, 61));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(61, 152, 61, 61));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(61, 308, 61, 61));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(0, 152, 61, 61));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(0, 100, 61, 61));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(0, 256, 61, 61));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(0, 204, 61, 61));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(0, 308, 61, 61));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(366, 228, 61, 141));
        pushButton_ac = new QPushButton(centralwidget);
        pushButton_ac->setObjectName(QString::fromUtf8("pushButton_ac"));
        pushButton_ac->setGeometry(QRect(366, 100, 61, 139));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(305, 308, 61, 61));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_leftScobe->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_rightScobe->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
