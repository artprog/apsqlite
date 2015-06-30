//
//  db.hpp
//  apsqlite
//
//  Created by Adam Zugaj on 30/06/15.
//  Copyright (c) 2015 ArtProg. All rights reserved.
//

#ifndef __apsqlite__db__
#define __apsqlite__db__

#include <string>
#include <vector>
#include <sqlite3.h>
#include "dbObject.hpp"
#include "dbRequest.hpp"
#include "dbModel.hpp"

using namespace std;

namespace AP {

    class db {
        sqlite3 *_db;
    private:
        db() {}
    public:
        db(const string &path) { sqlite3_open(path.c_str(), &_db); }
        ~db() { sqlite3_close(_db); }
        vector<dbObject> execute(const dbRequest& request);
        void setModel(dbModel &model);
    };
    
}

#endif /* defined(__apsqlite__db__) */
