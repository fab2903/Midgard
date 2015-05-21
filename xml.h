#ifndef XML_H
#define XML_H

#include <QCoreApplication>
#include <QFile>
#include <QXmlStreamReader>
#include <QTextStream>



class Xml
{
public:
    Xml();
    int runxml(std::vector<QString> vectorxml);

};

#endif // XML_H
