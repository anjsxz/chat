//
//  MysqlApi.h
//  AJChat
//
//  Created by anjun on 4/3/14.
//  Copyright (c) 2014 anjun. All rights reserved.
//

#ifndef __AJChat__MysqlApi__
#define __AJChat__MysqlApi__
#include <my_global.h>
#include <mysql.h>
#include <vector>
typedef  std::vector<std::string>  vstring;
typedef  std::vector<int>    vint;
#include <iostream>
using namespace std;
class MysqlApi
{
public:
    
 static MysqlApi*   shared();
    
    bool connect();
    bool close();
    vector<vstring>   query(const char* sql);
 const  char* version();
private:
   void finish_with_error();
    
public:
    vector<vstring> res_array;
};
#endif /* defined(__AJChat__MysqlApi__) */
