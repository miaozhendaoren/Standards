/** @file     Environment_MemMap.h
  * 
  * @brief    RTE Sample SWC MemMap file
  * 
  */

#if defined (START_WITH_IF)
#elif defined(Environment_START_SEC_CODE)
#undef Environment_START_SEC_CODE
#define RTE_START_SEC_APPL_CODE
#elif defined(Environment_STOP_SEC_CODE)
#undef Environment_STOP_SEC_CODE
#define RTE_STOP_SEC_APPL_CODE

#endif /* START_WITH_IF */

#include "MemMap.h"

