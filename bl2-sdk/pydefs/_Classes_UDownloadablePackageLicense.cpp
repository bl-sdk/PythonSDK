#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadablePackageLicense(py::object m)
{
    py::class_< UDownloadablePackageLicense,  UObject   >(m, "UDownloadablePackageLicense")
        .def_readwrite("LicenseMask", &UDownloadablePackageLicense::LicenseMask)
        .def("StaticClass", &UDownloadablePackageLicense::StaticClass, py::return_value_policy::reference)
          ;
}