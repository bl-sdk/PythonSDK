#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_ConstraintBroken(py::object m)
{
    py::class_< USeqEvent_ConstraintBroken,  USequenceEvent   >(m, "USeqEvent_ConstraintBroken")
        .def("StaticClass", &USeqEvent_ConstraintBroken::StaticClass, py::return_value_policy::reference)
          ;
}