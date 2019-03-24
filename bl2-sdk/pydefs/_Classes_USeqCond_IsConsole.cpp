#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsConsole(py::module &m)
{
    py::class_< USeqCond_IsConsole,  USequenceCondition   >(m, "USeqCond_IsConsole")
		.def_static("StaticClass", &USeqCond_IsConsole::StaticClass, py::return_value_policy::reference)
          ;
}