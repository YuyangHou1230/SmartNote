#include "todowidget.h"

#include "global.h"

#include <QCheckBox>
#include <QHBoxLayout>
#include <QLabel>


struct TodoWidgetPrivateData
{
    bool complete;
    QString content;
    QCheckBox *ckBoxComplete;
    QLabel *contentLabel;
    TodoWidget *thisWidget;

    TodoWidgetPrivateData(TodoWidget *_this) :
        thisWidget(_this)
    {
        complete = false;
        content = QString("");

        ckBoxComplete = new QCheckBox(_this);
        contentLabel = new QLabel(_this);
        contentLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    }

    void setContent(const QString _content){
        content = _content;

        QString pattern;
        pattern = complete ? "<s>%1</s>" : "%1";
        contentLabel->setText(pattern.arg(_content));
    }

    void updateContent(){
        setContent(content);
    }
};

TodoWidget::TodoWidget(QString content, QWidget *parent) : QFrame(parent),
  d(new TodoWidgetPrivateData(this))
{
    d->setContent(content);
    connect(d->ckBoxComplete, &QCheckBox::toggled, this, [=](bool checked){d->complete = checked; d->updateContent();});


    QHBoxLayout *layout = new QHBoxLayout();
    layout->setSpacing(10);

    layout->addWidget(d->ckBoxComplete, 0);
    layout->addWidget(d->contentLabel, 1);

    setLayout(layout);

    setMinimumHeight(35);

}

void TodoWidget::enterEvent(QEvent *event)
{
    BQ_PRINT("enter");

    QPalette pa = palette();
    pa.setColor(QPalette::Background, Qt::blue);

    setPalette(pa);
    update();
}

void TodoWidget::leaveEvent(QEvent *event)
{
    BQ_PRINT("leave");
}

void TodoWidget::paintEvent(QPaintEvent *e)
{
    QFrame::paintEvent(e);
}
