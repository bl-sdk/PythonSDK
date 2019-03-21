#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FProfileSettingsCache()
{
    class_< FProfileSettingsCache >("FProfileSettingsCache", no_init)
        .def_readwrite("Profile", &FProfileSettingsCache::Profile)
        .def_readwrite("ReadDelegates", &FProfileSettingsCache::ReadDelegates)
        .def_readwrite("WriteDelegates", &FProfileSettingsCache::WriteDelegates)
        .def_readwrite("ProfileDataChangedDelegates", &FProfileSettingsCache::ProfileDataChangedDelegates)
  ;
}