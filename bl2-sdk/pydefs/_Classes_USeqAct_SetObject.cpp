#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetObject()
{
    py::class_< USeqAct_SetObject,  USeqAct_SetSequenceVariable   >("USeqAct_SetObject")
        .def_readwrite("DefaultValue", &USeqAct_SetObject::DefaultValue)
        .def_readwrite("Value", &USeqAct_SetObject::Value)
        .def("StaticClass", &USeqAct_SetObject::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_SetObject::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}