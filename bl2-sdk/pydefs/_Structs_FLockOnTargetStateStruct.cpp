#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLockOnTargetStateStruct()
{
    class_< FLockOnTargetStateStruct >("FLockOnTargetStateStruct", no_init)
        .def_readwrite("CurrentTarget", &FLockOnTargetStateStruct::CurrentTarget)
        .def_readwrite("StartTime", &FLockOnTargetStateStruct::StartTime)
        .def_readwrite("CoolDownStartTime", &FLockOnTargetStateStruct::CoolDownStartTime)
  ;
}