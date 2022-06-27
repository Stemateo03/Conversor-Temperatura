#ifndef CONVERTOR_H
#define CONVERTOR_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Convertor; }
QT_END_NAMESPACE

class Convertor : public QDialog
{
    Q_OBJECT

public:
    Convertor(QWidget *parent = nullptr);
    ~Convertor();

private:
    Ui::Convertor *ui;
};
#endif // CONVERTOR_H
