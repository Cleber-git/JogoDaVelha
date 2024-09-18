/********************************************************************************
** Form generated from reading UI file 'campo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPO_H
#define UI_CAMPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Campo
{
public:

    void setupUi(QWidget *Campo)
    {
        if (Campo->objectName().isEmpty())
            Campo->setObjectName("Campo");
        Campo->resize(400, 300);

        retranslateUi(Campo);

        QMetaObject::connectSlotsByName(Campo);
    } // setupUi

    void retranslateUi(QWidget *Campo)
    {
        Campo->setWindowTitle(QCoreApplication::translate("Campo", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Campo: public Ui_Campo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPO_H
