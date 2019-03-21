#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAppIdLicenseInfo()
{
    py::class_< FAppIdLicenseInfo >("FAppIdLicenseInfo")
        .def_readwrite("AppID", &FAppIdLicenseInfo::AppID)
        .def_readwrite("LicenseMask", &FAppIdLicenseInfo::LicenseMask)
  ;
}