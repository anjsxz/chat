//
//  MysqlApi.cpp
//  AJChat
//
//  Created by anjun on 4/3/14.
//  Copyright (c) 2014 anjun. All rights reserved.
//

#include "MysqlApi.h"
static MysqlApi* s_shared;
static MYSQL *s_dbcon;
void finish_with_error();  
MysqlApi* MysqlApi::shared(){
    if (!s_shared) {
        s_shared =new MysqlApi();
    }
    if (!s_dbcon) {
        s_dbcon = mysql_init(NULL);
        if (s_dbcon == NULL)
        {
            fprintf(stderr, "%s\n", mysql_error(s_dbcon));
            exit(1);
        }
        if (mysql_real_connect(s_dbcon, "localhost", "root", "root_pswd",
                               NULL, 0, NULL, 0) == NULL)
        {
            finish_with_error();
        }
    }
    return s_shared;
}
const char* MysqlApi::version(){
    return mysql_get_client_info();
}
vector<vstring> MysqlApi::query(const char *sql){
   

    if (mysql_query(s_dbcon, sql))
    {
        finish_with_error();
    }
    MYSQL_RES *result = mysql_store_result(s_dbcon);
    
    if (result == NULL)
    {
        finish_with_error();
    }
    
    int num_fields = mysql_num_fields(result);
    
    MYSQL_ROW row;
    int j=0;
    while ((row = mysql_fetch_row(result)))
    {
        for(int i = 0; i < num_fields; i++)
        {
            printf("%s ", row[i] ? row[i] : "NULL");
            string s= row[i];
       
            res_array[j].push_back(row[i]);
           
        }
        printf("\n");
        ++j;
    }
    
    mysql_free_result(result);
    
    return res_array;
}
bool MysqlApi::close(){
    return true;
}
void finish_with_error()
{
    fprintf(stderr, "%s\n", mysql_error(s_dbcon));
    mysql_close(s_dbcon);
    exit(1);
}
//void MysqlApi::finish_with_error()
//{
//    fprintf(stderr, "%s\n", mysql_error(s_dbcon));
//    mysql_close(s_dbcon);
//    exit(1);
//}
