#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetFloat()
{
    py::class_< USeqAct_SetFloat,  USeqAct_SetSequenceVariable   >("USeqAct_SetFloat")
        .def_readwrite("Target", &USeqAct_SetFloat::Target)
        .def_readwrite("Value", &USeqAct_SetFloat::Value)
        .def("StaticClass", &USeqAct_SetFloat::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_SetFloat::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}