#define RTE_RUNNABLEAPI_ReRxTemp
#include "Rte_Observation.h" 
#include "../rte_data_management.h"
#include "../ioc_data_management.h"
#include "../../kernel/alarm.h"
#include "../../kernel/event.h"
#include "../../Os_Configure/inc/event_Cfg.h"
extern RingBuffer RB_R3_Temp;
Std_ReturnType Rte_Receive_RpIfTemperature_Temp(Impl_uint16* data, Std_TransformerError transformerError){

     Std_ReturnType return_value0 = RTE_Dequeue(&RB_R3_Temp, data, sizeof(MyUint16OfVendorID));
     if(return_value0 == RTE_E_NO_DATA) {
          return RTE_E_NO_DATA;
     }
     else if(return_value0 == RTE_E_NOK) {
          return RTE_E_NOK;
     }
     Std_ReturnType return_value1 = IocReceive_Q3(data);
     if(return_value1 == IOC_E_NO_DATA) {
          return RTE_E_NO_DATA;
     }
     else if(return_value1 == IOC_E_NOK) {
          return RTE_E_NOK;
     }
     return RTE_E_OK;
}
void RTE_RUNNABLE_ReRxTemp(){
/* The algorithm of ReRxTemp */
return;
}
