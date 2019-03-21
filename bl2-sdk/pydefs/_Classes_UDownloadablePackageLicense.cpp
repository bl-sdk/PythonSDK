#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadablePackageLicense()
{
    class_< UDownloadablePackageLicense, bases< UObject >  , boost::noncopyable>("UDownloadablePackageLicense", no_init)
        .def_readwrite("LicenseMask", &UDownloadablePackageLicense::LicenseMask)
        .def("StaticClass", &UDownloadablePackageLicense::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}