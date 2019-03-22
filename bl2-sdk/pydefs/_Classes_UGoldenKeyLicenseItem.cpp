#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGoldenKeyLicenseItem(py::module &m)
{
    py::class_< UGoldenKeyLicenseItem,  UDownloadablePackageLicenseItem   >(m, "UGoldenKeyLicenseItem")
        .def_readwrite("SourceId", &UGoldenKeyLicenseItem::SourceId)
        .def_readwrite("NumKeys", &UGoldenKeyLicenseItem::NumKeys)
          ;
}