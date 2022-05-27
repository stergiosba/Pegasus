#include <myCHOL2.h>
#include <device.h>
#include <stdio.h>

uint16_t check;
uint16_t sleep;

int main(void)
{
    Device_init();
    Interrupt_initModule();
    Interrupt_initVectorTable();
    EINT;
    ERTM;

    //float A[N*N] = {4.0, -1.0, -1.0, -1.0, 4.0, -1.0, -1.0 ,-1.0 , 4.0};
    float B[N*N];
    float A[N*N] =
    {
    2.97013501161380    ,2.12379707429834   ,2.65849548626597   ,2.63308171419847   ,2.55618699404475   ,2.14341489986319   ,2.94004380460203   ,2.89141412960990   ,3.02093116909430   ,1.97206385121652,
    2.12379707429834    ,2.42660041768136   ,2.32707485597331   ,2.15674205908146   ,2.68050872561834   ,1.50473448114253   ,2.09400758035127   ,2.81223981183653   ,2.22367324914715   ,1.74850493422440,
    2.65849548626597    ,2.32707485597331   ,4.79263737703086   ,3.51422036457563   ,3.81069913151511   ,2.70755981370156   ,2.86605704889075   ,3.90560179115932   ,4.21673505079240   ,3.10148534529344,
    2.63308171419847    ,2.15674205908146   ,3.51422036457563   ,4.03653818651459   ,2.48608030949455   ,2.33492303215859   ,3.04014806677545   ,2.98986159444988   ,3.26082376721887   ,2.13127932963281,
    2.55618699404475    ,2.68050872561834   ,3.81069913151511   ,2.48608030949455   ,4.02692063738971   ,2.04018476091397   ,2.45444193991512   ,3.90960727881222   ,3.41523564336229   ,2.71028832238732,
    2.14341489986319    ,1.50473448114253   ,2.70755981370156   ,2.33492303215859   ,2.04018476091397   ,2.53843666393708   ,2.19827569167528   ,2.21194613628438   ,2.82092735614422   ,1.88783442415468,
    2.94004380460203    ,2.09400758035127   ,2.86605704889075   ,3.04014806677545   ,2.45444193991512   ,2.19827569167528   ,3.32209373249153   ,2.82563243861420   ,3.20932240916266   ,2.05681167031968,
    2.89141412960990    ,2.81223981183653   ,3.90560179115932   ,2.98986159444988   ,3.90960727881222   ,2.21194613628438   ,2.82563243861420   ,4.55799178727805   ,3.61696479400183   ,2.96378441141885,
    3.02093116909430    ,2.22367324914715   ,4.21673505079240   ,3.26082376721887   ,3.41523564336229   ,2.82092735614422   ,3.20932240916266   ,3.61696479400183   ,4.19242771204075   ,3.08155920340698,
    1.97206385121652    ,1.74850493422440   ,3.10148534529344   ,2.13127932963281   ,2.71028832238732   ,1.88783442415468   ,2.05681167031968   ,2.96378441141885   ,3.08155920340698   ,2.99156834290365
    };
    float L[N*N], invL[N*N], L2[N*N], invL2[N*N];
    int l,m,f;
    float sum;
    while(1)
    {
        CHOL3(A,L,invL);    // 7014 for 5x5 | 24875 for 10x10
        //CHOL2(A,L2,invL2);  // 8953  for 5x5 | 36863 for 10x10

        for (l=0;l<N;l++)
        {
            for (m=0;m<N;m++)
            {
                sum = 0;
                for(f=0;f<N;f++)
                {
                    sum+= L[l+f*N]*L[f*N+m];
                }
                B[l*N+m] = sum;
            }
        }
    }
}



