/********************************************************************************
** Form generated from reading UI file 'campo.ui'
**
** Created: Tue 17. Sep 12:49:24 2024
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPO_H
#define UI_CAMPO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Campo
{
public:

    void setupUi(QDialog *Campo)
    {
        if (Campo->objectName().isEmpty())
            Campo->setObjectName(QString::fromUtf8("Campo"));
        Campo->resize(400, 300);

        retranslateUi(Campo);

        QMetaObject::connectSlotsByName(Campo);
    } // setupUi

    void retranslateUi(QDialog *Campo)
    {
        Campo->setWindowTitle(QApplication::translate("Campo", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Campo: public Ui_Campo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPO_H
