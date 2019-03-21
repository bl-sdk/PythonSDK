#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadablePackageLicenseItem(py::object m)
{
    py::class_< UDownloadablePackageLicenseItem,  UObject   >(m, "UDownloadablePackageLicenseItem")
        .def_readwrite("LicenseMask", &UDownloadablePackageLicenseItem::LicenseMask)
        .def("StaticClass", &UDownloadablePackageLicenseItem::StaticClass, py::return_value_policy::reference)
          ;
}