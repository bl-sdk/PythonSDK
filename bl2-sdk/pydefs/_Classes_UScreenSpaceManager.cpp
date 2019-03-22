#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScreenSpaceManager(py::module &m)
{
    py::class_< UScreenSpaceManager,  UObject   >(m, "UScreenSpaceManager")
        .def_readwrite("pLocalPlayer", &UScreenSpaceManager::pLocalPlayer)
        .def_readwrite("ViewWidth", &UScreenSpaceManager::ViewWidth)
        .def_readwrite("ViewHeight", &UScreenSpaceManager::ViewHeight)
        .def_readwrite("ViewProjectionMatrix", &UScreenSpaceManager::ViewProjectionMatrix)
          ;
}