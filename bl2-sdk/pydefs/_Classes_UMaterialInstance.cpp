#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialInstance()
{
    class_< UMaterialInstance, bases< UMaterialInterface >  , boost::noncopyable>("UMaterialInstance", no_init)
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
        .def("StaticClass", &UMaterialInstance::StaticClass, return_value_policy< reference_existing_object >())
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