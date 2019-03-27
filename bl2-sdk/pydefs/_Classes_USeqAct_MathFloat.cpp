#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MathFloat(py::module &m)
{
    py::class_< USeqAct_MathFloat,  USequenceAction   >(m, "USeqAct_MathFloat")
		.def_static("StaticClass", &USeqAct_MathFloat::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ValueA", &USeqAct_MathFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_MathFloat::ValueB)
        .def_readwrite("Result", &USeqAct_MathFloat::Result)
        .def_readwrite("Operation", &USeqAct_MathBase::Operation)
          ;
}