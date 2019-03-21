#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPackageMapSeekFree()
{
    class_< UPackageMapSeekFree, bases< UPackageMap >  , boost::noncopyable>("UPackageMapSeekFree", no_init)
        .def_readonly("UnknownData00", &UPackageMapLevel::UnknownData00)
        .def("StaticClass", &UPackageMapSeekFree::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}