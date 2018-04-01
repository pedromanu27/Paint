/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionLimpar;
    QAction *action2px;
    QAction *action5px;
    QAction *action10px;
    QAction *actionPreto;
    QAction *actionBranco;
    QAction *actionVermelho;
    QAction *actionVerde;
    QAction *actionAzul;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuTamanho_do_Pincel;
    QMenu *menuCor_do_Pincel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QStringLiteral("actionSalvar"));
        actionLimpar = new QAction(MainWindow);
        actionLimpar->setObjectName(QStringLiteral("actionLimpar"));
        action2px = new QAction(MainWindow);
        action2px->setObjectName(QStringLiteral("action2px"));
        action5px = new QAction(MainWindow);
        action5px->setObjectName(QStringLiteral("action5px"));
        action10px = new QAction(MainWindow);
        action10px->setObjectName(QStringLiteral("action10px"));
        actionPreto = new QAction(MainWindow);
        actionPreto->setObjectName(QStringLiteral("actionPreto"));
        actionBranco = new QAction(MainWindow);
        actionBranco->setObjectName(QStringLiteral("actionBranco"));
        actionVermelho = new QAction(MainWindow);
        actionVermelho->setObjectName(QStringLiteral("actionVermelho"));
        actionVerde = new QAction(MainWindow);
        actionVerde->setObjectName(QStringLiteral("actionVerde"));
        actionAzul = new QAction(MainWindow);
        actionAzul->setObjectName(QStringLiteral("actionAzul"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuTamanho_do_Pincel = new QMenu(menuBar);
        menuTamanho_do_Pincel->setObjectName(QStringLiteral("menuTamanho_do_Pincel"));
        menuCor_do_Pincel = new QMenu(menuBar);
        menuCor_do_Pincel->setObjectName(QStringLiteral("menuCor_do_Pincel"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuTamanho_do_Pincel->menuAction());
        menuBar->addAction(menuCor_do_Pincel->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionLimpar);
        menuTamanho_do_Pincel->addAction(action2px);
        menuTamanho_do_Pincel->addAction(action5px);
        menuTamanho_do_Pincel->addAction(action10px);
        menuCor_do_Pincel->addAction(actionPreto);
        menuCor_do_Pincel->addAction(actionBranco);
        menuCor_do_Pincel->addAction(actionVermelho);
        menuCor_do_Pincel->addAction(actionVerde);
        menuCor_do_Pincel->addAction(actionAzul);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", 0));
        actionLimpar->setText(QApplication::translate("MainWindow", "Limpar", 0));
        action2px->setText(QApplication::translate("MainWindow", "2px", 0));
        action5px->setText(QApplication::translate("MainWindow", "5px", 0));
        action10px->setText(QApplication::translate("MainWindow", "10px", 0));
        actionPreto->setText(QApplication::translate("MainWindow", "Preto", 0));
        actionBranco->setText(QApplication::translate("MainWindow", "Branco", 0));
        actionVermelho->setText(QApplication::translate("MainWindow", "Vermelho", 0));
        actionVerde->setText(QApplication::translate("MainWindow", "Verde", 0));
        actionAzul->setText(QApplication::translate("MainWindow", "Azul", 0));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", 0));
        menuTamanho_do_Pincel->setTitle(QApplication::translate("MainWindow", "Tamanho do Pincel", 0));
        menuCor_do_Pincel->setTitle(QApplication::translate("MainWindow", "Cor do Pincel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
