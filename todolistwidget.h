#ifndef TODOLISTWIDGET_H
#define TODOLISTWIDGET_H

#include <QListWidget>

class TodoListWidget : public QListWidget
{
public:
    TodoListWidget(QWidget *parent = nullptr);

    void addTodoItem(QString content);
};

#endif // TODOLISTWIDGET_H
