#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorVolumeDefinition(py::object m)
{
    py::class_< UBehaviorVolumeDefinition,  UGBXDefinition   >(m, "UBehaviorVolumeDefinition")
        .def_readwrite("VfTable_IIConstructObject", &UBehaviorVolumeDefinition::VfTable_IIConstructObject)
        .def_readwrite("VfTable_IIBehaviorProvider", &UBehaviorVolumeDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("DefaultTouchImpact", &UBehaviorVolumeDefinition::DefaultTouchImpact)
        .def_readwrite("DefaultUntouchImpact", &UBehaviorVolumeDefinition::DefaultUntouchImpact)
        .def_readwrite("DefaultTraceImpact", &UBehaviorVolumeDefinition::DefaultTraceImpact)
        .def_readwrite("PhysicalMaterial", &UBehaviorVolumeDefinition::PhysicalMaterial)
        .def_readwrite("BehaviorProviderDefinition", &UBehaviorVolumeDefinition::BehaviorProviderDefinition)
        .def("StaticClass", &UBehaviorVolumeDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnShoot", &UBehaviorVolumeDefinition::OnShoot)
        .def("OnExit", &UBehaviorVolumeDefinition::OnExit)
        .def("OnEntry", &UBehaviorVolumeDefinition::OnEntry)
        .def("SetBehaviorProviderDefinition", &UBehaviorVolumeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UBehaviorVolumeDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}