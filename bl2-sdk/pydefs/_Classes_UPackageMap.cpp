#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPackageMap()
{
    class_< UPackageMap, bases< UObject >  , boost::noncopyable>("UPackageMap", no_init)
        .def_readonly("UnknownData00", &UPackageMap::UnknownData00)
        .def("StaticClass", &UPackageMap::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}