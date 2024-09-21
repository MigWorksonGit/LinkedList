# Linked List Impl
Linked List implementation in C as a single header library

**HEAVILY INSPIRED, I mean HEAVILY** by https://github.com/tsoding/arena

He is a great programmer, go show him some support on https://www.twitch.tv/tsoding

## How to use
Simply add linkedlist.h to your code and its ready to use

    #include "linkedlist.h"

    int main(void)
    {
        List my_list = {0};
        List* ctx_list = &my_list;

        ListAddBegin(ctx_list, 5);
        ListAddEnd(ctx_list, 10);
        ListAddBegin(ctx_list, 1);
        ListAddEnd(ctx_list, 11);

        List temp_list = {0};
        ctx_list = &temp_list;

        ListAddEnd(ctx_list, 6);
        ListAddBegin(ctx_list, 1);

        PrintList(&my_list);
        PrintList(&temp_list);

        ListFree(&my_list);
        ListFree(&temp_list);

        return 0;
    }