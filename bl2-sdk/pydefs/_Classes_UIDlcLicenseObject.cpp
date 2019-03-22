#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDlcLicenseObject(py::module &m)
{
    py::class_< UIDlcLicenseObject,  UInterface   >(m, "UIDlcLicenseObject")
        .def("StaticClass", &UIDlcLicenseObject::StaticClass, py::return_value_policy::reference)
          ;
}