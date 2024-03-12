/********************************************************************************
** Form generated from reading UI file 'matrix.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIX_H
#define UI_MATRIX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_matrix
{
public:
    QAction *actionExport_Terminal;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *insert_j;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *insert_i;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *rowVal;
    QPushButton *pushButton;
    QFrame *frame_7;
    QGridLayout *gridLayout;
    QPushButton *changiToj;
    QPushButton *toepliz_check;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QTextEdit *console;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *matrix)
    {
        if (matrix->objectName().isEmpty())
            matrix->setObjectName("matrix");
        matrix->resize(806, 662);
        matrix->setStyleSheet(QString::fromUtf8("background-color:#111;\n"
"color:white;"));
        actionExport_Terminal = new QAction(matrix);
        actionExport_Terminal->setObjectName("actionExport_Terminal");
        actionExit = new QAction(matrix);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(matrix);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame_6 = new QFrame(centralwidget);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("font-size:24px;\n"
"font-weight:1000;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_4 = new QLabel(frame_6);
        label_4->setObjectName("label_4");

        verticalLayout_5->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignTop);

        pushButton_6 = new QPushButton(frame_6);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(0, 170, 0);\n"
"	color:white;\n"
"	padding:5px;\n"
" 	border: 1px solid rgb(0, 170, 0);\n"
" 	border-radius: 4px;\n"
"	font-size:16px;\n"
"}"));

        verticalLayout_5->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(frame_6);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  appearance: button;\n"
"  background-color: #1652F0;\n"
"  border: 1px solid #1652F0;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  cursor: pointer;\n"
"  font-family: Graphik,-apple-system,system-ui,\"Segoe UI\",Roboto,Oxygen,Ubuntu,Cantarell,\"Fira Sans\",\"Droid Sans\",\"Helvetica Neue\",sans-serif;\n"
"  font-size: 14px;\n"
"  line-height: 1.15;\n"
"  overflow: visible;\n"
"  padding: 12px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-transform: none;\n"
"  transition: all 80ms ease-in-out;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  width: fit-content;\n"
"}\n"
"\n"
"QPushButton::disabled {\n"
"  opacity: .5;\n"
"}\n"
"\n"
"QPushButton::focus {\n"
"  outline: 0;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"  background-color: #0A46E4;\n"
"  border-color: #0A46E4;\n"
"}\n"
"\n"
"QPushButton::active {\n"
"  background-color: #0039D7;\n"
"  border-color: #0039D7;\n"
"}"));

        verticalLayout_5->addWidget(pushButton_7);


        verticalLayout->addWidget(frame_6);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:#222;\n"
"	color:white;\n"
"	border:1px solid #333;\n"
"	border-radius: 4px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-weight:700;\n"
"border:none;"));

        verticalLayout_3->addWidget(label, 0, Qt::AlignRight);

        insert_j = new QLineEdit(frame_2);
        insert_j->setObjectName("insert_j");
        insert_j->setStyleSheet(QString::fromUtf8("border:1px solid #333;\n"
"border-radius: 4px;\n"
"color:white;\n"
"padding:5px;"));

        verticalLayout_3->addWidget(insert_j);


        horizontalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:#222;\n"
"	color:white;\n"
"	border:1px solid #333;\n"
"	border-radius: 4px;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-weight:700;\n"
"border:none;"));

        verticalLayout_4->addWidget(label_2, 0, Qt::AlignRight);

        insert_i = new QLineEdit(frame_3);
        insert_i->setObjectName("insert_i");
        insert_i->setStyleSheet(QString::fromUtf8("border:1px solid #333;\n"
"border-radius: 4px;\n"
"color:white;\n"
"padding:5px;"));

        verticalLayout_4->addWidget(insert_i);


        horizontalLayout->addWidget(frame_3);


        verticalLayout->addWidget(frame);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("background-color:#222;\n"
"color:white;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-weight:700;"));

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignRight);

        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rowVal = new QLineEdit(frame_5);
        rowVal->setObjectName("rowVal");
        rowVal->setStyleSheet(QString::fromUtf8("border:1px solid #333;\n"
"border-radius: 4px;\n"
"color:white;\n"
"padding:5px;\n"
"background-color:#111;"));

        horizontalLayout_2->addWidget(rowVal);

        pushButton = new QPushButton(frame_5);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(0, 170, 0);\n"
"	color:white;\n"
"	padding:5px;\n"
" 	border: 1px solid rgb(0, 170, 0);\n"
" 	border-radius: 4px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addWidget(frame_5);


        verticalLayout->addWidget(frame_4);

        frame_7 = new QFrame(centralwidget);
        frame_7->setObjectName("frame_7");
        frame_7->setStyleSheet(QString::fromUtf8(""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_7);
        gridLayout->setObjectName("gridLayout");
        changiToj = new QPushButton(frame_7);
        changiToj->setObjectName("changiToj");
        changiToj->setCursor(QCursor(Qt::PointingHandCursor));
        changiToj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  appearance: button;\n"
"  background-color: #1652F0;\n"
"  border: 1px solid #1652F0;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  cursor: pointer;\n"
"  font-family: Graphik,-apple-system,system-ui,\"Segoe UI\",Roboto,Oxygen,Ubuntu,Cantarell,\"Fira Sans\",\"Droid Sans\",\"Helvetica Neue\",sans-serif;\n"
"  font-size: 14px;\n"
"  line-height: 1.15;\n"
"  overflow: visible;\n"
"  padding: 12px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-transform: none;\n"
"  transition: all 80ms ease-in-out;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  width: fit-content;\n"
"}\n"
"\n"
"QPushButton::disabled {\n"
"  opacity: .5;\n"
"}\n"
"\n"
"QPushButton::focus {\n"
"  outline: 0;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"  background-color: #0A46E4;\n"
"  border-color: #0A46E4;\n"
"}\n"
"\n"
"QPushButton::active {\n"
"  background-color: #0039D7;\n"
"  border-color: #0039D7;\n"
"}"));

        gridLayout->addWidget(changiToj, 0, 1, 1, 1);

        toepliz_check = new QPushButton(frame_7);
        toepliz_check->setObjectName("toepliz_check");
        toepliz_check->setCursor(QCursor(Qt::PointingHandCursor));
        toepliz_check->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  appearance: button;\n"
"  background-color: #1652F0;\n"
"  border: 1px solid #1652F0;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  cursor: pointer;\n"
"  font-family: Graphik,-apple-system,system-ui,\"Segoe UI\",Roboto,Oxygen,Ubuntu,Cantarell,\"Fira Sans\",\"Droid Sans\",\"Helvetica Neue\",sans-serif;\n"
"  font-size: 14px;\n"
"  line-height: 1.15;\n"
"  overflow: visible;\n"
"  padding: 12px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-transform: none;\n"
"  transition: all 80ms ease-in-out;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  width: fit-content;\n"
"}\n"
"\n"
"QPushButton::disabled {\n"
"  opacity: .5;\n"
"}\n"
"\n"
"QPushButton::focus {\n"
"  outline: 0;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"  background-color: #0A46E4;\n"
"  border-color: #0A46E4;\n"
"}\n"
"\n"
"QPushButton::active {\n"
"  background-color: #0039D7;\n"
"  border-color: #0039D7;\n"
"}"));

        gridLayout->addWidget(toepliz_check, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(frame_7);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setEnabled(true);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  appearance: button;\n"
"  background-color: #1652F0;\n"
"  border: 1px solid #1652F0;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  font-family: Graphik,-apple-system,system-ui,\"Segoe UI\",Roboto,Oxygen,Ubuntu,Cantarell,\"Fira Sans\",\"Droid Sans\",\"Helvetica Neue\",sans-serif;\n"
"  font-size: 14px;\n"
"  line-height: 1.15;\n"
"  overflow: visible;\n"
"  padding: 12px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-transform: none;\n"
"  transition: all 80ms ease-in-out;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  width: fit-content;\n"
"}\n"
"\n"
"QPushButton::disabled {\n"
"  opacity: .5;\n"
"}\n"
"\n"
"QPushButton::focus {\n"
"  outline: 0;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"  background-color: #0A46E4;\n"
"  border-color: #0A46E4;\n"
"}\n"
"\n"
"QPushButton::active {\n"
"  background-color: #0039D7;\n"
"  border-color: #0039D7;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(frame_7);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(true);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  appearance: button;\n"
"  background-color: #1652F0;\n"
"  border: 1px solid #1652F0;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  font-family: Graphik,-apple-system,system-ui,\"Segoe UI\",Roboto,Oxygen,Ubuntu,Cantarell,\"Fira Sans\",\"Droid Sans\",\"Helvetica Neue\",sans-serif;\n"
"  font-size: 14px;\n"
"  line-height: 1.15;\n"
"  overflow: visible;\n"
"  padding: 12px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-transform: none;\n"
"  transition: all 80ms ease-in-out;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  width: fit-content;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  opacity: .5;\n"
"}\n"
"\n"
"QPushButton::focus {\n"
"  outline: 0;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"  background-color: #0A46E4;\n"
"  border-color: #0A46E4;\n"
"}\n"
"\n"
"QPushButton:active {\n"
"  background-color: #0039D7;\n"
"  border-color: #0039D7;\n"
"}"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(frame_7);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  appearance: button;\n"
"  background-color: #1652F0;\n"
"  border: 1px solid #1652F0;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  font-family: Graphik,-apple-system,system-ui,\"Segoe UI\",Roboto,Oxygen,Ubuntu,Cantarell,\"Fira Sans\",\"Droid Sans\",\"Helvetica Neue\",sans-serif;\n"
"  font-size: 14px;\n"
"  line-height: 1.15;\n"
"  overflow: visible;\n"
"  padding: 12px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-transform: none;\n"
"  transition: all 80ms ease-in-out;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  width: fit-content;\n"
"}\n"
"\n"
"QPushButton::disabled {\n"
"  opacity: .5;\n"
"}\n"
"\n"
"QPushButton::focus {\n"
"  outline: 0;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"  background-color: #0A46E4;\n"
"  border-color: #0A46E4;\n"
"}\n"
"\n"
"QPushButton::active {\n"
"  background-color: #0039D7;\n"
"  border-color: #0039D7;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(frame_7);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  appearance: button;\n"
"  background-color: #1652F0;\n"
"  border: 1px solid #1652F0;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  color: #FFFFFF;\n"
"  font-family: Graphik,-apple-system,system-ui,\"Segoe UI\",Roboto,Oxygen,Ubuntu,Cantarell,\"Fira Sans\",\"Droid Sans\",\"Helvetica Neue\",sans-serif;\n"
"  font-size: 14px;\n"
"  line-height: 1.15;\n"
"  overflow: visible;\n"
"  padding: 12px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-transform: none;\n"
"  transition: all 80ms ease-in-out;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  width: fit-content;\n"
"}\n"
"\n"
"QPushButton::disabled {\n"
"  opacity: .5;\n"
"}\n"
"\n"
"QPushButton::focus {\n"
"  outline: 0;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"  background-color: #0A46E4;\n"
"  border-color: #0A46E4;\n"
"}\n"
"\n"
"QPushButton::active {\n"
"  background-color: #0039D7;\n"
"  border-color: #0039D7;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 2, 1, 1, 1);


        verticalLayout->addWidget(frame_7);

        frame_8 = new QFrame(centralwidget);
        frame_8->setObjectName("frame_8");
        frame_8->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:#222;\n"
"	color:white;\n"
"	border:1px solid #333;\n"
"	border-radius: 4px;\n"
"}"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_8);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(frame_8);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"border:none;"));

        verticalLayout_6->addWidget(label_6, 0, Qt::AlignTop);

        console = new QTextEdit(frame_8);
        console->setObjectName("console");
        console->setReadOnly(true);

        verticalLayout_6->addWidget(console);

        pushButton_8 = new QPushButton(frame_8);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(0, 170, 0);\n"
"	color:white;\n"
"	padding:5px;\n"
" 	border: 1px solid rgb(0, 170, 0);\n"
" 	border-radius: 4px;\n"
"}"));

        verticalLayout_6->addWidget(pushButton_8);


        verticalLayout->addWidget(frame_8);

        matrix->setCentralWidget(centralwidget);
        menubar = new QMenuBar(matrix);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 806, 21));
        matrix->setMenuBar(menubar);
        statusbar = new QStatusBar(matrix);
        statusbar->setObjectName("statusbar");
        matrix->setStatusBar(statusbar);

        retranslateUi(matrix);

        QMetaObject::connectSlotsByName(matrix);
    } // setupUi

    void retranslateUi(QMainWindow *matrix)
    {
        matrix->setWindowTitle(QCoreApplication::translate("matrix", "matrix", nullptr));
        actionExport_Terminal->setText(QCoreApplication::translate("matrix", "Export Terminal", nullptr));
        actionExit->setText(QCoreApplication::translate("matrix", "Exit", nullptr));
        label_4->setText(QCoreApplication::translate("matrix", "\330\250\330\261\331\206\330\247\331\205\331\207 \333\214 \331\205\330\247\330\252\330\261\333\214\330\263 ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("matrix", "Help", nullptr));
        pushButton_7->setText(QCoreApplication::translate("matrix", "\331\205\330\247\330\252\330\261\333\214\330\263 \330\261\331\206\330\257\331\210\331\205", nullptr));
        label->setText(QCoreApplication::translate("matrix", "\330\252\330\271\330\257\330\247\330\257 \330\263\330\252\331\210\331\206", nullptr));
        label_2->setText(QCoreApplication::translate("matrix", "\330\252\330\271\330\257\330\247\330\257 \330\263\330\267\330\261", nullptr));
        label_3->setText(QCoreApplication::translate("matrix", "\330\263\330\267\330\261 \330\261\330\247 \331\210\330\247\330\261\330\257 \332\251\331\206\333\214\330\257: ", nullptr));
        rowVal->setPlaceholderText(QCoreApplication::translate("matrix", "1 2 3 4 5 ...", nullptr));
        pushButton->setText(QCoreApplication::translate("matrix", "\330\247\331\201\330\262\331\210\330\257\331\206 \331\205\330\247\330\252\330\261\333\214\330\263", nullptr));
        changiToj->setText(QCoreApplication::translate("matrix", "Transpose", nullptr));
        toepliz_check->setText(QCoreApplication::translate("matrix", "Toepliz", nullptr));
        pushButton_4->setText(QCoreApplication::translate("matrix", "Center Check", nullptr));
        pushButton_5->setText(QCoreApplication::translate("matrix", "Type", nullptr));
        pushButton_2->setText(QCoreApplication::translate("matrix", "Print matrix", nullptr));
        pushButton_3->setText(QCoreApplication::translate("matrix", "Clear Terminal", nullptr));
        label_6->setText(QCoreApplication::translate("matrix", "\330\256\330\261\331\210\330\254\333\214", nullptr));
        console->setPlaceholderText(QCoreApplication::translate("matrix", "console ", nullptr));
        pushButton_8->setText(QCoreApplication::translate("matrix", "\330\260\330\256\333\214\330\261\331\207 \333\214 \330\252\330\261\331\205\333\214\331\206\330\247\331\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class matrix: public Ui_matrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIX_H
