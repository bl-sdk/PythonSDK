#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowProfileSettings()
{
    class_< UWillowProfileSettings, bases< UGearboxProfileSettings >  , boost::noncopyable>("UWillowProfileSettings", no_init)
        .def("StaticClass", &UWillowProfileSettings::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsSetToDefaults", &UWillowProfileSettings::IsSetToDefaults)
        .staticmethod("StaticClass")
  ;
}