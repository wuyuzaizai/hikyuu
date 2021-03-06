/*
 * DatabaseDriverFactory.h
 *
 *  Created on: 2012-8-14
 *      Author: fasiondog
 */

#ifndef DATADRIVERFACTORY_H_
#define DATADRIVERFACTORY_H_

#include "BaseInfoDriver.h"
#include "KDataDriver.h"
#include "BlockInfoDriver.h"

namespace hku {

class DataDriverFactory {
public:

    static BaseInfoDriverPtr getBaseInfoDriver(const shared_ptr<IniParser>&);
    static KDataDriverPtr getKDataDriver(const shared_ptr<IniParser>&);
    static BlockInfoDriverPtr getBlockDriver(const shared_ptr<IniParser>&);
};

} /* namespace hku */
#endif /* DATABASEDRIVERFACTORY_H_ */
