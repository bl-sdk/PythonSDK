#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowAccessControl(py::module &m)
{
    py::class_< AWillowAccessControl,  AAccessControl   >(m, "AWillowAccessControl")
        .def("ForceKickPlayer", &AWillowAccessControl::ForceKickPlayer)
          ;
}