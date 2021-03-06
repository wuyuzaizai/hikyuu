/*
 * config.cpp
 *
 *  Created on: 2011-2-20
 *      Author: fasiondog
 */

#include "config.h"
#include <iostream>
#include <boost/filesystem.hpp>

using namespace boost::filesystem;

GConfig::GConfig() {
    start_time = boost::chrono::system_clock::now();

    path current = current_path();
    if ( current.stem() == path("test") )  {
        current /= path("data");
    } else {
        current /= "test//data";
    }

#if defined(BOOST_WINDOWS)
    hikyuu_init(current.string() + "/hikyuu_win.ini");
#else
    hikyuu_init(current.string() + "/hikyuu_linux.ini");
#endif
}

GConfig::~GConfig() {
    boost::chrono::duration<double> sec = boost::chrono::system_clock::now() - start_time;
    std::cout << "All test spend time: " << sec.count() << "s" << std::endl;
}

BOOST_GLOBAL_FIXTURE(GConfig);
