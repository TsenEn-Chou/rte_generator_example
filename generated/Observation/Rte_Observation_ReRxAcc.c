#define RTE_RUNNABLEAPI_ReRxAcc
#include "Rte_Observation.h" 
#include "../ioc_data_management.h"
extern uint32 Q2_Acc_first_reception_flag;
void Rte_Read_RpIfVehAcc_Acc(Impl_uint16* data, Std_TransformerError transformerError){

     Std_ReturnType return_value0 = IocRead_Q2_RCV1(data);
     //clear first_reception_flag check
     if (*data != 777 & Q2_Acc_first_reception_flag){
          CLEAR_BIT0(&Q2_Acc_first_reception_flag);
     }
     return;
}
void RTE_RUNNABLE_ReRxAcc(){
/* The algorithm of ReRxAcc */
return;
}
