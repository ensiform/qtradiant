#ifndef FINDREPLACEDIALOG_H
#define FINDREPLACEDIALOG_H

#include <QDialog>

namespace Ui {
	class FindReplaceDialog;
}

class FindReplaceDialog : public QDialog
{
	Q_OBJECT
	
public:
	explicit FindReplaceDialog(QWidget *parent = 0);
	~FindReplaceDialog();
	
protected:
	void changeEvent(QEvent *e);
	
private:
	Ui::FindReplaceDialog *ui;
};

#endif // FINDREPLACEDIALOG_H
