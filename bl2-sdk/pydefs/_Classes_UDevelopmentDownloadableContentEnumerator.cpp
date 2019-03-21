#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDevelopmentDownloadableContentEnumerator()
{
    py::class_< UDevelopmentDownloadableContentEnumerator,  UDownloadableContentEnumerator   >("UDevelopmentDownloadableContentEnumerator")
        .def("StaticClass", &UDevelopmentDownloadableContentEnumerator::StaticClass, py::return_value_policy::reference)
        .def("InstallAllDLC", &UDevelopmentDownloadableContentEnumerator::InstallAllDLC)
        .staticmethod("StaticClass")
  ;
}