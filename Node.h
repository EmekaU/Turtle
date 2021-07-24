//
// Created by Umeozo Emeka on 2021-07-23.
//

#ifndef LEANBROWSER_NODE_H
#define LEANBROWSER_NODE_H

#include <utility>
#include "vector"
#include "string"
#include "map"

using namespace std;

typedef map<string, string> AttrMap;

typedef struct Element{

    string tagName;
    AttrMap attributes;
}Element;

class Node {
private:
    vector<Node> children;

};

class TextNode: public Node{
private:
    string data;
public:
    explicit TextNode(string text);
    string getData();
    void setData(string text);
};

class ElementNode: public Node{ // public inheritance: ElementNode is - a node
private:
    Element data;
public:
    explicit ElementNode(const string& tagName, AttrMap& map);
    Element getData();
    void setData(Element element);
};

#endif //LEANBROWSER_NODE_H
