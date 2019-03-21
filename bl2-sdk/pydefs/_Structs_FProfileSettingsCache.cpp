#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProfileSettingsCache()
{
    py::class_< FProfileSettingsCache >("FProfileSettingsCache")
        .def_readwrite("Profile", &FProfileSettingsCache::Profile)
        .def_readwrite("ReadDelegates", &FProfileSettingsCache::ReadDelegates)
        .def_readwrite("WriteDelegates", &FProfileSettingsCache::WriteDelegates)
        .def_readwrite("ProfileDataChangedDelegates", &FProfileSettingsCache::ProfileDataChangedDelegates)
  ;
}