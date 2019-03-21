#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_LOS()
{
    py::class_< USeqEvent_LOS,  USequenceEvent   >("USeqEvent_LOS")
        .def_readwrite("ScreenCenterDistance", &USeqEvent_LOS::ScreenCenterDistance)
        .def_readwrite("TriggerDistance", &USeqEvent_LOS::TriggerDistance)
        .def("StaticClass", &USeqEvent_LOS::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqEvent_LOS::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}