#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISpawnActor(py::module &m)
{
    py::class_< UISpawnActor,  UInterface   >(m, "UISpawnActor")
		.def_static("StaticClass", &UISpawnActor::StaticClass, py::return_value_policy::reference)
        .def("GetSpawnOwner", &UISpawnActor::GetSpawnOwner, py::return_value_policy::reference)
        .def("SpawnForMap", &UISpawnActor::SpawnForMap, py::return_value_policy::reference)
          ;
}