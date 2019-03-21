#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialInstance()
{
    py::class_< UMaterialInstance,  UMaterialInterface   >("UMaterialInstance")
        .def_readwrite("PhysMaterial", &UMaterialInstance::PhysMaterial)
        .def_readwrite("Parent", &UMaterialInstance::Parent)
        .def_readwrite("PhysMaterialMask", &UMaterialInstance::PhysMaterialMask)
        .def_readwrite("PhysMaterialMaskUVChannel", &UMaterialInstance::PhysMaterialMaskUVChannel)
        .def_readwrite("BlackPhysicalMaterial", &UMaterialInstance::BlackPhysicalMaterial)
        .def_readwrite("WhitePhysicalMaterial", &UMaterialInstance::WhitePhysicalMaterial)
        .def_readonly("StaticParameters", &UMaterialInstance::StaticParameters)
        .def_readonly("StaticPermutationResources", &UMaterialInstance::StaticPermutationResources)
        .def_readonly("Resources", &UMaterialInstance::Resources)
        .def_readwrite("ReferencedTextures", &UMaterialInstance::ReferencedTextures)
        .def_readwrite("ParentLightingGuid", &UMaterialInstance::ParentLightingGuid)
        .def("StaticClass", &UMaterialInstance::StaticClass, py::return_value_policy::reference)
        .def("IsInMapOrTransientPackage", &UMaterialInstance::IsInMapOrTransientPackage)
        .def("ClearParameterValues", &UMaterialInstance::ClearParameterValues)
        .def("SetFontParameterValue", &UMaterialInstance::SetFontParameterValue)
        .def("SetTextureParameterValue", &UMaterialInstance::SetTextureParameterValue)
        .def("SetScalarCurveParameterValue", &UMaterialInstance::SetScalarCurveParameterValue)
        .def("SetScalarParameterValue", &UMaterialInstance::SetScalarParameterValue)
        .def("SetVectorParameterValue", &UMaterialInstance::SetVectorParameterValue)
        .def("SetParent", &UMaterialInstance::SetParent)
        .staticmethod("StaticClass")
  ;
}