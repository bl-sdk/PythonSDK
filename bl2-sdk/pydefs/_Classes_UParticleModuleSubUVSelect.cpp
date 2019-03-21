#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVSelect()
{
    class_< UParticleModuleSubUVSelect, bases< UParticleModuleSubUVBase >  , boost::noncopyable>("UParticleModuleSubUVSelect", no_init)
        .def_readwrite("SubImageSelect", &UParticleModuleSubUVSelect::SubImageSelect)
        .def("StaticClass", &UParticleModuleSubUVSelect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}