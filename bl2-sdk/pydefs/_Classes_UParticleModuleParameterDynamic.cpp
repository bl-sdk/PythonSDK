#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleParameterDynamic()
{
    class_< UParticleModuleParameterDynamic, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleParameterDynamic", no_init)
        .def_readwrite("DynamicParams", &UParticleModuleParameterDynamic::DynamicParams)
        .def_readwrite("UpdateFlags", &UParticleModuleParameterDynamic::UpdateFlags)
        .def("StaticClass", &UParticleModuleParameterDynamic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}