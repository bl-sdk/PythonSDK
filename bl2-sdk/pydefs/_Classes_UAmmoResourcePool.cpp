#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAmmoResourcePool(py::module &m)
{
    py::class_< UAmmoResourcePool,  UResourcePool   >(m, "UAmmoResourcePool")
        .def("StaticClass", &UAmmoResourcePool::StaticClass, py::return_value_policy::reference)
        .def("GetDebugText", &UAmmoResourcePool::GetDebugText)
        .def("GetExtraAmmoRegen", &UAmmoResourcePool::GetExtraAmmoRegen)
          ;
}