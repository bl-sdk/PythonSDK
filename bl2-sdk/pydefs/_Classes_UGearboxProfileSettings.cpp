#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxProfileSettings()
{
    class_< UGearboxProfileSettings, bases< UOnlineProfileSettings >  , boost::noncopyable>("UGearboxProfileSettings", no_init)
        .def("StaticClass", &UGearboxProfileSettings::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}