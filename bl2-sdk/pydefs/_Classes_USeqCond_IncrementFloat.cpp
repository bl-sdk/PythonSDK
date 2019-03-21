#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IncrementFloat(py::object m)
{
    py::class_< USeqCond_IncrementFloat,  USequenceCondition   >(m, "USeqCond_IncrementFloat")
        .def_readwrite("IncrementAmount", &USeqCond_IncrementFloat::IncrementAmount)
        .def_readwrite("ValueA", &USeqCond_IncrementFloat::ValueA)
        .def_readwrite("ValueB", &USeqCond_IncrementFloat::ValueB)
        .def("StaticClass", &USeqCond_IncrementFloat::StaticClass, py::return_value_policy::reference)
          ;
}