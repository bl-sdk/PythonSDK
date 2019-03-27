#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPremiumCustomizationInfo(py::module &m)
{
    py::class_< FPremiumCustomizationInfo >(m, "FPremiumCustomizationInfo")
        .def_readwrite("OfferId", &FPremiumCustomizationInfo::OfferId)
        .def_readwrite("PackageId", &FPremiumCustomizationInfo::PackageId)
        .def_readwrite("ContentId", &FPremiumCustomizationInfo::ContentId)
        .def_readwrite("PS3TitleId", &FPremiumCustomizationInfo::PS3TitleId)
  ;
}