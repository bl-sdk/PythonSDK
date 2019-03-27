#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetMorphNodeWeight(py::module &m)
{
    py::class_< UBehavior_SetMorphNodeWeight,  UBehaviorBase   >(m, "UBehavior_SetMorphNodeWeight")
		.def_static("StaticClass", &UBehavior_SetMorphNodeWeight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MorphNodeName", &UBehavior_SetMorphNodeWeight::MorphNodeName)
        .def_readwrite("WeightTarget", &UBehavior_SetMorphNodeWeight::WeightTarget)
        .def_readwrite("WeightBlendTime", &UBehavior_SetMorphNodeWeight::WeightBlendTime)
        .def("ApplyBehaviorToContext", &UBehavior_SetMorphNodeWeight::ApplyBehaviorToContext)
          ;
}