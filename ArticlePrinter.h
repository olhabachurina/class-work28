#pragma once
#include <vector>
#include "Article.h"

class ArticleIterator {
private:
    std::vector<Article>::iterator current; // Итератор текущего элемента
    std::vector<Article>::iterator end;     // Итератор после последнего элемента

public:
    ArticleIterator(std::vector<Article>& articles);

    void start();          // Перейти к началу вектора
    void next();           // Перейти к следующему элементу
    bool isEnd() const;    // Проверить, достигли ли конца вектора
    Article& getCurrent(); // Получить текущий элемент
};
