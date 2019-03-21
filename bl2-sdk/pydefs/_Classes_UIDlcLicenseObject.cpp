#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDlcLicenseObject()
{
    class_< UIDlcLicenseObject, bases< UInterface >  , boost::noncopyable>("UIDlcLicenseObject", no_init)
        .def("StaticClass", &UIDlcLicenseObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}