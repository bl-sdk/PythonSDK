#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicalMaterial(py::module &m)
{
    py::class_< UPhysicalMaterial,  UObject   >(m, "UPhysicalMaterial")
		.def_static("StaticClass", &UPhysicalMaterial::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaterialIndex", &UPhysicalMaterial::MaterialIndex)
        .def_readwrite("Friction", &UPhysicalMaterial::Friction)
        .def_readwrite("Restitution", &UPhysicalMaterial::Restitution)
        .def_readwrite("AnisoFrictionDir", &UPhysicalMaterial::AnisoFrictionDir)
        .def_readwrite("FrictionV", &UPhysicalMaterial::FrictionV)
        .def_readwrite("Density", &UPhysicalMaterial::Density)
        .def_readwrite("AngularDamping", &UPhysicalMaterial::AngularDamping)
        .def_readwrite("LinearDamping", &UPhysicalMaterial::LinearDamping)
        .def_readwrite("MagneticResponse", &UPhysicalMaterial::MagneticResponse)
        .def_readwrite("WindResponse", &UPhysicalMaterial::WindResponse)
        .def_readwrite("ImpactThreshold", &UPhysicalMaterial::ImpactThreshold)
        .def_readwrite("ImpactReFireDelay", &UPhysicalMaterial::ImpactReFireDelay)
        .def_readwrite("ImpactEffect", &UPhysicalMaterial::ImpactEffect)
        .def_readwrite("ImpactSound", &UPhysicalMaterial::ImpactSound)
        .def_readwrite("ImpactDefinition", &UPhysicalMaterial::ImpactDefinition)
        .def_readwrite("SlideThreshold", &UPhysicalMaterial::SlideThreshold)
        .def_readwrite("SlideReFireDelay", &UPhysicalMaterial::SlideReFireDelay)
        .def_readwrite("SlideEffect", &UPhysicalMaterial::SlideEffect)
        .def_readwrite("SlideSound", &UPhysicalMaterial::SlideSound)
        .def_readwrite("SlideImpactDefinition", &UPhysicalMaterial::SlideImpactDefinition)
        .def_readwrite("FractureSoundExplosion", &UPhysicalMaterial::FractureSoundExplosion)
        .def_readwrite("FractureSoundSingle", &UPhysicalMaterial::FractureSoundSingle)
        .def_readwrite("Parent", &UPhysicalMaterial::Parent)
        .def_readwrite("PhysicalMaterialProperty", &UPhysicalMaterial::PhysicalMaterialProperty)
        .def("GetPhysicalMaterialProperty", &UPhysicalMaterial::GetPhysicalMaterialProperty, py::return_value_policy::reference)
        .def("FindFractureSounds", [](UPhysicalMaterial &self ) { class USoundCue** pyOutSoundExplosion = 0 ; class USoundCue** pyOutSoundSingle = 0 ;   self.FindFractureSounds(pyOutSoundExplosion, pyOutSoundSingle); return py::make_tuple(*pyOutSoundExplosion, *pyOutSoundSingle); })
        .def("FindPhysEffectInfo", &UPhysicalMaterial::FindPhysEffectInfo)
          ;
}