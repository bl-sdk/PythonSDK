#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PostProcessChain_LostShield(py::module &m)
{
    py::class_< UBehavior_PostProcessChain_LostShield,  UBehavior_PostProcessChain   >(m, "UBehavior_PostProcessChain_LostShield")
		.def_static("StaticClass", &UBehavior_PostProcessChain_LostShield::StaticClass, py::return_value_policy::reference)
        .def_readwrite("HealthParamName", &UBehavior_PostProcessChain_LostShield::HealthParamName)
        .def_readwrite("MaterialEffectName", &UBehavior_PostProcessChain_LostShield::MaterialEffectName)
        .def_readwrite("UpdateRate", &UBehavior_PostProcessChain_LostShield::UpdateRate)
        .def("ApplyBehaviorToContext", &UBehavior_PostProcessChain_LostShield::ApplyBehaviorToContext)
          ;
}