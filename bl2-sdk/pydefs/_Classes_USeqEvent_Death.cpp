#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_Death()
{
    py::class_< USeqEvent_Death,  USequenceEvent   >("USeqEvent_Death")
        .def("StaticClass", &USeqEvent_Death::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}