#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowUsableCustomizationItem(py::module &m)
{
    py::class_< AWillowUsableCustomizationItem,  AWillowUsableItem   >(m, "AWillowUsableCustomizationItem")
        .def("StaticClass", &AWillowUsableCustomizationItem::StaticClass, py::return_value_policy::reference)
        .def("IsUsefulToThisPlayer", &AWillowUsableCustomizationItem::IsUsefulToThisPlayer)
        .def("GetItemCardTopSectionString", &AWillowUsableCustomizationItem::GetItemCardTopSectionString)
        .def("InitMeshes", &AWillowUsableCustomizationItem::InitMeshes)
        .def("eventIsItemAutoUsedBy", &AWillowUsableCustomizationItem::eventIsItemAutoUsedBy)
        .def("FormatFunStatsText", &AWillowUsableCustomizationItem::FormatFunStatsText)
        .def("CanBeApplied", &AWillowUsableCustomizationItem::CanBeApplied)
        .def("TryConsume", &AWillowUsableCustomizationItem::TryConsume)
        .def("IsConsumable", &AWillowUsableCustomizationItem::IsConsumable)
        .def("ValidateDefinition", &AWillowUsableCustomizationItem::ValidateDefinition)
          ;
}