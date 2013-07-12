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
#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QPropertyAnimation>

int main(int argc, char** argv) {
  QApplication app(argc, argv);
  QMainWindow window;

  QLabel label(&window);
  QPixmap pixmap("hoge.jpg");
  label.setPixmap(pixmap);
  label.resize(pixmap.size());

  window.setGeometry(100, 100, 900, 700);
  window.show();
  QPropertyAnimation an(&label, "pos");
  an.setDuration(10000);
  an.setStartValue(QPoint(800, 600));
  an.setEndValue(QPoint(0, 0));
  an.start();

  return app.exec();
}
