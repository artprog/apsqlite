//
//  dbEntity.hpp
//  apsqlite
//
//  Created by Adam Zugaj on 30/06/15.
//  Copyright (c) 2015 ArtProg. All rights reserved.
//

#ifndef __apsqlite__dbEntity__
#define __apsqlite__dbEntity__

#include <string>
#include <vector>

using namespace std;

namespace AP {
    
    class dbEntity {
        string _name;
    public:
        dbEntity(const string &name) : _name(name) { }
    };
}

#endif /* defined(__apsqlite__dbEntity__) */
