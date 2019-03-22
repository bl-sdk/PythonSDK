#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerEventProviderDefinition(py::module &m)
{
    py::class_< UPlayerEventProviderDefinition,  UGBXDefinition   >(m, "UPlayerEventProviderDefinition")
        .def_readwrite("VfTable_IIBehaviorProvider", &UPlayerEventProviderDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("VfTable_IIConstructObject", &UPlayerEventProviderDefinition::VfTable_IIConstructObject)
        .def_readwrite("BehaviorProviderDefinition", &UPlayerEventProviderDefinition::BehaviorProviderDefinition)
        .def("OnPlayerEvent", &UPlayerEventProviderDefinition::OnPlayerEvent)
        .def("SetBehaviorProviderDefinition", &UPlayerEventProviderDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UPlayerEventProviderDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}