/*
 * Project Developed by CppBuzz.com for learning QT-C++ concepts
 * Users are allowed to use/modify this code according to their requirement.
 * These projects are free to download.
 * Date: 25th April 2020
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "additem.h"

#include "expireditems.h"
#include "solditems.h"

#include "availableitems.h"
#include "finditem.h"

#include "updateitem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAddItem_clicked();

    void on_btnUpdateItem_clicked();

    void on_btnSoldItems_clicked();

    void on_btnFindItem_clicked();

    void on_btnExpiredItems_clicked();

    void on_btnAvailableItems_clicked();



private:
    Ui::MainWindow *ui;
    AddItem * ptrAddItem;


    SoldItems *ptrSoldITems;
    ExpiredItems *ptrExpiredItems;
    AvailableItems *ptrAvailableItems;
    FindItem * ptrFindItem;
    UpdateItem *ptrUpdateItem;

};

#endif // MAINWINDOW_H
