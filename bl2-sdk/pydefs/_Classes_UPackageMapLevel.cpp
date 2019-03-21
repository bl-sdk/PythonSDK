#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPackageMapLevel()
{
    class_< UPackageMapLevel, bases< UPackageMap >  , boost::noncopyable>("UPackageMapLevel", no_init)
        .def_readonly("UnknownData00", &UPackageMapLevel::UnknownData00)
        .def("StaticClass", &UPackageMapLevel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}