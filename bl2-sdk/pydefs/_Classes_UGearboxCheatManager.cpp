#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxCheatManager(py::module &m)
{
    py::class_< UGearboxCheatManager,  UCheatManager   >(m, "UGearboxCheatManager")
        .def("StaticClass", &UGearboxCheatManager::StaticClass, py::return_value_policy::reference)
          ;
}