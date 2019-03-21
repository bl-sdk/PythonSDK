#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDevelopmentDownloadableContentEnumerator(py::object m)
{
    py::class_< UDevelopmentDownloadableContentEnumerator,  UDownloadableContentEnumerator   >(m, "UDevelopmentDownloadableContentEnumerator")
        .def("StaticClass", &UDevelopmentDownloadableContentEnumerator::StaticClass, py::return_value_policy::reference)
        .def("InstallAllDLC", &UDevelopmentDownloadableContentEnumerator::InstallAllDLC)
          ;
}