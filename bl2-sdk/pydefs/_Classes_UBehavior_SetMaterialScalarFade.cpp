#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetMaterialScalarFade(py::module &m)
{
    py::class_< UBehavior_SetMaterialScalarFade,  UBehaviorBase   >(m, "UBehavior_SetMaterialScalarFade")
        .def_readwrite("ScalarName", &UBehavior_SetMaterialScalarFade::ScalarName)
        .def_readwrite("StartValue", &UBehavior_SetMaterialScalarFade::StartValue)
        .def_readwrite("EndValue", &UBehavior_SetMaterialScalarFade::EndValue)
        .def_readwrite("FadeTime", &UBehavior_SetMaterialScalarFade::FadeTime)
        .def("StartFade", &UBehavior_SetMaterialScalarFade::StartFade)
        .def("ApplyBehaviorToContext", &UBehavior_SetMaterialScalarFade::ApplyBehaviorToContext)
          ;
}