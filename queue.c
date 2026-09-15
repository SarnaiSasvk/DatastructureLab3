#include "DS.h"

/*
 * Тайлбар: доорх функцүүд нь Queue бүтцийн p->q_arr[] хүснэгт болон
 * p->q_len хувьсагчтай харьцана.
 */

// Төгсгөлд нь оруулах үйлдэл. p-ийн зааж буй Queue-д x утгыг хийнэ.
void q_push(Queue *p, int x) {
    p->q_arr[p->q_len] = x;
    p->q_len++;
}

// Эхлэлээс нь гаргах үйлдэл. p-ийн зааж буй Queue-с гаргана.
// p->q_arr хүснэгтийн элементүүд нэг нэг байрлал урагшилна.
void q_pop(Queue *p) {
    if (p->q_len == 0) {
        return;
    }
    for (int i = 0; i < p->q_len - 1; i++) {
        p->q_arr[i] = p->q_arr[i + 1];
    }
    p->q_len--;
}
