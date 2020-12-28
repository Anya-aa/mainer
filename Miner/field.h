#ifndef FIELD_H
# define FIELD_H
# include <QWidget>

class Dot;

//! игровое поле
class Field :public QWidget {
  Q_OBJECT
public:
  Field(QWidget *parent = 0);
protected:
  void openAll();

  bool isValidCoord(int i, int j);

  void openDot(int i, int j);

  bool is_win();

  const static int m_n = 10;

  const static int m_mineNumber = 10;

  Dot* m_field[m_n][m_n];

  bool m_isGameActive;

protected slots:
  void on_DotClickedLeft();

  void on_DotClickedRight();

signals:
  void finished();

};

#endif // FIELD_H
