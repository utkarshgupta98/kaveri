
#ifndef _DB_ACCESS_H
#define _DB_ACCESS_H


#include<stdio.h>
#include<stdlib.h>
#include<mysql.h>

#define HOST         "localhost"
#define USER         "raja"
#define PASSWD      "Kucharla@1"
#define DB           "esb_db"
#define PORT         0
#define UNIX_SOCKET  NULL
#define FLAG         CLIENT_MULTI_STATEMENTS

void insert_into_esb_request(char *sender_id, char *dest_id,
char *message_type, char *reference_id, char *message_id,
char *received_on, char *data_location, char *status, char *status_details);

void finish_with_error(MYSQL *con);

#endif