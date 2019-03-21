#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetMaterialParameters()
{
    py::class_< UBehavior_SetMaterialParameters,  UBehaviorBase   >("UBehavior_SetMaterialParameters")
        .def_readwrite("AttributeContext", &UBehavior_SetMaterialParameters::AttributeContext)
        .def_readwrite("MeshSection", &UBehavior_SetMaterialParameters::MeshSection)
        .def_readwrite("ScalarParameterValues", &UBehavior_SetMaterialParameters::ScalarParameterValues)
        .def_readwrite("VectorParameterValues", &UBehavior_SetMaterialParameters::VectorParameterValues)
        .def_readwrite("TextureParameterValues", &UBehavior_SetMaterialParameters::TextureParameterValues)
        .def("StaticClass", &UBehavior_SetMaterialParameters::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetMaterialParameters::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}