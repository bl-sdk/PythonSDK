#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIState(py::module &m)
{
    py::class_< UAIState,  UAIStateBase   >(m, "UAIState")
		.def_static("StaticClass", &UAIState::StaticClass, py::return_value_policy::reference)
          ;
}