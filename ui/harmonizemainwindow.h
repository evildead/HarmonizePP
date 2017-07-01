/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#ifndef HARMONIZEMAINWINDOW_H
#define HARMONIZEMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class HarmonizeMainWindow;
}

class HarmonizeMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HarmonizeMainWindow(QWidget *parent = 0);
    ~HarmonizeMainWindow();

private:
    Ui::HarmonizeMainWindow *ui;
};

#endif // HARMONIZEMAINWINDOW_H
