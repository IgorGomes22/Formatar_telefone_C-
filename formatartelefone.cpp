#include "FormatarTelefone.h"
#include <stdexcept>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

QString FormatarTelefone::formatar(const QString& telefone){
    QString texto = telefone;
    texto.remove(QRegularExpression("[^\\d]"));

    if (texto.length()==11){
        texto = QString("(%1) %2-%3")
                    .arg(texto.mid(0,2))
                    .arg(texto.mid(2,5))
                    .arg(texto.mid(7,4));
    }
    return texto;
}
