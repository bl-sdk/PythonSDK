#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_ConstraintBroken()
{
    py::class_< USeqEvent_ConstraintBroken,  USequenceEvent   >("USeqEvent_ConstraintBroken")
        .def("StaticClass", &USeqEvent_ConstraintBroken::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}