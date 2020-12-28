#ifndef DOT_H
# define DOT_H
# include <QPushButton>


class Dot : public QPushButton {
  Q_OBJECT
public:
  Dot(int i, int j, QWidget *parent = 0);
  int i();

  int j();

  bool isMine();

  void setMine();

  void incValue();

  int value();

  void setOpen();

  bool isOpen();

  void swapFlag();

signals:
  void clicked_left();
  void clicked_right();
protected:
  virtual void paintEvent(QPaintEvent *event);
  virtual void mouseReleaseEvent(QMouseEvent *e);

  int m_i, m_j;

  int m_value;

  bool m_isMine;

  bool m_isOpen;

  bool m_isFlag;

};

#endif // DOT_H
