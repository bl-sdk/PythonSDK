#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDlcLicensableObject(py::module &m)
{
    py::class_< UIDlcLicensableObject,  UInterface   >(m, "UIDlcLicensableObject")
        .def("GetDownloadableContentDefinition", &UIDlcLicensableObject::GetDownloadableContentDefinition, py::return_value_policy::reference)
          ;
}