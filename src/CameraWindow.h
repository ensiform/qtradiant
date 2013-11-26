#ifndef CAMERAWINDOW_H
#define CAMERAWINDOW_H

#include <QWidget>
//#include <QGLWidget>

namespace Ui {
	class CameraWindow;
}

class CameraWindow : public QWidget
{
	Q_OBJECT
    
public:
	explicit CameraWindow(QWidget *parent = 0);
	~CameraWindow();
    
protected:
	void changeEvent(QEvent *e);
    
private:
	Ui::CameraWindow *ui;
};

#endif // CAMERAWINDOW_H
