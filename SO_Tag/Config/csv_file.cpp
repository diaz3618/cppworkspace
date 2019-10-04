/*
 * NOT BEING USED AT THE MOMENT
 */

#include "csv_file.h"
using namespace csv;
////////////////////////////////////////////
/// Private
////////////////////////////////////////////

int file::stoi(std::string str) const
{
    return std::atoi(str.c_str()) > 0 ? std::atoi(str.c_str()) : 0;
}

int file::qstoi(QString qstr) const
{
    return qstr.toInt();
}

std::string file::itos(int num) const
{
    return std::to_string(num);
}

QString file::itoqs(int num) const
{
    return QString::number(num);
}

std::deque<std::string> file::name_po(std::string name, std::string po) const
{
    return std::deque<std::string>{name, po};
}

std::deque<int> file::date(int year, int month, int day) const
{
    return std::deque<int>{year, month, day};;
}

tpair file::new_pair(std::deque<std::string> name_po, std::deque<int> date) const
{
    return std::make_pair(name_po, date);
}

std::deque<std::string> file::filter_data(tpair data) const
{
    std::deque<std::string> tmp;
    for(auto x : data.first){
        tmp.push_back(x);
    }
    for(auto y : data.second){
        tmp.push_back(std::to_string(y));
    }

    ////////////// DEBUG //////////////

    qDebug() << "\n **[new_pair function]: ";
    for(unsigned int i = 0; i < tmp.size(); i++) {
        qDebug() << "(deque)tmp[" << i << "]" << QString::fromStdString(tmp[i]);
        if(i == i+4) { qDebug() << "-- Next Tag --"; }
    }

    ////////////// DEBUG //////////////
    return tmp;
}

tpair file::filter_data(std::deque<std::string> data) const
{
    tpair tmp;
    if(data.size() >= 5){
        tmp.first = {data[0], data[1]};
        tmp.second = {stoi(data[2]), stoi(data[3]), stoi(data[4])};
    }

    return tmp;
}


////////////////////////////////////////////
/// Public
////////////////////////////////////////////

void file::add_tag(std::string name, std::string po, int year, int month, int day)
{
    std::ofstream out_file;
    out_file.open(FILENAME, std::fstream::out | std::fstream:: app);  // Appends data entered

    tags[name] = new_pair(name_po(name, po), date(year, month, day));
    const std::deque<std::string> str_tag{filter_data(tags[name])};

    for(auto x : str_tag)
    {
        out_file << x << ",";
    } out_file.close();
}

tag_map file::read() const
{
    std::ifstream in_file;
    in_file.open(FILENAME);
    if(!in_file.good()) { qDebug() << "[x] (CSV)File error"; }
                   else { qDebug() << "[+] (CSV)File found"; }

    tag_map tmp_map;
    std::string tmp_str;
    std::deque<std::string> dq;
    // Add data in csv file to deque (dq)
    while(in_file.good()) {
        getline(in_file, tmp_str, ',');
        dq.push_back(tmp_str);
    } dq.pop_back();  // Last is null (empty), it causes error if left in there.

    ////////////// DEBUG //////////////
    //int count = 0;
    qDebug() << "\n **[read function]: ";
    for(unsigned int i = 0; i < dq.size(); i++){
        qDebug() << "(deque)dq[" << itoqs(i) << "] = " << QString::fromStdString(dq[i]);
        //count != count+4 ? count++ : count;
        //qDebug() << "\t\tcount" << count;
        //if(i == count) { qDebug() << "-- Next Tag --"; }
    }
    ////////////// DEBUG //////////////

    qDebug() << "\n[pop_front loop]: ";
    while(!dq.empty()) {
        qDebug() << "\t[size] = " << itoqs(dq.size());
        if(dq.size() >= 5) {
            tmp_map[dq[0]] = filter_data(dq);
        }
        for(int i = 0; i < 5; i++) {
            dq.pop_front();
        }
    } in_file.close();

    return tmp_map;
}




//////////////////////////////////////////////////////////////////////////  WORK ON THIS!!!!!!!!!!
/// **Last worked on: 06/07/2019 (not tested, but it compiles without errors)
///
file::Tag file::operator[](QString name) const
{
    auto tPair = tags.at(name.toStdString());
    const auto dname_po = [&tPair]() -> std::deque<QString> {
            std::deque<QString> tmp;
            for(auto x : tPair.first){
                tmp.push_back(QString::fromStdString(x));
            }
            return tmp;
    };

    const std::deque<int> date{tPair.second};
    const Tag tmp(dname_po()[0], dname_po()[1], date[0], date[1], date[2]);

    return tmp;
}
