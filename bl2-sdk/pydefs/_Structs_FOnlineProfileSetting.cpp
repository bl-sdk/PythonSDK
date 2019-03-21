#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineProfileSetting()
{
    class_< FOnlineProfileSetting >("FOnlineProfileSetting", no_init)
        .def_readwrite("Owner", &FOnlineProfileSetting::Owner)
        .def_readwrite("ProfileSetting", &FOnlineProfileSetting::ProfileSetting)
  ;
}