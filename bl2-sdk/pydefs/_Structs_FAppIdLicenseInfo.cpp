#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAppIdLicenseInfo()
{
    class_< FAppIdLicenseInfo >("FAppIdLicenseInfo", no_init)
        .def_readwrite("AppID", &FAppIdLicenseInfo::AppID)
        .def_readwrite("LicenseMask", &FAppIdLicenseInfo::LicenseMask)
  ;
}