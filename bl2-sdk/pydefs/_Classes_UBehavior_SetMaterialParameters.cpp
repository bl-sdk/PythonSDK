#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetMaterialParameters(py::module &m)
{
    py::class_< UBehavior_SetMaterialParameters,  UBehaviorBase   >(m, "UBehavior_SetMaterialParameters")
        .def_readwrite("AttributeContext", &UBehavior_SetMaterialParameters::AttributeContext)
        .def_readwrite("MeshSection", &UBehavior_SetMaterialParameters::MeshSection)
        .def_readwrite("ScalarParameterValues", &UBehavior_SetMaterialParameters::ScalarParameterValues)
        .def_readwrite("VectorParameterValues", &UBehavior_SetMaterialParameters::VectorParameterValues)
        .def_readwrite("TextureParameterValues", &UBehavior_SetMaterialParameters::TextureParameterValues)
        .def("ApplyBehaviorToContext", &UBehavior_SetMaterialParameters::ApplyBehaviorToContext)
          ;
}