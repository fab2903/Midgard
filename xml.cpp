#include "xml.h"

Xml::Xml()
{

}
int Xml::runxml(std::vector<QString> vectorxml)
{

    QTextStream cout(stdout);


    QFile file("/home/fabian/Escritorio/Midgard.xml");
    bool open = file.open(QIODevice::ReadOnly | QIODevice::Text);
    if (!open)
    {
        cout << "Couldn't open file" << endl;
        return 1;
    }
    else
    {
        cout << "File opened OK" << endl;
    }

    QXmlStreamReader xml(&file);
    cout << "Encoding: " << xml.documentEncoding().toString() << endl;


    while (!xml.atEnd() && !xml.hasError())
    {

        xml.readNext();
        if (xml.isStartElement())
        {
            QString name = xml.name().toString();
            vectorxml.push_back(name); //Se introducen los datos al vector



            if (name == "vida" || name == "ataque" ||
                name == "defensa" || name == "hpRegen"||
                name == "magia" || name == "blot" ||
                name == "supersticion" || name == "velocidad" ||
               name == "inteligencia")
            {
                cout << "element name: '" << name  << "'"
                             << ", text: '" << xml.readElementText()
                             << "'" << endl;
            }
        }
    }
    if (xml.hasError())
    {
        cout << "XML error: " << xml.errorString() << endl;
    }
    else if (xml.atEnd())
    {
        cout << "Reached end, done" << endl;
    }

    //Imprime el vector resultante con los datos del xml
    cout <<"\nImprimir Vectorxml:"<< endl;
    for(int i=0; i<11; i++ ){
        cout <<"Entrada:"<< " " <<vectorxml[i]<< endl;
    }

    return 0;

}

