#include "monocular.h"

int main ( int argc, char** argv )
{
    //标定板的大小和小方格的尺寸
    monocular Mono_cali(6, 9, 25);
    Mono_cali.calibrate();

    return 0;
}