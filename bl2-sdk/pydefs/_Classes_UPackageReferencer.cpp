#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPackageReferencer()
{
    class_< UPackageReferencer, bases< UObject >  , boost::noncopyable>("UPackageReferencer", no_init)
        .def_readwrite("PackageNames", &UPackageReferencer::PackageNames)
        .def("StaticClass", &UPackageReferencer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}