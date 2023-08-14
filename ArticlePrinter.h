#pragma once
#include <vector>
#include "Article.h"

class ArticleIterator {
private:
    std::vector<Article>::iterator current; // �������� �������� ��������
    std::vector<Article>::iterator end;     // �������� ����� ���������� ��������

public:
    ArticleIterator(std::vector<Article>& articles);

    void start();          // ������� � ������ �������
    void next();           // ������� � ���������� ��������
    bool isEnd() const;    // ���������, �������� �� ����� �������
    Article& getCurrent(); // �������� ������� �������
};
