#ifndef GLOBAL_H
#define GLOBAL_H

#include <QDebug>

#ifdef PRINT_DEBUG
    #define BQ_PRINT(s) qDebug() << s;
#else
    #define BQ_PRINT(s)
#endif

#endif // GLOBAL_H
