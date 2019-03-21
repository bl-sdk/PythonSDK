#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketingUnlockLicenseItem()
{
    py::class_< UMarketingUnlockLicenseItem,  UDownloadablePackageLicenseItem   >("UMarketingUnlockLicenseItem")
        .def_readwrite("UnlockId", &UMarketingUnlockLicenseItem::UnlockId)
        .def("StaticClass", &UMarketingUnlockLicenseItem::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}