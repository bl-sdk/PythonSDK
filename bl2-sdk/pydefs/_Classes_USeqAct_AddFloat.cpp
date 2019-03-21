#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AddFloat()
{
    py::class_< USeqAct_AddFloat,  USeqAct_SetSequenceVariable   >("USeqAct_AddFloat")
        .def_readwrite("ValueA", &USeqAct_AddFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_AddFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_AddFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_AddFloat::IntResult)
        .def("StaticClass", &USeqAct_AddFloat::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}