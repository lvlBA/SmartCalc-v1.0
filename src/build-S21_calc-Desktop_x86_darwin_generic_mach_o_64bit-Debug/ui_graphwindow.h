/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QCustomPlot *widget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *d_f_1;
    QDoubleSpinBox *d_f_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *e_f_1;
    QDoubleSpinBox *e_f_2;
    QPushButton *to_draw_button;

    void setupUi(QDialog *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName(QString::fromUtf8("GraphWindow"));
        GraphWindow->resize(558, 497);
        GraphWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 64, 65);"));
        widget = new QCustomPlot(GraphWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 521, 381));
        layoutWidget = new QWidget(GraphWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 415, 421, 81));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        d_f_1 = new QDoubleSpinBox(layoutWidget);
        d_f_1->setObjectName(QString::fromUtf8("d_f_1"));
        d_f_1->setReadOnly(false);
        d_f_1->setProperty("showGroupSeparator", QVariant(false));
        d_f_1->setDecimals(3);
        d_f_1->setMinimum(-1000000.000000000000000);
        d_f_1->setMaximum(1000000.000000000000000);
        d_f_1->setValue(-10.000000000000000);

        horizontalLayout_2->addWidget(d_f_1);

        d_f_2 = new QDoubleSpinBox(layoutWidget);
        d_f_2->setObjectName(QString::fromUtf8("d_f_2"));
        d_f_2->setDecimals(3);
        d_f_2->setMinimum(-1000000.000000000000000);
        d_f_2->setMaximum(1000000.000000000000000);
        d_f_2->setValue(10.000000000000000);

        horizontalLayout_2->addWidget(d_f_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        e_f_1 = new QDoubleSpinBox(layoutWidget);
        e_f_1->setObjectName(QString::fromUtf8("e_f_1"));
        e_f_1->setDecimals(3);
        e_f_1->setMinimum(-1000000.000000000000000);
        e_f_1->setMaximum(1000000.000000000000000);
        e_f_1->setValue(-10.000000000000000);

        horizontalLayout->addWidget(e_f_1);

        e_f_2 = new QDoubleSpinBox(layoutWidget);
        e_f_2->setObjectName(QString::fromUtf8("e_f_2"));
        e_f_2->setDecimals(3);
        e_f_2->setMinimum(-1000000.000000000000000);
        e_f_2->setMaximum(1000000.000000000000000);
        e_f_2->setValue(10.000000000000000);

        horizontalLayout->addWidget(e_f_2);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        to_draw_button = new QPushButton(layoutWidget);
        to_draw_button->setObjectName(QString::fromUtf8("to_draw_button"));

        horizontalLayout_3->addWidget(to_draw_button);


        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QDialog *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("GraphWindow", "         D(f)", nullptr));
        d_f_1->setSpecialValueText(QString());
        label_3->setText(QCoreApplication::translate("GraphWindow", "         E(f)", nullptr));
        to_draw_button->setText(QCoreApplication::translate("GraphWindow", "draw plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
