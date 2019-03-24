#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABlockingVolume(py::module &m)
{
    py::class_< ABlockingVolume,  AVolume   >(m, "ABlockingVolume")
		.def_static("StaticClass", &ABlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ABlockingVolume::OnToggle)
          ;
}