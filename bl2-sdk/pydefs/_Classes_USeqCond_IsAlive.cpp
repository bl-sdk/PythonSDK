#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsAlive()
{
    py::class_< USeqCond_IsAlive,  USequenceCondition   >("USeqCond_IsAlive")
        .def("StaticClass", &USeqCond_IsAlive::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}