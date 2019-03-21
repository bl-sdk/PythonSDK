#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownload(py::object m)
{
    py::class_< UDownload,  UObject   >(m, "UDownload")
        .def("StaticClass", &UDownload::StaticClass, py::return_value_policy::reference)
          ;
}