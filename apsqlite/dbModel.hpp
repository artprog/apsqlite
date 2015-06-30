//
//  dbModel.hpp
//  apsqlite
//
//  Created by Adam Zugaj on 30/06/15.
//  Copyright (c) 2015 ArtProg. All rights reserved.
//

#ifndef __apsqlite__dbModel__
#define __apsqlite__dbModel__

#include <vector>
#include "dbEntity.hpp"

using namespace std;

namespace AP {
    
    class dbModel {
        vector<dbEntity> _entities;
    public:
        void addEntity(const dbEntity& entity) { _entities.push_back(entity); }
        vector<dbEntity> entities() { return _entities; }
    };
}

#endif /* defined(__apsqlite__dbModel__) */
