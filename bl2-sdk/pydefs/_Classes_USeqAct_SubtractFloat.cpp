#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SubtractFloat(py::object m)
{
    py::class_< USeqAct_SubtractFloat,  USeqAct_SetSequenceVariable   >(m, "USeqAct_SubtractFloat")
        .def_readwrite("ValueA", &USeqAct_SubtractFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_SubtractFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_SubtractFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_SubtractFloat::IntResult)
        .def("StaticClass", &USeqAct_SubtractFloat::StaticClass, py::return_value_policy::reference)
          ;
}