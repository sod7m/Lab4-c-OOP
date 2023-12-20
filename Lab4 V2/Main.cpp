#include "Sportsman.h"
#include "Teacher.h"
#include "Coach.h"

int main() {
    //������� ����� ��'��� ����� Sportsman � �������� ���'��(��� � ���) � ������� ������ ������ ��'���� � ��������� sportsman.
    Sportsman* sportsman = new Sportsman();
    Teacher* teacher = new Teacher();
    Coach* coach = new Coach();

    std::ofstream file("classes.txt");
    file << "Sportsman: ";
    sportsman->display();
    file << "Teacher: ";
    teacher->display();
    file << "Coach: ";
    coach->display();
    file.close();

    delete sportsman;
    delete teacher;
    delete coach;

    return 0;
}