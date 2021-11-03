#include <string>
using namespace std;

typedef uint8_t     pxl_t;
typedef int16_t     weight_t;
typedef int16_t     bais_t;
weight_t filter(weight_t *datPic, weight_t kernel[5][5],int width);
void fthPicDat(int posHeight ,int  posWidth, pxl_t datPic[250][250], pxl_t datCurBlock[16][16]);
void Layer_1  (weight_t weight_L1[4][5][5], bais_t bias_L1[4], weight_t result_data_0[16][16], weight_t result_data_1[16][16], weight_t result_data_2[16][16], weight_t result_data_3[16][16]);
void Layer_1_pool (weight_t result_data_0[16][16], weight_t result_data_1[16][16], weight_t result_data_2[16][16], weight_t result_data_3[16][16],
                   weight_t data_L1[4],            weight_t data_L2[4],            weight_t data_L3[4],            weight_t data_L4[4]);
void Layer_2 ();
void Layer_2_pool ();
void Layer_3 ();
void Layer_3_pool ();
void Full_Connect_0();
void Full_Connect_1();