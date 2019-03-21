#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableVehicleDefinition()
{
    class_< UDownloadableVehicleDefinition, bases< UDownloadableContentDefinition >  , boost::noncopyable>("UDownloadableVehicleDefinition", no_init)
        .def("StaticClass", &UDownloadableVehicleDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanDrive", &UDownloadableVehicleDefinition::CanDrive)
        .staticmethod("StaticClass")
  ;
}