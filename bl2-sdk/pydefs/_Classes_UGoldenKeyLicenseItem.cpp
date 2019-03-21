#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGoldenKeyLicenseItem(py::object m)
{
    py::class_< UGoldenKeyLicenseItem,  UDownloadablePackageLicenseItem   >(m, "UGoldenKeyLicenseItem")
        .def_readwrite("SourceId", &UGoldenKeyLicenseItem::SourceId)
        .def_readwrite("NumKeys", &UGoldenKeyLicenseItem::NumKeys)
        .def("StaticClass", &UGoldenKeyLicenseItem::StaticClass, py::return_value_policy::reference)
          ;
}