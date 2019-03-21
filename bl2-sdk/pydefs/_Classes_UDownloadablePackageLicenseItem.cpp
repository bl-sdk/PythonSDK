#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadablePackageLicenseItem()
{
    class_< UDownloadablePackageLicenseItem, bases< UObject >  , boost::noncopyable>("UDownloadablePackageLicenseItem", no_init)
        .def_readwrite("LicenseMask", &UDownloadablePackageLicenseItem::LicenseMask)
        .def("StaticClass", &UDownloadablePackageLicenseItem::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}