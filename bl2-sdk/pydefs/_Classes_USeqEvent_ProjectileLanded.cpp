#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_ProjectileLanded()
{
    py::class_< USeqEvent_ProjectileLanded,  USequenceEvent   >("USeqEvent_ProjectileLanded")
        .def_readwrite("MaxDistance", &USeqEvent_ProjectileLanded::MaxDistance)
        .def("StaticClass", &USeqEvent_ProjectileLanded::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}