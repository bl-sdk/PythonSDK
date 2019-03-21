#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_SeeDeath()
{
    py::class_< USeqEvent_SeeDeath,  USequenceEvent   >("USeqEvent_SeeDeath")
        .def("StaticClass", &USeqEvent_SeeDeath::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}