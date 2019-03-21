#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScreenSpaceManager()
{
    py::class_< UScreenSpaceManager,  UObject   >("UScreenSpaceManager")
        .def_readwrite("pLocalPlayer", &UScreenSpaceManager::pLocalPlayer)
        .def_readwrite("ViewWidth", &UScreenSpaceManager::ViewWidth)
        .def_readwrite("ViewHeight", &UScreenSpaceManager::ViewHeight)
        .def_readonly("UnknownData00", &UScreenSpaceManager::UnknownData00)
        .def_readwrite("ViewProjectionMatrix", &UScreenSpaceManager::ViewProjectionMatrix)
        .def("StaticClass", &UScreenSpaceManager::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}