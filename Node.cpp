//
// Created by Umeozo Emeka on 2021-07-23.
//

#include "Node.h"

#include <utility>

TextNode::TextNode(string text) : data(move(text)){};
string TextNode::getData(){
    return this->data;
}
void TextNode::setData(string text){

    this->data = move(text);
}

ElementNode::ElementNode(const string& tagName, AttrMap& attrMap) {

    this->data.tagName = tagName;
    map<string, string>::iterator it;

    for (it = attrMap.begin(); it != attrMap.end(); ++it) {

        this->data.attributes.insert(pair<string, string>(it->first, it->second));
    }
}

Element ElementNode::getData(){
    return this->data;
}
void ElementNode::setData(Element element){
    this->data = move(element);
}

int main(int argc, char const *argv[])
{

    return 0;
}





int main(){

}
