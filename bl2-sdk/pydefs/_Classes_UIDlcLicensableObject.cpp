#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDlcLicensableObject()
{
    py::class_< UIDlcLicensableObject,  UInterface   >("UIDlcLicensableObject")
        .def("StaticClass", &UIDlcLicensableObject::StaticClass, py::return_value_policy::reference)
        .def("GetDownloadableContentDefinition", &UIDlcLicensableObject::GetDownloadableContentDefinition, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}