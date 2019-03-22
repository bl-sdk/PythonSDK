#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadablePackageLicenseItem(py::module &m)
{
    py::class_< UDownloadablePackageLicenseItem,  UObject   >(m, "UDownloadablePackageLicenseItem")
        .def_readwrite("LicenseMask", &UDownloadablePackageLicenseItem::LicenseMask)
          ;
}