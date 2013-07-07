/*
   Copyright 2013 Jun Funada

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include "FullScreen.h"
#include <Qt>
#include <QApplication>
#include <QPixmap>

Screen::Screen(QWidget* parent, Qt::WindowFlags f)
: QLabel(parent, f) {}

Screen::Screen(const QString& text, QWidget* parent, Qt::WindowFlags f)
: QLabel(text, parent, f) {}

void Screen::keyPressEvent(QKeyEvent* ev) {
	QLabel::keyPressEvent(ev);
	if (ev->key() == Qt::Key_Escape) {
		if (isFullScreen()) {
			showNormal();
			showMaximized();
		} else {
			showFullScreen();
		}
	}
}

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	QPixmap pixmap("hoge.jpg");
    Screen screen;
    screen.setPixmap(pixmap);
    screen.showFullScreen();

	return app.exec();
}

