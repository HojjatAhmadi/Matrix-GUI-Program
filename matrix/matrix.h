#ifndef MATRIX_H
#define MATRIX_H

#include <QMainWindow>
#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QRandomGenerator>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QStandardPaths>

QT_BEGIN_NAMESPACE
namespace Ui {
class matrix;
}
QT_END_NAMESPACE

class matrix : public QMainWindow
{
    Q_OBJECT

public:
    matrix(QWidget *parent = nullptr);
    ~matrix();

private slots:
    void on_insert_i_editingFinished();

    void on_insert_j_editingFinished();

    void on_pushButton_clicked();

    void on_toepliz_check_clicked();

    void on_changiToj_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::matrix *ui;
};
#endif // MATRIX_H
