#ifndef CONFIG_H
#define CONFIG_H
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <QDebug>
#include <QMessageBox>
#include <tuple>
#include "global_variables.h"
typedef std::unordered_map<std::string, std::string> smap;
typedef std::unordered_map<std::string, bool> sbmap;

class Configure
{
private:
    struct ID{
        const std::string store             =   "[store]";
        const std::string po                =   "[po]";
        const std::string settings          =   "[settings]";
        const std::string po_placeholder    =   "po_placeholder";
        const std::string store_placeholder =   "store_placeholder";
    }; ID *id = new ID;

    smap read() const;
    sbmap read_settings() const;

public:
    Configure(){}
    QString store_number() const;
    QString po_number() const;
    bool po_placeholder() const;
    bool store_placeholder() const;

    bool found() const;
    std::ifstream::pos_type filesize() const;
    void create_file(std::string store_num);
    void create_file(std::string store_num, std::string po_num, bool po, bool store);

    // Temporary
    smap _read() const {return read();}
    std::unordered_map<std::string, bool> _settings_map() const {return read_settings(); }
    ~Configure() {delete id;}
};
#endif // CONFIG_H


/*
SAMPLE FILE:
    [store]
    0270

    [po]
    705

    [settings]
    po_placeholder=TRUE
    store_placeholder=TRUE
*/
