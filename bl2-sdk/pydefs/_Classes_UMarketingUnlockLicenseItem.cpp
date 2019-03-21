#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMarketingUnlockLicenseItem()
{
    class_< UMarketingUnlockLicenseItem, bases< UDownloadablePackageLicenseItem >  , boost::noncopyable>("UMarketingUnlockLicenseItem", no_init)
        .def_readwrite("UnlockId", &UMarketingUnlockLicenseItem::UnlockId)
        .def("StaticClass", &UMarketingUnlockLicenseItem::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}