#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetString()
{
    py::class_< USeqAct_SetString,  USeqAct_SetSequenceVariable   >("USeqAct_SetString")
        .def_readwrite("Target", &USeqAct_SetString::Target)
        .def_readwrite("Value", &USeqAct_SetString::Value)
        .def("StaticClass", &USeqAct_SetString::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_SetString::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}