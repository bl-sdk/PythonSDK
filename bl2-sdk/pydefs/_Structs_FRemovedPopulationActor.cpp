#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRemovedPopulationActor(py::module &m)
{
    py::class_< FRemovedPopulationActor >(m, "FRemovedPopulationActor")
        .def_readwrite("CreationFlags", &FRemovedPopulationActor::CreationFlags)
        .def_readwrite("FactoryPath", &FRemovedPopulationActor::FactoryPath)
  ;
}