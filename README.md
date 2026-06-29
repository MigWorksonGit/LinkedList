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
        List* ctx = &my_list;
    
        ListAddBegin(ctx, 1);
        ListAddEnd(ctx, 2);
        ListAddBegin(ctx, 3);
        ListAddEnd(ctx, 4);
        
        List temp_list = {0};
        ctx = &temp_list;
        
        ListAddEnd(ctx, 5);
        ListAddBegin(ctx, 6);
        
        ctx = &my_list;
        ListAddEnd(ctx, 7);
        
        PrintList(&my_list);
        PrintList(&temp_list);
        
        ListFree(&my_list);
        ListFree(&temp_list);
    
        return 0;
    }
