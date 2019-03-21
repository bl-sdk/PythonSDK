#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareFloat()
{
    py::class_< USeqCond_CompareFloat,  USequenceCondition   >("USeqCond_CompareFloat")
        .def_readwrite("ValueA", &USeqCond_CompareFloat::ValueA)
        .def_readwrite("ValueB", &USeqCond_CompareFloat::ValueB)
        .def("StaticClass", &USeqCond_CompareFloat::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}