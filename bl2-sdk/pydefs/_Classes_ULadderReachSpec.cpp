#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULadderReachSpec(py::module &m)
{
    py::class_< ULadderReachSpec,  UReachSpec   >(m, "ULadderReachSpec")
		.def_static("StaticClass", &ULadderReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}