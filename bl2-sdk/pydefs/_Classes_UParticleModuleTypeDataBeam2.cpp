#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataBeam2()
{
    class_< UParticleModuleTypeDataBeam2, bases< UParticleModuleTypeDataBase >  , boost::noncopyable>("UParticleModuleTypeDataBeam2", no_init)
        .def_readwrite("BeamMethod", &UParticleModuleTypeDataBeam2::BeamMethod)
        .def_readwrite("TaperMethod", &UParticleModuleTypeDataBeam2::TaperMethod)
        .def_readwrite("TextureTile", &UParticleModuleTypeDataBeam2::TextureTile)
        .def_readwrite("TextureTileDistance", &UParticleModuleTypeDataBeam2::TextureTileDistance)
        .def_readwrite("Sheets", &UParticleModuleTypeDataBeam2::Sheets)
        .def_readwrite("MaxBeamCount", &UParticleModuleTypeDataBeam2::MaxBeamCount)
        .def_readwrite("Speed", &UParticleModuleTypeDataBeam2::Speed)
        .def_readwrite("InterpolationPoints", &UParticleModuleTypeDataBeam2::InterpolationPoints)
        .def_readwrite("UpVectorStepSize", &UParticleModuleTypeDataBeam2::UpVectorStepSize)
        .def_readwrite("BranchParentName", &UParticleModuleTypeDataBeam2::BranchParentName)
        .def_readwrite("Distance", &UParticleModuleTypeDataBeam2::Distance)
        .def_readwrite("TaperFactor", &UParticleModuleTypeDataBeam2::TaperFactor)
        .def_readwrite("TaperScale", &UParticleModuleTypeDataBeam2::TaperScale)
        .def("StaticClass", &UParticleModuleTypeDataBeam2::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}