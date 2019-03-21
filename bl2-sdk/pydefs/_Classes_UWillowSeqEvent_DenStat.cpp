#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_DenStat()
{
    py::class_< UWillowSeqEvent_DenStat,  USequenceEvent   >("UWillowSeqEvent_DenStat")
        .def_readwrite("TriggerValue", &UWillowSeqEvent_DenStat::TriggerValue)
        .def("StaticClass", &UWillowSeqEvent_DenStat::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}