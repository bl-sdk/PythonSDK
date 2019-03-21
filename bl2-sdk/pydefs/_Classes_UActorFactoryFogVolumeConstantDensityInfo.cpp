#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeConstantDensityInfo()
{
    class_< UActorFactoryFogVolumeConstantDensityInfo, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryFogVolumeConstantDensityInfo", no_init)
        .def_readwrite("SelectedMaterial", &UActorFactoryFogVolumeConstantDensityInfo::SelectedMaterial)
        .def("StaticClass", &UActorFactoryFogVolumeConstantDensityInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}