#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowAccessControl(py::module &m)
{
    py::class_< AWillowAccessControl,  AAccessControl   >(m, "AWillowAccessControl")
		.def_static("StaticClass", &AWillowAccessControl::StaticClass, py::return_value_policy::reference)
        .def("ForceKickPlayer", &AWillowAccessControl::ForceKickPlayer)
          ;
}