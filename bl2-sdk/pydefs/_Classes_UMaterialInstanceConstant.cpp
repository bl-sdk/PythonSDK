#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialInstanceConstant(py::object m)
{
    py::class_< UMaterialInstanceConstant,  UMaterialInterface   >(m, "UMaterialInstanceConstant")
        .def_readwrite("FontParameterValues", &UMaterialInstanceConstant::FontParameterValues)
        .def_readwrite("ScalarParameterValues", &UMaterialInstanceConstant::ScalarParameterValues)
        .def_readwrite("TextureParameterValues", &UMaterialInstanceConstant::TextureParameterValues)
        .def_readwrite("VectorParameterValues", &UMaterialInstanceConstant::VectorParameterValues)
        .def_readwrite("PhysMaterial", &UMaterialInstance::PhysMaterial)
        .def_readwrite("Parent", &UMaterialInstance::Parent)
        .def_readwrite("PhysMaterialMask", &UMaterialInstance::PhysMaterialMask)
        .def_readwrite("PhysMaterialMaskUVChannel", &UMaterialInstance::PhysMaterialMaskUVChannel)
        .def_readwrite("BlackPhysicalMaterial", &UMaterialInstance::BlackPhysicalMaterial)
        .def_readwrite("WhitePhysicalMaterial", &UMaterialInstance::WhitePhysicalMaterial)
        .def_readwrite("ReferencedTextures", &UMaterialInstance::ReferencedTextures)
        .def_readwrite("ParentLightingGuid", &UMaterialInstance::ParentLightingGuid)
        .def("StaticClass", &UMaterialInstanceConstant::StaticClass, py::return_value_policy::reference)
        .def("Behavior_SetObjectParameterValue", &UMaterialInstanceConstant::Behavior_SetObjectParameterValue)
        .def("Behavior_SetFloatParameterValue", &UMaterialInstanceConstant::Behavior_SetFloatParameterValue)
        .def("Behavior_SetColorParameterValue", &UMaterialInstanceConstant::Behavior_SetColorParameterValue)
        .def("Behavior_SetVectorParameterValue", &UMaterialInstanceConstant::Behavior_SetVectorParameterValue)
        .def("Behavior_GetColorParameterValue", &UMaterialInstanceConstant::Behavior_GetColorParameterValue)
        .def("Behavior_GetVectorParameterValue", &UMaterialInstanceConstant::Behavior_GetVectorParameterValue)
        .def("Behavior_GetFloatParameterValue", &UMaterialInstanceConstant::Behavior_GetFloatParameterValue)
        .def("Behavior_GetObjectParameterValue", &UMaterialInstanceConstant::Behavior_GetObjectParameterValue)
        .def("ClearParameterValues", &UMaterialInstanceConstant::ClearParameterValues)
        .def("SetFontParameterValue", &UMaterialInstanceConstant::SetFontParameterValue)
        .def("SetVectorParameterValue", &UMaterialInstanceConstant::SetVectorParameterValue)
        .def("SetTextureParameterValue", &UMaterialInstanceConstant::SetTextureParameterValue)
        .def("SetScalarParameterValue", &UMaterialInstanceConstant::SetScalarParameterValue)
        .def("SetParent", &UMaterialInstanceConstant::SetParent)
        .def("IsInMapOrTransientPackage", &UMaterialInstance::IsInMapOrTransientPackage)
        .def("SetScalarCurveParameterValue", &UMaterialInstance::SetScalarCurveParameterValue)
          ;
}