#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInstalledContentInfo(py::module &m)
{
    py::class_< FInstalledContentInfo >(m, "FInstalledContentInfo")
        .def_readwrite("ContentType", &FInstalledContentInfo::ContentType)
        .def_readwrite("ContentName", &FInstalledContentInfo::ContentName)
        .def_readwrite("ContentPath", &FInstalledContentInfo::ContentPath)
        .def_readwrite("Filename", &FInstalledContentInfo::Filename)
        .def_readwrite("DeviceID", &FInstalledContentInfo::DeviceID)
        .def_readwrite("LicenseMask", &FInstalledContentInfo::LicenseMask)
        .def_readwrite("CachedAppIdInfo", &FInstalledContentInfo::CachedAppIdInfo)
  ;
}