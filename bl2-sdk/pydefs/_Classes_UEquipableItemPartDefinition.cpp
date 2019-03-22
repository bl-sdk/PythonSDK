#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEquipableItemPartDefinition(py::module &m)
{
    py::class_< UEquipableItemPartDefinition,  UItemPartDefinition   >(m, "UEquipableItemPartDefinition")
        .def("StaticClass", &UEquipableItemPartDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnUnequipped", &UEquipableItemPartDefinition::OnUnequipped)
        .def("OnEquipped", &UEquipableItemPartDefinition::OnEquipped)
          ;
}