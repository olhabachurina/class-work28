#pragma once
#include <string>

class Article {
private:
    int id;//��������� ����,������������������ ������
    std::string title;//�������� ���� ������ ��������� ������
    std::string description;//��������� ���� ������ �������� ������
    bool isShow;// ��������� ���� ��� �������� ���������� � ���, ����� �� ���������� ������.

public:
    Article(int articleId, const std::string& articleTitle, const std::string& articleDescription, bool showStatus);

    int getId() const;// ����� ��� ��������� �������������� ������.
    std::string getTitle() const;// ����� ��� ��������� ��������� ������.
    std::string getDescription() const;// ����� ��� ��������� �������� ������.
    bool getShowStatus() const;// ����� ��� ��������, ����� �� ���������� ������.
};