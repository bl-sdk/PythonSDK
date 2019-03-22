#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPickupable(py::module &m)
{
    py::class_< UIPickupable,  UInterface   >(m, "UIPickupable")
        .def("SetInteractionIcon", &UIPickupable::SetInteractionIcon)
        .def("MarkAsDiscovered", &UIPickupable::MarkAsDiscovered)
        .def("IsDiscovered", &UIPickupable::IsDiscovered)
        .def("FailedPickup", &UIPickupable::FailedPickup)
        .def("DenyPickupAttempt", &UIPickupable::DenyPickupAttempt)
        .def("Pickupable_IsEnabled", &UIPickupable::Pickupable_IsEnabled)
        .def("GetPickupableInventoryDefinition", &UIPickupable::GetPickupableInventoryDefinition, py::return_value_policy::reference)
        .def("GetPickupableInventory", &UIPickupable::GetPickupableInventory, py::return_value_policy::reference)
        .def("GetPickupableMeshActor", &UIPickupable::GetPickupableMeshActor, py::return_value_policy::reference)
        .def("GiveTo", &UIPickupable::GiveTo)
          ;
}