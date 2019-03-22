#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFailedConnect(py::module &m)
{
    py::class_< UFailedConnect,  ULocalMessage   >(m, "UFailedConnect")
        .def("GetString", &UFailedConnect::GetString)
        .def("GetFailSwitch", &UFailedConnect::GetFailSwitch)
          ;
}