#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetNameList()
{
    py::class_< USeqAct_SetNameList,  USequenceAction   >("USeqAct_SetNameList")
        .def_readwrite("SetType", &USeqAct_SetNameList::SetType)
        .def_readwrite("NameListDef", &USeqAct_SetNameList::NameListDef)
        .def("StaticClass", &USeqAct_SetNameList::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}