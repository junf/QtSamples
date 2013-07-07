#ifndef FULLSCREEN_H
#define FULLSCREEN_H

#include <QLabel>
#include <QKeyEvent>

/*
QLabel that surpport full screen
*/
class Screen : public QLabel
{
	Q_OBJECT
public:
	Screen(QWidget* parent = 0, Qt::WindowFlags f = 0);
	Screen(const QString& text, QWidget* parent = 0, Qt::WindowFlags f = 0 );

protected:
	virtual
	void keyPressEvent(QKeyEvent* ev);

signals:

public slots:

};

#endif	// FULLSCREEN_H

