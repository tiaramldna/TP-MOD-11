#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#define nil NULL

using namespace std;

struct infotype{
    string artis;
    string judul;
};

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct playlistLagu{
    adr head;
    adr tail;
};

void createPlaylist_1301213185(playlistLagu &Q);
void createElement_1301213185(infotype laguBaru, adr &pLagu);
void enqueue_1301213185(playlistLagu &Q, adr pLagu);
void dequeue_1301213185(playlistLagu &Q, adr pLagu);
void showSemuaLagu_1301213185(playlistLagu Q);
#endif // QUEUE_H_INCLUDED
