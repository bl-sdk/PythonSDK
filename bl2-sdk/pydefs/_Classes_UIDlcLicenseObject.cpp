#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDlcLicenseObject()
{
    py::class_< UIDlcLicenseObject,  UInterface   >("UIDlcLicenseObject")
        .def("StaticClass", &UIDlcLicenseObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}