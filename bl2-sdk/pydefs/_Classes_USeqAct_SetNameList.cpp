#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetNameList(py::module &m)
{
    py::class_< USeqAct_SetNameList,  USequenceAction   >(m, "USeqAct_SetNameList")
		.def_static("StaticClass", &USeqAct_SetNameList::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SetType", &USeqAct_SetNameList::SetType)
        .def_readwrite("NameListDef", &USeqAct_SetNameList::NameListDef)
          ;
}