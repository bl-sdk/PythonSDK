#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleParameterDynamic_Seeded()
{
    class_< UParticleModuleParameterDynamic_Seeded, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleParameterDynamic_Seeded", no_init)
        .def_readwrite("RandomSeedInfo", &UParticleModuleParameterDynamic_Seeded::RandomSeedInfo)
        .def_readwrite("DynamicParams", &UParticleModuleParameterDynamic::DynamicParams)
        .def_readwrite("UpdateFlags", &UParticleModuleParameterDynamic::UpdateFlags)
        .def("StaticClass", &UParticleModuleParameterDynamic_Seeded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}