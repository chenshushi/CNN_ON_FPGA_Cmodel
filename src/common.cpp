#include "common.hpp"
void fthPicDat(int posHeight ,int  posWidth, pxl_t datPic[250][250], pxl_t datCurBlock[16][16]){
    for(int j = 0; j < 16; j++){
        for(int i = 0; i < 16; i ++){
            datCurBlock[j][i] = datPic[posHeight][posWidth];
        }
    }
}
weight_t filter(weight_t *datPic, weight_t kernel[5][5],int width){
    weight_t result = 0;
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            result = result + *(datPic + j * width + i) * kernel[j][i];
        }
    }
    return result;
}