#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIState_Priority(py::module &m)
{
    py::class_< UAIState_Priority,  UAIStateBase   >(m, "UAIState_Priority")
		.def_static("StaticClass", &UAIState_Priority::StaticClass, py::return_value_policy::reference)
          ;
}