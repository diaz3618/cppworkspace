/*
 * NOT BEING USED AT THE MOMENT
 */

#ifndef CSV_FILE_H
#define CSV_FILE_H
#include <QDebug>
#include <QDate>

#include <unordered_map>
#include <string>
#include <fstream>
#include <deque>
#include <string>
#include <utility>
#include <typeinfo>
//typedef std::unordered_map<std::string, std::deque<std::string>> tag_map;  // map[name] {name, po, date}
typedef std::unordered_map<std::string, std::pair<std::deque<std::string>, std::deque<int>>> tag_map;
typedef std::pair<std::deque<std::string>, std::deque<int>> tpair;

namespace csv {
    class file
    {
    private:
        struct Tag{
            QString name, po;
            int year, month, day;

            Tag(){}
            Tag(QString Name, QString Po, int Year, int Month, int Day) :
                name(Name), po(Po), year(Year), month(Month), day(Day) {}
            ~Tag(){}
        };

        const std::string &FILENAME;
        ///////////////////////////
        /// map w/ pair
        ///////////////////////////
        tag_map tags;
        std::deque<std::string> name_po(std::string name, std::string po) const;
        std::deque<int>         date(int year, int month, int day) const;
        tpair                   new_pair(std::deque<std::string> name_po, std::deque<int> date) const;
        std::deque<std::string> filter_data(tpair data) const;
        tpair                   filter_data(std::deque<std::string> data) const;

        ///////////////////////////
        /// Convertion functions
        ///////////////////////////
        std::string itos(int num) const;
        QString     itoqs(int num) const;
        int         stoi(std::string str) const;
        int         qstoi(QString qstr) const;

    public:
        file(const std::string &name) : FILENAME(name) {}

        Tag     operator[](QString name) const;
        tag_map operator>>(std::string filename) const;

        void    clear() { std::ofstream out_file(FILENAME); }  // Clear csv file
        void    add_tag(std::string name, std::string po, int year, int month, int day);
        tag_map read() const;  // Returns unordered_map<string, deque<string>>

        ~file() {}
    };
}

#endif // CSV_FILE_H
