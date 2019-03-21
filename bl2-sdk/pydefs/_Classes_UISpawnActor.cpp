#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISpawnActor()
{
    py::class_< UISpawnActor,  UInterface   >("UISpawnActor")
        .def("StaticClass", &UISpawnActor::StaticClass, py::return_value_policy::reference)
        .def("GetSpawnOwner", &UISpawnActor::GetSpawnOwner, py::return_value_policy::reference)
        .def("SpawnForMap", &UISpawnActor::SpawnForMap, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}