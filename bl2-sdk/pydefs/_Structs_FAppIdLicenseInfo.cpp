#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAppIdLicenseInfo(py::module &m)
{
    py::class_< FAppIdLicenseInfo >(m, "FAppIdLicenseInfo")
        .def_readwrite("AppID", &FAppIdLicenseInfo::AppID)
        .def_readwrite("LicenseMask", &FAppIdLicenseInfo::LicenseMask)
  ;
}