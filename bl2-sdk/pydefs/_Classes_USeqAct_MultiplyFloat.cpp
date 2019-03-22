#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MultiplyFloat(py::module &m)
{
    py::class_< USeqAct_MultiplyFloat,  USeqAct_SetSequenceVariable   >(m, "USeqAct_MultiplyFloat")
        .def_readwrite("ValueA", &USeqAct_MultiplyFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_MultiplyFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_MultiplyFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_MultiplyFloat::IntResult)
        .def("StaticClass", &USeqAct_MultiplyFloat::StaticClass, py::return_value_policy::reference)
          ;
}