#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MathFloat()
{
    py::class_< USeqAct_MathFloat,  USequenceAction   >("USeqAct_MathFloat")
        .def_readwrite("ValueA", &USeqAct_MathFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_MathFloat::ValueB)
        .def_readwrite("Result", &USeqAct_MathFloat::Result)
        .def_readwrite("Operation", &USeqAct_MathBase::Operation)
        .def("StaticClass", &USeqAct_MathFloat::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}