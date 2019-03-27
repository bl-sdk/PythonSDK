#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SubtractInt(py::module &m)
{
    py::class_< USeqAct_SubtractInt,  USeqAct_SetSequenceVariable   >(m, "USeqAct_SubtractInt")
		.def_static("StaticClass", &USeqAct_SubtractInt::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ValueA", &USeqAct_SubtractInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_SubtractInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_SubtractInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_SubtractInt::IntResult)
          ;
}