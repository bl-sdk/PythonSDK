#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_LOS()
{
    class_< USeqEvent_LOS, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_LOS", no_init)
        .def_readwrite("ScreenCenterDistance", &USeqEvent_LOS::ScreenCenterDistance)
        .def_readwrite("TriggerDistance", &USeqEvent_LOS::TriggerDistance)
        .def("StaticClass", &USeqEvent_LOS::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqEvent_LOS::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}