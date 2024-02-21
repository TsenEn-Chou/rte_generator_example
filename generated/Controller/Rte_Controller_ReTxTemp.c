#define RTE_RUNNABLEAPI_ReTxTemp
#include "Rte_Controller.h" 
#include "../rte_data_management.h"
#include "../../kernel/event.h"
extern RingBuffer RB_R3_Temp;
Std_ReturnType Rte_Send_PpIfTemperature_Temp(Impl_uint8 data, Std_TransformerError transformerError){

     Std_ReturnType return_value0 = RTE_Enqueue(&RB_R3_Temp, &data, sizeof(MyUint8OfVendorID));
     SetEvent(event1);
     if(return_value0 == RTE_E_LIMIT) {
          return RTE_E_LIMIT;
     }
     return RTE_E_OK;
}
void RTE_RUNNABLE_ReTxTemp(){
/* The algorithm of ReTxTemp */
return;
}
