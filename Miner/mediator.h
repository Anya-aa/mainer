#ifndef FIELDWRAPPER_H
# define FIELDWRAPPER_H
# include <QWidget>
# include <QLabel>

class QGridLayout;
class Clock;
class Field;


class Mediator :public QWidget {
  Q_OBJECT
public:
  Mediator();
public slots:
  void on_gameReset();
protected:
  Field *m_field;

  Clock *m_time;

  QGridLayout *m_layout;

};

#endif // FIELDWRAPPER_H
