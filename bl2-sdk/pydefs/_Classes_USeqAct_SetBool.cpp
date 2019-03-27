#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetBool(py::module &m)
{
    py::class_< USeqAct_SetBool,  USeqAct_SetSequenceVariable   >(m, "USeqAct_SetBool")
		.def_static("StaticClass", &USeqAct_SetBool::StaticClass, py::return_value_policy::reference)
          ;
}