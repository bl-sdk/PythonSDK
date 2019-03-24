#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowForcedReachSpec(py::module &m)
{
    py::class_< UWillowForcedReachSpec,  UForcedReachSpec   >(m, "UWillowForcedReachSpec")
		.def_static("StaticClass", &UWillowForcedReachSpec::StaticClass, py::return_value_policy::reference)
        .def("eventDoSpecialMove", &UWillowForcedReachSpec::eventDoSpecialMove)
          ;
}