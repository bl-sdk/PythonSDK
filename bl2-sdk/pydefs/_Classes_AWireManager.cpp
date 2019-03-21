#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWireManager()
{
    py::class_< AWireManager,  AActor   >("AWireManager")
        .def_readwrite("DefaultMaterial", &AWireManager::DefaultMaterial)
        .def("StaticClass", &AWireManager::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}