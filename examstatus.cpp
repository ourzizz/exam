#include "examstatus.h"
#include <QMessageBox>
#include <QDebug>
ExamStatus::ExamStatus()
{
    exam_name = "";
    StatusArray[SelectExamStatus] = 0;
    StatusArray[KemuStatus] = 0;
    StatusArray[KaoshengBaomingStatus]=0;
    StatusArray[KaochangStatus]=0;
    StatusArray[JaoshiStatus] = 0;
}

void ExamStatus::SelectExam(QString exam_name)
{
    this->exam_name = exam_name;
    StatusArray[SelectExamStatus] = 1;
    query.clear();
    query.prepare("select count(*) from kemu where exam_ex_name=?");
    //数据库表结构有问题，同一个属性在各个表中名字不一样，难以编码
    //今晚回家重建数据库  2-13   
    query.addBindValue(exam_name);
    query.exec();
    query.next();
    if(0 == query.value(0))
    {//kemu还没有设置那考场这些信息就没有
        StatusArray[KemuStatus] = 0;
        StatusArray[KaoshengBaomingStatus]=0;
        StatusArray[KaochangStatus]=0;
        StatusArray[JaoshiStatus] = 0;
        return ;
    }
    else{
        StatusArray[KemuStatus] = 1;
    }

    query.clear();
    query.prepare("select count(*) from ksinfo_has_kemu where exam_ex_name=?");
    query.addBindValue(exam_name);
    query.exec();
    if(0 == query.value(0).toInt())
    {
        StatusArray[KaoshengBaomingStatus]=0;
        StatusArray[KaochangStatus]=0;
        StatusArray[JaoshiStatus]= 0;
        return ;
    }
    else{
         StatusArray[KaoshengBaomingStatus]= 1;
    }

    query.clear();
    query.prepare("select count(*) from kaochang where exam_ex_name=?");
    query.addBindValue(exam_name);
    query.exec();
    if(0 == query.value(0).toInt())
    {
        StatusArray[KaochangStatus]= 0;
        StatusArray[JaoshiStatus ]= 0;
        return ;
    }
    else{
        StatusArray[KaochangStatus] = 1;
    }


    query.clear();
    query.prepare("select count(*) from jiaoshi where exam_ex_name=?");
    query.addBindValue(exam_name);
    query.exec();
    if(0 == query.value(0).toInt())
    {
        StatusArray[JaoshiStatus] = 0;
    }
    else{
        StatusArray[JaoshiStatus] = 1;
    }
}
bool ExamStatus::GetStatus(status set)
{
    return StatusArray[set];
}

void ExamStatus::SetStatus(status set,bool stu)
{
    StatusArray[set] = stu;
}
QString ExamStatus::GetExamName()
{
    return exam_name;
}
