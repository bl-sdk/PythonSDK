#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPremiumCustomizationInfo()
{
    class_< FPremiumCustomizationInfo >("FPremiumCustomizationInfo", no_init)
        .def_readwrite("OfferId", &FPremiumCustomizationInfo::OfferId)
        .def_readwrite("PackageId", &FPremiumCustomizationInfo::PackageId)
        .def_readwrite("ContentId", &FPremiumCustomizationInfo::ContentId)
        .def_readwrite("PS3TitleId", &FPremiumCustomizationInfo::PS3TitleId)
  ;
}