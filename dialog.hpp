#ifndef DIALOG_HPP
#define DIALOG_HPP

#include <QDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog {
  Q_OBJECT

 public:
  Dialog(QWidget *parent = nullptr);
  ~Dialog();

 private:
  Ui::Dialog *ui;
  QString temp;
  QString code;

 private slots:
  void append();
  void on_btnSave_clicked();
  void on_btnVerify_clicked();
};
#endif  // DIALOG_HPP
