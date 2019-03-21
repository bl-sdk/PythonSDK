#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetFloat(py::object m)
{
    py::class_< USeqAct_SetFloat,  USeqAct_SetSequenceVariable   >(m, "USeqAct_SetFloat")
        .def_readwrite("Target", &USeqAct_SetFloat::Target)
        .def_readwrite("Value", &USeqAct_SetFloat::Value)
        .def("StaticClass", &USeqAct_SetFloat::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_SetFloat::eventGetObjClassVersion)
          ;
}