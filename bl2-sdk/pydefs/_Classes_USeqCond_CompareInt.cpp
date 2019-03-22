#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareInt(py::module &m)
{
    py::class_< USeqCond_CompareInt,  USequenceCondition   >(m, "USeqCond_CompareInt")
        .def_readwrite("ValueA", &USeqCond_CompareInt::ValueA)
        .def_readwrite("ValueB", &USeqCond_CompareInt::ValueB)
        .def("StaticClass", &USeqCond_CompareInt::StaticClass, py::return_value_policy::reference)
          ;
}