#include "todolistwidget.h"

#include "todowidget.h"

#include <QListWidgetItem>

TodoListWidget::TodoListWidget(QWidget *parent) :  QListWidget(parent)
{
    setSelectionMode(QAbstractItemView::NoSelection);
}

void TodoListWidget::addTodoItem(QString content)
{
    QListWidgetItem *item = new QListWidgetItem();
    TodoWidget *widget = new TodoWidget(content);

    item->setSizeHint(QSize(item->sizeHint().width(), widget->minimumHeight()));
    addItem(item);
    setItemWidget(item, widget);
}
