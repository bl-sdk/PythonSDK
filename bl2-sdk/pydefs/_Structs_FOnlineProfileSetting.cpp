#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineProfileSetting()
{
    py::class_< FOnlineProfileSetting >("FOnlineProfileSetting")
        .def_readwrite("Owner", &FOnlineProfileSetting::Owner)
        .def_readwrite("ProfileSetting", &FOnlineProfileSetting::ProfileSetting)
  ;
}