#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AddInt(py::module &m)
{
    py::class_< USeqAct_AddInt,  USeqAct_SetSequenceVariable   >(m, "USeqAct_AddInt")
		.def_static("StaticClass", &USeqAct_AddInt::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ValueA", &USeqAct_AddInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_AddInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_AddInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_AddInt::IntResult)
          ;
}