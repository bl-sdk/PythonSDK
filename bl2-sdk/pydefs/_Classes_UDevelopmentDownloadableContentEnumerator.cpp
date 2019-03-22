#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDevelopmentDownloadableContentEnumerator(py::module &m)
{
    py::class_< UDevelopmentDownloadableContentEnumerator,  UDownloadableContentEnumerator   >(m, "UDevelopmentDownloadableContentEnumerator")
        .def("InstallAllDLC", &UDevelopmentDownloadableContentEnumerator::InstallAllDLC)
          ;
}