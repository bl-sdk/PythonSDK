#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareInt()
{
    py::class_< USeqCond_CompareInt,  USequenceCondition   >("USeqCond_CompareInt")
        .def_readwrite("ValueA", &USeqCond_CompareInt::ValueA)
        .def_readwrite("ValueB", &USeqCond_CompareInt::ValueB)
        .def("StaticClass", &USeqCond_CompareInt::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}