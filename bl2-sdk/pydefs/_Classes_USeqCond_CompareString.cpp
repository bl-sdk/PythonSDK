#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareString()
{
    py::class_< USeqCond_CompareString,  USequenceCondition   >("USeqCond_CompareString")
        .def("StaticClass", &USeqCond_CompareString::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}