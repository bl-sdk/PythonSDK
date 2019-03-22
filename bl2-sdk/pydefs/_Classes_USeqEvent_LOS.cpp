#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_LOS(py::module &m)
{
    py::class_< USeqEvent_LOS,  USequenceEvent   >(m, "USeqEvent_LOS")
        .def_readwrite("ScreenCenterDistance", &USeqEvent_LOS::ScreenCenterDistance)
        .def_readwrite("TriggerDistance", &USeqEvent_LOS::TriggerDistance)
        .def("eventGetObjClassVersion", &USeqEvent_LOS::eventGetObjClassVersion)
          ;
}