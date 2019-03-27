#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFloorToCeilingReachSpec(py::module &m)
{
    py::class_< UFloorToCeilingReachSpec,  UForcedReachSpec   >(m, "UFloorToCeilingReachSpec")
		.def_static("StaticClass", &UFloorToCeilingReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}