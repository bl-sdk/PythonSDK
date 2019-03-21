#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AddInt(py::object m)
{
    py::class_< USeqAct_AddInt,  USeqAct_SetSequenceVariable   >(m, "USeqAct_AddInt")
        .def_readwrite("ValueA", &USeqAct_AddInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_AddInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_AddInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_AddInt::IntResult)
        .def("StaticClass", &USeqAct_AddInt::StaticClass, py::return_value_policy::reference)
          ;
}