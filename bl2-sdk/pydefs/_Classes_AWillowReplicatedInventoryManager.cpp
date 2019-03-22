#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowReplicatedInventoryManager(py::module &m)
{
    py::class_< AWillowReplicatedInventoryManager,  AWillowInventoryManager   >(m, "AWillowReplicatedInventoryManager")
        .def("StaticClass", &AWillowReplicatedInventoryManager::StaticClass, py::return_value_policy::reference)
          ;
}