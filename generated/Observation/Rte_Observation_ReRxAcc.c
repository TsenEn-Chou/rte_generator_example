#define RTE_RUNNABLEAPI_ReRxAcc
#include "Rte_Observation.h" 
#include "../ioc_data_management.h"
extern uint32 Q2_Acc_first_reception_flag;
Std_ReturnType Rte_Read_RpIfVehAcc_Acc(Impl_uint16* data, Std_TransformerError transformerError){

     Std_ReturnType return_value0 = IocRead_Q2_RCV1(data);
     //clear first_reception_flag check
     if (*data != 222 & Q2_Acc_first_reception_flag){
          CLEAR_BIT0(&Q2_Acc_first_reception_flag);
     }
          //invalid check
     if ( *data == 255) {
          *data = 222;
     }
     return RTE_E_OK;
}
void RTE_RUNNABLE_ReRxAcc(){
/* The algorithm of ReRxAcc */
return;
}
