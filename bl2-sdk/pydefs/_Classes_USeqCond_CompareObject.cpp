#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareObject()
{
    py::class_< USeqCond_CompareObject,  USequenceCondition   >("USeqCond_CompareObject")
        .def("StaticClass", &USeqCond_CompareObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}