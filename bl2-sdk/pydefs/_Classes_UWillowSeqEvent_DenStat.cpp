#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_DenStat(py::module &m)
{
    py::class_< UWillowSeqEvent_DenStat,  USequenceEvent   >(m, "UWillowSeqEvent_DenStat")
		.def_static("StaticClass", &UWillowSeqEvent_DenStat::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TriggerValue", &UWillowSeqEvent_DenStat::TriggerValue)
          ;
}