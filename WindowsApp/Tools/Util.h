/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-03-13 15:07:56
 * @Description: Util宏,定义Util.c文件的接口
 */
#ifndef UTIL_H
#define UTIL_H

/* 声明全局变量(声明未定义.到.c文件中定义全局变量) */
extern int NUM_REQUESTS;
extern int NUM_CONCURRENT;
extern const char *SEND_BODY; // 声明成变量.因为如果是声明成常量那么在编译的时候就确定了他的值
extern const char *URL;
extern int FOUND_G;
extern int FOUND_P;
extern int FOUND_B;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <getopt.h>

extern struct option long_options[];

void *send_requests_thread(void *url_ptr);
void print_usage();
void process_arguments(int argc, char *argv []);
const char *get_json_file(const char *file_name);
const char *copy_file(const char *file_name);

#endif /* UTIL_H */