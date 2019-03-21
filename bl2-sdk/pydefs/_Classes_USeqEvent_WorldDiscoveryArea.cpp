#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_WorldDiscoveryArea()
{
    py::class_< USeqEvent_WorldDiscoveryArea,  USequenceEvent   >("USeqEvent_WorldDiscoveryArea")
        .def("StaticClass", &USeqEvent_WorldDiscoveryArea::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}