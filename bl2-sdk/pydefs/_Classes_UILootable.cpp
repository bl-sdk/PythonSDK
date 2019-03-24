#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UILootable(py::module &m)
{
    py::class_< UILootable,  UInterface   >(m, "UILootable")
		.def_static("StaticClass", &UILootable::StaticClass, py::return_value_policy::reference)
        .def("WillLootableBeResetOnLevelLoad", &UILootable::WillLootableBeResetOnLevelLoad)
        .def("GetDroppedLoot", &UILootable::GetDroppedLoot)
        .def("GetAttachedLoot", &UILootable::GetAttachedLoot)
          ;
}