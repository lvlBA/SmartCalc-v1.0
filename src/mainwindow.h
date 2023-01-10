#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

extern "C" {
#include "../s21_smart.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;

 private slots:
  void digits_numbers();
  void on_pushButton_dot_clicked();
  void operations();
  void on_pushButton_equal_clicked();
  void on_pushButton_DELETE_clicked();
  void on_pushButton_X_clicked();
};
#endif  // MAINWINDOW_H
