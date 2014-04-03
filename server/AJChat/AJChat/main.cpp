//
//  main.cpp
//  AJChat
//
//  Created by anjun on 14-4-2.
//  Copyright (c) 2014年 anjun. All rights reserved.
//

#include <stdio.h>          /* These are the usual header files */
#include <strings.h>          /* for bzero() */
#include <unistd.h>         /* for close() */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#define PORT 1234   /* Port that will be opened */
#define MAXDATASIZE 100   /* Max number of bytes of data */
/*
 1.登录
 2.维护在线列表
 3.离线消息保存
 4.登录再发
 */

#include "MysqlApi.h"
int main()
{
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    const char *server = "localhost";
    const  char *user = "root";
    const char *password = "a";
    const  char *database = "ajchat";
    conn = mysql_init(NULL);
    /* Connect to database */
    if (!mysql_real_connect(conn, server,
                            user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }
    /* send SQL query */
    if (mysql_query(conn, "show tables")) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }
    MysqlApi *dbapi =MysqlApi::shared();
   vector<vstring> res =dbapi->query("select * from user");
    
     
    res = mysql_use_result(conn);
    /* output table name */
    printf("MySQL Tables in mysql database:\n");
    while ((row = mysql_fetch_row(res)) != NULL)
        printf("%s \n", row[0]);
    /* close connection */
    mysql_free_result(res);
    mysql_close(conn);
    
    return 0;
    
    
    
//	int sockfd; /* socket descriptors */
//	struct sockaddr_in server; /* server's address information */
//	struct sockaddr_in client; /* client's address information */
//	socklen_t sin_size;
//	int num;
//	char msg[MAXDATASIZE];  /* buffer for message */
//    
//	/* Creating UDP socket  */
//	if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)  {
//        /* handle exception */
//        perror("Creating socket failed.");
//        _exit(1);
//	}
//    
//	bzero(&server,sizeof(server));
//	server.sin_family=AF_INET;
//	server.sin_port=htons(PORT);
//	server.sin_addr.s_addr = htonl (INADDR_ANY);
//	if (bind(sockfd, (struct sockaddr *)&server, sizeof(struct sockaddr)) == -1) {
//        /* handle exception */
//        perror("Bind error.");
//        _exit(1);
//	}
//    
//	sin_size=sizeof(struct sockaddr_in);
//	while (1)   {
//        num = recvfrom(sockfd,msg,MAXDATASIZE,0,(struct sockaddr *)&client,&sin_size);
//        
//        if (num < 0){
//            perror("recvfrom error\n");
//            _exit(1);
//        }
//        
//        msg[num] = '\0';
//        printf("You got a message (%s%) from %s\n",msg,inet_ntoa(client.sin_addr) ); /* prints client's IP */
//        sendto(sockfd,"Welcome to my server.\n",22,0,(struct sockaddr *)&client,sin_size); /* send to the client
//                                                                                            welcome message */ 
//        if (!strcmp(msg,"quit")) break;
//	} 
//    
//	close(sockfd);   /* close listenfd */         
}



