#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AddFloat(py::module &m)
{
    py::class_< USeqAct_AddFloat,  USeqAct_SetSequenceVariable   >(m, "USeqAct_AddFloat")
		.def_static("StaticClass", &USeqAct_AddFloat::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ValueA", &USeqAct_AddFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_AddFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_AddFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_AddFloat::IntResult)
          ;
}