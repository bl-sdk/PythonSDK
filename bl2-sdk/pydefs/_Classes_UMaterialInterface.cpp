#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialInterface()
{
    py::class_< UMaterialInterface,  UObject   >("UMaterialInterface")
        .def_readwrite("ParentRefFence", &UMaterialInterface::ParentRefFence)
        .def_readwrite("LightmassSettings", &UMaterialInterface::LightmassSettings)
        .def_readwrite("CustomSkinType", &UMaterialInterface::CustomSkinType)
        .def("StaticClass", &UMaterialInterface::StaticClass, py::return_value_policy::reference)
        .def("SetForceMipLevelsToBeResident", &UMaterialInterface::SetForceMipLevelsToBeResident)
        .def("Behavior_SetColorParameterValue", &UMaterialInterface::Behavior_SetColorParameterValue)
        .def("Behavior_SetFloatParameterValue", &UMaterialInterface::Behavior_SetFloatParameterValue)
        .def("Behavior_SetObjectParameterValue", &UMaterialInterface::Behavior_SetObjectParameterValue)
        .def("Behavior_SetVectorParameterValue", &UMaterialInterface::Behavior_SetVectorParameterValue)
        .def("Behavior_GetColorParameterValue", &UMaterialInterface::Behavior_GetColorParameterValue)
        .def("Behavior_GetFloatParameterValue", &UMaterialInterface::Behavior_GetFloatParameterValue)
        .def("Behavior_GetObjectParameterValue", &UMaterialInterface::Behavior_GetObjectParameterValue)
        .def("Behavior_GetVectorParameterValue", &UMaterialInterface::Behavior_GetVectorParameterValue)
        .def("GetVectorCurveParameterValue", &UMaterialInterface::GetVectorCurveParameterValue)
        .def("GetVectorParameterValue", &UMaterialInterface::GetVectorParameterValue)
        .def("GetTextureParameterValue", &UMaterialInterface::GetTextureParameterValue)
        .def("GetScalarCurveParameterValue", &UMaterialInterface::GetScalarCurveParameterValue)
        .def("GetScalarParameterValue", &UMaterialInterface::GetScalarParameterValue)
        .def("GetFontParameterValue", &UMaterialInterface::GetFontParameterValue)
        .def("GetParameterDesc", &UMaterialInterface::GetParameterDesc)
        .def("GetPhysicalMaterial", &UMaterialInterface::GetPhysicalMaterial, py::return_value_policy::reference)
        .def("GetMaterial", &UMaterialInterface::GetMaterial, py::return_value_policy::reference)
        .def("GetSurfaceHeight", &USurface::GetSurfaceHeight)
        .def("GetSurfaceWidth", &USurface::GetSurfaceWidth)
        .staticmethod("StaticClass")
  ;
}