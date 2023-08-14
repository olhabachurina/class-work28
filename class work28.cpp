// class work28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Article.h"
#include "ArticlePrinter.h"

int main() {
    std::vector<Article> articles;
    articles.push_back(Article(1, "Article 1", "Description of Article 1", true));// добавим статью 1
    articles.push_back(Article(2, "Article 2", "Description of Article 2", false));// добавим статью 2
    articles.push_back(Article(3, "Article 3", "Description of Article 3", true));// добавим статью 3

    ArticleIterator articleIterator(articles);

    std::cout << "All Articles:\n";
    while (!articleIterator.isEnd()) {
        Article& currentArticle = articleIterator.getCurrent();
        std::cout << "ID: " << currentArticle.getId() << "\n";
        std::cout << "Title: " << currentArticle.getTitle() << "\n";
        std::cout << "Description: " << currentArticle.getDescription() << "\n";
        std::cout << "Show Status: " << (currentArticle.getShowStatus() ? "Yes" : "No") << "\n";
        std::cout << "\n";
        articleIterator.next();
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
