#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceAction(py::module &m)
{
    py::class_< USequenceAction, USequenceOp   >(m, "USequenceAction")
		.def_static("StaticClass", &USequenceAction::StaticClass, py::return_value_policy::reference)
          ;
}