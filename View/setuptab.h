#ifndef SETUPTAB_H
#define SETUPTAB_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SetupTab; }
QT_END_NAMESPACE

class SetupTab : public QWidget
{
    Q_OBJECT

public:
    SetupTab(QWidget *parent = nullptr);
    ~SetupTab();

private:
    Ui::SetupTab *ui;
};
#endif // SETUPTAB_H
