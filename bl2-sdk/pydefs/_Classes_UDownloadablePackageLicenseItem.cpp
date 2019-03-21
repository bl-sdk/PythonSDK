#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadablePackageLicenseItem()
{
    py::class_< UDownloadablePackageLicenseItem,  UObject   >("UDownloadablePackageLicenseItem")
        .def_readwrite("LicenseMask", &UDownloadablePackageLicenseItem::LicenseMask)
        .def("StaticClass", &UDownloadablePackageLicenseItem::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}