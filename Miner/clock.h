#ifndef CLOCK_H
# define CLOCK_H
# include <QLCDNumber>
# include <QTime>


class Clock :public QLCDNumber {
    Q_OBJECT
public:
  Clock(QWidget *parent = 0);
private slots:
  void on_tick();

  void stop();

protected:
  QTime m_time;

  QTimer *m_timer;

};

#endif // CLOCK_H
