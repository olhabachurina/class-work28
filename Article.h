#pragma once
#include <string>

class Article {
private:
    int id;//приватное поле,хранитдентификатор статей
    std::string title;//приватне поле хранит заголовок статей
    std::string description;//приватное поле хранит описание статей
    bool isShow;// Приватное поле для хранения информации о том, можно ли отображать статью.

public:
    Article(int articleId, const std::string& articleTitle, const std::string& articleDescription, bool showStatus);

    int getId() const;// Метод для получения идентификатора статьи.
    std::string getTitle() const;// Метод для получения заголовка статьи.
    std::string getDescription() const;// Метод для получения описания статьи.
    bool getShowStatus() const;// Метод для проверки, можно ли отображать статью.
};