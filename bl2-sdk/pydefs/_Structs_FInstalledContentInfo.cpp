#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInstalledContentInfo()
{
    class_< FInstalledContentInfo >("FInstalledContentInfo", no_init)
        .def_readwrite("ContentType", &FInstalledContentInfo::ContentType)
        .def_readwrite("ContentName", &FInstalledContentInfo::ContentName)
        .def_readwrite("ContentPath", &FInstalledContentInfo::ContentPath)
        .def_readwrite("Filename", &FInstalledContentInfo::Filename)
        .def_readwrite("DeviceID", &FInstalledContentInfo::DeviceID)
        .def_readwrite("LicenseMask", &FInstalledContentInfo::LicenseMask)
        .def_readwrite("CachedAppIdInfo", &FInstalledContentInfo::CachedAppIdInfo)
  ;
}