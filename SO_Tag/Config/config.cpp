#include "config.h"

////////////////////////////////////////
/// Read from file functions [Private]
////////////////////////////////////////
smap Configure::read() const
{
    /*
    SAMPLE FILE:
        [store]
        0270

        [po]
        705
    */
    std::string tmp;
    std::vector<std::string> vec;
    std::ifstream input_file;
    input_file.open(conf_file);
    if(!input_file.good()) { qDebug() << "[x] (Config)File error"; }
                      else { qDebug() << "[+] (Config)File found"; }

    if(!input_file.good()) { return {{"[store]", "0000"}, {"[po]", "000"}}; }
    while(input_file.good()) {
        getline(input_file, tmp, '\n');
        if(tmp.size() >= 3) { vec.push_back(tmp); }
    }

    const smap tmp_map({
                        {vec[0], vec[1]},
                        {vec[2], vec[3]}
                    });

    input_file.close();
    return tmp_map;
}

sbmap Configure::read_settings() const
{
    std::string tmp;
    std::vector<std::string> vec;
    std::ifstream input_file2;
    input_file2.open(conf_file);
    if(!input_file2.good()) { qDebug() << "[x] (Settings)File error"; }
                      else { qDebug() << "[+] (Settings)File found"; }

    if(!input_file2.good()) { return {{id->po_placeholder, true}, {id->store_placeholder, true}}; }
    while(input_file2.good()) {
        getline(input_file2, tmp, '\n');
        if(tmp.size() >= 3) { vec.push_back(tmp); }
    }


    const auto status = [](std::string str)->bool {
            return str.find("TRUE") != std::string::npos ? true : false;
    };
    //int i = 0;
    //for(auto x : vec){ qDebug() << "[" << i << "] " << QString::fromStdString(x) << "\n"; i++;}
    const sbmap tmp_map({
                        {vec[5].substr(0, vec[5].find("=")), status(vec[5])},
                        {vec[6].substr(0, vec[6].find("=")), status(vec[6])}
    });

    input_file2.close();
    return tmp_map;
}


//////////////////////////////////////
/// File creation functions [Puplic]
//////////////////////////////////////
void Configure::create_file(std::string store_num)
{
    const auto filter = [&store_num]()->std::string {
           return store_num.substr(2, 3) + "5";
    };

    std::ofstream out_file;
    out_file.open(conf_file);

    out_file << "[store]\n" << store_num \
             << "\n\n[po]\n" << filter();

    out_file.close();
}

void Configure::create_file(std::string store_num, std::string po_num, bool po, bool store)
{
    std::ofstream out_file;
    out_file.open(conf_file);

    out_file << "[store]\n" << store_num \
             << "\n\n[po]\n" << po_num \
             << "\n\n" << id->settings << "\n"\
             << (po == true ? "po_placeholder=TRUE\n" : "po_placeholder=FALSE\n") \
             << (store == true ? "store_placeholder=TRUE" : "store_placeholder=FALSE");

    out_file.close();
}


////////////////////////////////////
/// Return data functions [Public]
////////////////////////////////////
QString Configure::store_number() const {
    return QString::fromStdString(read()[id->store]);
}

QString Configure::po_number() const {
    return QString::fromStdString(read()[id->po]);
}

bool Configure::found() const
{
    std::ifstream in_file(conf_file);

    if(!in_file.good()) { return false; }
    return true;
}

bool Configure::po_placeholder() const
{
    return read_settings()[id->po_placeholder];
}

bool Configure::store_placeholder() const
{
    return read_settings()[id->store_placeholder];
}

std::ifstream::pos_type Configure::filesize() const
{
    std::ifstream in(conf_file, std::ifstream::ate | std::ifstream::binary);
    return in.tellg();
}
