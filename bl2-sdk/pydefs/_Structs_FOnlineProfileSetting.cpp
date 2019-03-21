#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineProfileSetting(py::object m)
{
    py::class_< FOnlineProfileSetting >(m, "FOnlineProfileSetting")
        .def_readwrite("Owner", &FOnlineProfileSetting::Owner)
        .def_readwrite("ProfileSetting", &FOnlineProfileSetting::ProfileSetting)
  ;
}