#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadablePackageLicense()
{
    py::class_< UDownloadablePackageLicense,  UObject   >("UDownloadablePackageLicense")
        .def_readwrite("LicenseMask", &UDownloadablePackageLicense::LicenseMask)
        .def("StaticClass", &UDownloadablePackageLicense::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}