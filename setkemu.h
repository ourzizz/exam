#ifndef SETKEMU_H
#define SETKEMU_H

#include <QWidget>

namespace Ui {
class SetKeMu;
}

class SetKeMu : public QWidget
{
    Q_OBJECT

public:
    explicit SetKeMu(QWidget *parent = 0);
    ~SetKeMu();

private:
    Ui::SetKeMu *ui;
};

#endif // SETKEMU_H
