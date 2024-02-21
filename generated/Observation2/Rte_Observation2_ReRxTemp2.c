#define RTE_RUNNABLEAPI_ReRxTemp2
#include "Rte_Observation2.h" 
#include "../ioc_data_management.h"
#include "../../kernel/alarm.h"
#include "../../kernel/event.h"
#include "../../Os_Configure/inc/event_Cfg.h"
void Rte_Receive_RpIfTemperature2_Temp(Impl_uint16* data, Std_TransformerError transformerError){

     Std_ReturnType return_value0 = IocReceive_Q3_2(data);
     if(return_value0 == IOC_E_NO_DATA) {
          TickType max = 0;
          GetAlarm(alarm1,&max);
          max = max + 10;
          TickType temp = 0;
          WaitEvent(event1);
          GetAlarm(alarm1,&temp);
          if(temp >= max) {
               return RTE_E_TIMEOUT;
          }
          IocReceive_Q3_2(data);
     }
     return;
}
void RTE_RUNNABLE_ReRxTemp2(){
/* The algorithm of ReRxTemp2 */
return;
}
