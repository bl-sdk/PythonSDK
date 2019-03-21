#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowReplicatedInventoryManager()
{
    py::class_< AWillowReplicatedInventoryManager,  AWillowInventoryManager   >("AWillowReplicatedInventoryManager")
        .def("StaticClass", &AWillowReplicatedInventoryManager::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}