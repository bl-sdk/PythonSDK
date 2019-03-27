#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ToggleRestrictions(py::module &m)
{
    py::class_< UWillowSeqAct_ToggleRestrictions,  USequenceAction   >(m, "UWillowSeqAct_ToggleRestrictions")
		.def_static("StaticClass", &UWillowSeqAct_ToggleRestrictions::StaticClass, py::return_value_policy::reference)
          ;
}