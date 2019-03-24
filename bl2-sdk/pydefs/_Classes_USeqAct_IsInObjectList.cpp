#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_IsInObjectList(py::module &m)
{
    py::class_< USeqAct_IsInObjectList,  USequenceAction   >(m, "USeqAct_IsInObjectList")
		.def_static("StaticClass", &USeqAct_IsInObjectList::StaticClass, py::return_value_policy::reference)
          ;
}