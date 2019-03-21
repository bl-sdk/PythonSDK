#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineContent()
{
    class_< FOnlineContent >("FOnlineContent", no_init)
        .def_readwrite("ContentType", &FOnlineContent::ContentType)
        .def_readwrite("UserIndex", &FOnlineContent::UserIndex)
        .def_readwrite("DeviceID", &FOnlineContent::DeviceID)
        .def_readwrite("LicenseMask", &FOnlineContent::LicenseMask)
        .def_readwrite("FriendlyName", &FOnlineContent::FriendlyName)
        .def_readwrite("Filename", &FOnlineContent::Filename)
        .def_readwrite("ContentPath", &FOnlineContent::ContentPath)
        .def_readwrite("ContentPackages", &FOnlineContent::ContentPackages)
        .def_readwrite("ContentFiles", &FOnlineContent::ContentFiles)
        .def_readwrite("CachedAppIdInfo", &FOnlineContent::CachedAppIdInfo)
        .def_readwrite("TOCInfo", &FOnlineContent::TOCInfo)
  ;
}