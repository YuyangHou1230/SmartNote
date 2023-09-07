#ifndef TODOWIDGET_H
#define TODOWIDGET_H

#include <QFrame>

struct TodoWidgetPrivateData;
class QCheckBox;

class TodoWidget : public QFrame
{
    Q_OBJECT
    TodoWidgetPrivateData *d;

public:
    explicit TodoWidget(QString content, QWidget *parent = nullptr);


protected:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);

    void paintEvent(QPaintEvent *e);
};

#endif // TODOWIDGET_H
