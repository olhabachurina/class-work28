#include "ArticlePrinter.h"
#include <iostream>

ArticleIterator::ArticleIterator(std::vector<Article>& articles) : current(articles.begin()), end(articles.end()) {}

void ArticleIterator::start() {
    current = end;
}

void ArticleIterator::next() {
    if (current != end) {
        ++current;
    }
}

bool ArticleIterator::isEnd() const {
    return current == end;
}

Article& ArticleIterator::getCurrent() {
    return *current;
}