//
// Created by 张云飞 on 2019-03-24.
//

#include "unp.h"

int main(int argc, char **argv)
{
    err_msg("asdfasdf");
    int listenfd, connfd;
    pid_t childdpid;
    socklen_t clilen;
    struct sockaddr_in cliaddr, servaddr;
    err_msg("start to accpet 1");

    listenfd = Socket(AF_INET, SOCK_STREAM, 0);
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(SERV_PORT);
    err_msg("start to accpet 2");

    Bind(listenfd, (SA *) &servaddr, sizeof(servaddr));
    err_msg("start to accpet 3");
    Listen(listenfd, LISTENQ);
    err_msg("start to accpet 4");

    for(;;)
    {
        clilen = sizeof(cliaddr);
        err_msg("start to accpet");
        connfd = Accept(listenfd, (SA *)&cliaddr, &clilen);
        err_msg("accept sucess ");
        if( (childdpid = Fork()) ==0 )
        {
            Close(listenfd);
            err_msg("aaaaaaa %i");
            str_echo(connfd);
            exit(0);
        }
        err_msg("adfasdf");
        Close(connfd);
    }

}

