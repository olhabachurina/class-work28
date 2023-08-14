#include "Article.h"

Article::Article(int articleId, const std::string& articleTitle, const std::string& articleDescription, bool showStatus)
    : id(articleId), title(articleTitle), description(articleDescription), isShow(showStatus) {}

int Article::getId() const {
    return id;
}

std::string Article::getTitle() const {
    return title;
}

std::string Article::getDescription() const {
    return description;
}

bool Article::getShowStatus() const {
    return isShow;
}