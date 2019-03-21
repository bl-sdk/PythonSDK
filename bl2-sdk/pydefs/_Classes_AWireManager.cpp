#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWireManager(py::object m)
{
    py::class_< AWireManager,  AActor   >(m, "AWireManager")
        .def_readwrite("DefaultMaterial", &AWireManager::DefaultMaterial)
        .def("StaticClass", &AWireManager::StaticClass, py::return_value_policy::reference)
          ;
}