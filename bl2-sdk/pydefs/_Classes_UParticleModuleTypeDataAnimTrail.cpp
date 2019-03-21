#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataAnimTrail()
{
    class_< UParticleModuleTypeDataAnimTrail, bases< UParticleModuleTypeDataBase >  , boost::noncopyable>("UParticleModuleTypeDataAnimTrail", no_init)
        .def_readwrite("ControlEdgeName", &UParticleModuleTypeDataAnimTrail::ControlEdgeName)
        .def_readwrite("SheetsPerTrail", &UParticleModuleTypeDataAnimTrail::SheetsPerTrail)
        .def_readwrite("TilingDistance", &UParticleModuleTypeDataAnimTrail::TilingDistance)
        .def_readwrite("DistanceTessellationStepSize", &UParticleModuleTypeDataAnimTrail::DistanceTessellationStepSize)
        .def_readwrite("TangentTessellationScalar", &UParticleModuleTypeDataAnimTrail::TangentTessellationScalar)
        .def("StaticClass", &UParticleModuleTypeDataAnimTrail::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}