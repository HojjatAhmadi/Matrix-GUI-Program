#include "matrix.h"
#include "ui_matrix.h"


int rowMatrix = 0 , columnMatrix = 0;
int flag=0;
int matrix_array[100][100];

matrix::matrix(QWidget *parent): QMainWindow(parent), ui(new Ui::matrix)
{
    ui->setupUi(this);
}

matrix::~matrix()
{
    delete ui;
}

void matrix::on_insert_i_editingFinished()
{
    QString text = ui->insert_i->text();
    rowMatrix = text.toInt();
}


void matrix::on_insert_j_editingFinished()
{
    QString text = ui->insert_j->text();
    columnMatrix = text.toInt();
}


// matirx value
void matrix::on_pushButton_clicked()
{
    QStringList value = ui->rowVal->text().split(" ");
    flag=0;
    if(value.length()==rowMatrix*columnMatrix){
        int j=0;
        foreach(const QString& token, value) {
            matrix_array[flag][j++] = token.toInt();
            if(j==columnMatrix){
                flag++;
                j=0;
            }
        }
    }
    else{
        ui->console->append("لطفا عناصر آرایه را درست وارد کنید!");
    }
}

// toepliz
void matrix::on_toepliz_check_clicked()
{

    bool isToeplitz = true;

    for (int i = 0; i < rowMatrix - 1; ++i) {
        for (int j = 0; j < columnMatrix - 1; ++j) {
            if (matrix_array[i][j] != matrix_array[i + 1][j + 1]) {
                isToeplitz = false;
                break;
            }
        }
        if (!isToeplitz) {
            break;
        }
    }
    if (isToeplitz) {
        ui->console->append("Teopliz : True");
    } else {
        ui->console->append("Teopliz : False");
    }
}

// Transos
void matrix::on_changiToj_clicked()
{
    ui->console->append("ترانهاده ی ماتریس برابر با: ");
    for(int i=0 ; i<rowMatrix ; i++){
        QString text = "";
        if(i==0){
            text+="⌜";
        }
        for(int j=0 ; j<columnMatrix ; j++){
            text+= QString::number(matrix_array[j][i]);
            if(j!=columnMatrix-1){
                text+="\t";
            }
        }
        if(i==rowMatrix-1){
            text+="⌟";
        }
        ui->console->append(text);
    }
}


// check center value 2 9 1 4 -2 6 7 2 11 4 4 2 9 2 4 1 9 2 4 4 0 2 4 2 5
void matrix::on_pushButton_4_clicked()
{
    if(rowMatrix == columnMatrix && rowMatrix % 2 == 1){
        int CenterValue = matrix_array[rowMatrix/2][columnMatrix/2] ,sum1=0 , sum2=0 , sum3=0 , sum4=0;
        for(int i=1 ; i<=rowMatrix ; i++){
            for(int j=1 ; j<=columnMatrix ; j++){
                if(i==j && ((i-1)<(rowMatrix/2)) && ((i-1)!=(rowMatrix/2) || (j-1)!=(columnMatrix/2))){
                    sum1+=matrix_array[i-1][j-1];
                }
                if(i==j && ((i-1)>(rowMatrix/2)) && ((i-1)!=(rowMatrix/2) || (j-1)!=(columnMatrix/2))){
                    sum3+=matrix_array[i-1][j-1];
                }
                if(i+j==rowMatrix+1 && ((i-1)<(rowMatrix/2)) && ((i-1)!=(rowMatrix/2) || (j-1)!=(columnMatrix/2))){
                    sum2+=matrix_array[i-1][j-1];
                }
                if(i+j==rowMatrix+1 && ((i-1)>(rowMatrix/2)) && ((i-1)!=(rowMatrix/2) || (j-1)!=(columnMatrix/2))){
                    sum4+=matrix_array[i-1][j-1];
                }
            }
        }
        if(sum1 == CenterValue && sum1==sum2 && sum2==sum3 && sum3==sum4){
            ui->console->append("Center Value : True");
        }
        else{
            ui->console->append("Center Value : False");
        }
    }
    else{
        ui->console->append("ماتریس وارد شده معتبر نمیباشد!");
    }
}

// type of matrix
void matrix::on_pushButton_5_clicked()
{
    QString type = "";
    if(rowMatrix==1){
        type += "سطری/";
    }
    if(rowMatrix==columnMatrix){
        type += "مربعی/";
    }
    if(columnMatrix==1){
        type += "ستونی/";
    }
    if(rowMatrix == columnMatrix){
        bool diagonal = true , identity = true , topTrianglar = false , bottomTrianglar = false;
        int numberZero = 0;
        for(int i=0 ; i<rowMatrix ; i++){
            for(int j=0 ; j<columnMatrix ; j++){
                if(matrix_array[i][j]==0){
                    numberZero++;
                }
                //1 3 4 0 2 8 0 0 5
                if((i>j && matrix_array[i][j]==0)){
                    topTrianglar = true;
                }
                //1 0 0 3 2 0 4 8 5
                if((j>i && matrix_array[i][j]==0)){
                    bottomTrianglar = true;
                }
                // 2 0 0 0 0 3 0 0 0 0 5 0 0 0 0 7
                if((i!=j && matrix_array[i][j]!=0)){
                    diagonal=false;
                }
                //1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1
                if ((i == j && matrix_array[i][j] != 1) || (i != j && matrix_array[i][j] != 0)) {
                    identity = false; // عنصر غیر صفر یا غیر یک در جایی خارج از قطر است
                }
            }
        }
        if(diagonal){
            type += "قطری/" ;
        }
        if(identity){
            type += "واحد/" ;
        }
        if(topTrianglar){
            type += "بالا مثلثی/";
        }
        if(bottomTrianglar){
            type += "پایین مثلثی/";
        }
        if(numberZero>(qAbs((rowMatrix*columnMatrix)-numberZero))){
            type+= "اسپارس/" ;
        }

        for(int i = 0 ; i<type.length() ; i++ ){
            if(type[i]=='/'){
                type[i]='-';
            }
        }
        type[type.length()-1]=',';
        type.remove(',');
    }
    ui->console->append("ماتریس وارد شده یک ماتریس '"+type+"' است");
}

//print matrix
void matrix::on_pushButton_2_clicked()
{
    ui->console->append("ماتریس وارد شده برابر با : ");
    for(int i=0 ; i<rowMatrix ; i++){
        QString text = "";
        for(int j=0 ; j<columnMatrix ; j++){
            if(i==0 && j==0){
                text+="⌜ ";
            }
            else if(i==rowMatrix-1 && j==0){
                text+="⌞ ";
            }
            else{
                text+= " ";
            }
            text+= QString::number(matrix_array[i][j]);
            if(j!=columnMatrix-1){
                text+="\t";
            }
            if(i==0 && j==columnMatrix-1){
                text += " ⌝";
            }
            if(i==rowMatrix-1 && j==columnMatrix){
                text += " ⌟";
            }
        }
        if(i==rowMatrix-1){
            text+="⌟";
        }
        ui->console->append(text);
    }
}


void matrix::on_pushButton_3_clicked()
{
    ui->console->clear();
}

// open Help Page
void matrix::on_pushButton_6_clicked()
{

    QDialog helpDialog;
    helpDialog.setWindowTitle("Help");
    helpDialog.setGeometry(100, 100, 400, 300);


    QTextEdit *helpText = new QTextEdit(&helpDialog);
    helpText->setReadOnly(true);


    QString helpContent = "برنامه ی ماتریس \n"
                        "دکمه ی Teopliz بررسی میکنه ماتریس است یا خیر که خروجی true یا false است \n"
                        "دکمه ی Transpos خروجی ترانهاده ی ماتریس است\n"
                        "دکمه ی Center Check بررسی میکنه که آیا مقدار عنصر مرکزی برابر با مجموع نصف قطر های آن است یا خیر\n"
                        "دکمه ی Type نوع ماتریس رو نمایش میدهد\n"
                        "دکمه ی Print Matrix برای نمایش ماتریس است\n"
                        "دکمه ی Clear Terminal برای پاک کردن خروجی های نمایش داده شده است"
    ;


    helpText->setPlainText(helpContent);


    QVBoxLayout *layout = new QVBoxLayout(&helpDialog);
    layout->addWidget(helpText);


    helpDialog.exec();
}

// random Matrix
void matrix::on_pushButton_7_clicked()
{
    rowMatrix = QRandomGenerator::global()->bounded(101);
    columnMatrix = QRandomGenerator::global()->bounded(101);
    for(int i=0 ; i<rowMatrix ; i++){
        for(int j=0 ; j<columnMatrix ; j++){
            matrix_array[i][j] = QRandomGenerator::global()->bounded(11);
        }
    }
}

// Export terminal
void matrix::on_pushButton_8_clicked()
{
    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);

    QString filePath = desktopPath + "/terminal.txt";

    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << ui->console->toPlainText();
        file.close();
        ui->console->clear();
        ui->console->append("فایل ترمینال در دسکتاپ شما با اسم terminal.txt ذخیره شد");
    } else {
        ui->console->append("Access Deny!");
    }
}

