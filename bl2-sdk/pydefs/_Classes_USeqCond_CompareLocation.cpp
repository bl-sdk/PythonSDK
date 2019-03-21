#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareLocation()
{
    py::class_< USeqCond_CompareLocation,  USequenceCondition   >("USeqCond_CompareLocation")
        .def_readwrite("CheckRadius", &USeqCond_CompareLocation::CheckRadius)
        .def("StaticClass", &USeqCond_CompareLocation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}