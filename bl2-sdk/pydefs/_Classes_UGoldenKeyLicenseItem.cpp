#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGoldenKeyLicenseItem()
{
    class_< UGoldenKeyLicenseItem, bases< UDownloadablePackageLicenseItem >  , boost::noncopyable>("UGoldenKeyLicenseItem", no_init)
        .def_readwrite("SourceId", &UGoldenKeyLicenseItem::SourceId)
        .def_readwrite("NumKeys", &UGoldenKeyLicenseItem::NumKeys)
        .def("StaticClass", &UGoldenKeyLicenseItem::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}