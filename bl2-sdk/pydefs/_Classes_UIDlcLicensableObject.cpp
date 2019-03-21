#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDlcLicensableObject()
{
    class_< UIDlcLicensableObject, bases< UInterface >  , boost::noncopyable>("UIDlcLicensableObject", no_init)
        .def("StaticClass", &UIDlcLicensableObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDownloadableContentDefinition", &UIDlcLicensableObject::GetDownloadableContentDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}