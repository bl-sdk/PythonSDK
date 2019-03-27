#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMarketingUnlockLicenseItem(py::module &m)
{
    py::class_< UMarketingUnlockLicenseItem,  UDownloadablePackageLicenseItem   >(m, "UMarketingUnlockLicenseItem")
		.def_static("StaticClass", &UMarketingUnlockLicenseItem::StaticClass, py::return_value_policy::reference)
        .def_readwrite("UnlockId", &UMarketingUnlockLicenseItem::UnlockId)
          ;
}