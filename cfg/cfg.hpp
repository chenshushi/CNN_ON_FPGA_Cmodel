#include <string>
#include <stdlib.h>
using namespace std;
struct cfg_t {
    string      strFilePic          ;
    string      strFileWeight_L1    ;
    string      strFileBias_L1      ;
    string      strFileWeight_L2    ;
    string      strFileBias_L2      ;
    string      strFileWeight_L3    ;
    string      strFileBias_L3      ;
    string      strFileWeight_F1    ;
    string      strFileBias_F1      ;
    string      strFileWeight_F2    ;
    string      strFileBias_F2      ;
    int         picWidth            ;
    int         picHeight           ;
    int         L1_output_channel   ;
    int         L2_input_channel    ;
    int         L2_output_channel   ;
    int         L3_input_channel    ;
    int         L3_output_channel   ;
    int         F1_input_channel    ;
    int         F1_output_channel   ;
    int         F2_input_channel    ;
    int         F2_output_channel   ;
};
void cfgMap(cfg_t *cfg, string *datKey, char *datCfgStr) {
    //int datCfgInt = atoi(datCfgStr);
    //double datCfgDouble = atof(datCfgStr);
    //bool datCfgBool = datCfgInt ? true : false;
    if(*datKey == "--strFilepic")                     cfg->strFilePic       = *datCfgStr;
    else if (*datKey == "--strFileWeight_L1")         cfg->strFileWeight_L1 = *datCfgStr;
    else if (*datKey == "--strFileBias_L1 ")          cfg->strFileBias_L1   = *datCfgStr;
    else if (*datKey == "--strFileWeight_L2")         cfg->strFileWeight_L2 = *datCfgStr;
    else if (*datKey == "--strFileBias_L2 ")          cfg->strFileBias_L2   = *datCfgStr;
    else if (*datKey == "--strFileWeight_L3")         cfg->strFileWeight_L3 = *datCfgStr;
    else if (*datKey == "--strFileBias_L2 ")          cfg->strFileBias_L2   = *datCfgStr;
    else if (*datKey == "--strFileWeight_F1")         cfg->strFileWeight_F1 = *datCfgStr;
    else if (*datKey == "--strFileWeight_F2")         cfg->strFileWeight_F2 = *datCfgStr;
}
void cfgIni(cfg_t *cfg, int cntArg, char *datArg[]) {
    for(int idxArg = 1; idxArg < cntArg - 1; idxArg++){
        string datKey = datArg[idxArg];
        char *datcfgStr = datArg[idxArg + 1];
        cfgMap(cfg,&datKey,datcfgStr);
    }
}